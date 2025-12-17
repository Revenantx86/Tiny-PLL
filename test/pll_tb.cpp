#include "Vpll_top.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <iomanip>
#include <string>

// --- GLOBALS ---
vluint64_t sim_time = 0;
Vpll_top* dut;
VerilatedVcdC* m_trace;

const double SYS_CLK_FREQ = 100e6;
const int REF_PERIOD_TICKS = 200; // 1 MHz Reference (200 * 5ns = 1us)

void step() {
    dut->sys_clk ^= 1; 
    dut->eval();
    m_trace->dump(sim_time);
    sim_time++;
}

// --- HELPER: Run a specific test phase ---
bool run_phase(int div_ratio, int duration_cycles, std::string label) {
    std::cout << "\n--------------------------------------------------" << std::endl;
    std::cout << " PHASE: " << label << std::endl;
    std::cout << " Target: " << div_ratio << " MHz (Ref=1MHz * Div=" << div_ratio << ")" << std::endl;
    std::cout << "--------------------------------------------------" << std::endl;

    // Update the Divider Ratio
    dut->div_val = div_ratio;

    int stable_samples = 0;
    double target_freq = (double)div_ratio * 1.0e6;
    double tolerance = 0.1e6; // +/- 100 kHz

    // We maintain a local ref counter to ensure the reference clock 
    // stays continuous across phases without phase jumps.
    static int ref_counter = 0;

    for (int i = 0; i < duration_cycles; i++) {
        step();

        // Continuous Reference Generation
        if (ref_counter == 0) dut->ref_clk = 1;
        if (ref_counter == 100) dut->ref_clk = 0;
        ref_counter = (ref_counter + 1) % REF_PERIOD_TICKS;

        // Monitor every 5000 ticks (approx 25us)
        if (i % 5000 == 0) {
            double current_freq = (double)dut->debug_dco_word * SYS_CLK_FREQ / 4294967296.0;
            
            // Visual Progress Bar
            std::cout << "[T+" << std::setw(6) << i << "] Freq: " 
                      << std::fixed << std::setprecision(3) << (current_freq/1e6) << " MHz "
                      << "| Lock: " << (int)dut->lock_detect;

            // Check correctness
            if (dut->lock_detect && 
                current_freq > (target_freq - tolerance) && 
                current_freq < (target_freq + tolerance)) {
                std::cout << " [OK]";
                stable_samples++;
            } else {
                std::cout << " ...";
            }
            std::cout << std::endl;
        }
    }

    if (stable_samples > 5) {
        std::cout << ">> RESULT: LOCKED to " << div_ratio << " MHz" << std::endl;
        return true;
    } else {
        std::cout << ">> RESULT: FAILED to Lock" << std::endl;
        return false;
    }
}
int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);

    dut = new Vpll_top;
    m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 5);
    m_trace->open("waveform_pll.vcd");

    // Initialize
    dut->sys_clk = 0;
    dut->rst_n = 0;
    dut->ref_clk = 0;
    
    // GAINS ARE NOW INTERNAL (Dynamic) - No C++ configuration needed.

    // Start Reset
    dut->initial_freq = 408021893; // 9.5 MHz
    for(int i=0; i<20; i++) step();
    dut->rst_n = 1;

    int passed_tests = 0;

    // 1. Nominal Test (10 MHz)
    if (run_phase(10, 200000, "Startup (10M)")) passed_tests++;

    // 2. High Speed Test (25 MHz)
    if (run_phase(25, 650000, "Jump High (25M)")) passed_tests++;

    // 3. Low Speed Test (4 MHz)
    if (run_phase(4, 500000, "Drop Low (4M)")) passed_tests++;

    std::cout << "\n========================================" << std::endl;
    if (passed_tests == 3) 
        std::cout << "   ALL FREQUENCY TESTS PASSED (3/3)" << std::endl;
    else 
        std::cout << "   TESTS FAILED: " << (3 - passed_tests) << std::endl;
    std::cout << "========================================\n" << std::endl;

    m_trace->close();
    delete dut;
    return 0;
}