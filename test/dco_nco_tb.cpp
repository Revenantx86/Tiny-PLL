#include "Vdco_nco.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>

// --- CONFIGURATION ---
const double SYS_CLK_FREQ = 100e6; // 100 MHz System Clock
const double TOLERANCE = 0.01;     // 1% Allowed Error

struct TestCase {
    double target_freq;
    std::string description;
};

std::vector<TestCase> scenarios = {
    {1.0e6,   "Low Freq (1 MHz)"},
    {5.0e6,   "Mid Freq (5 MHz)"},
    {12.34e6, "Odd Freq (12.34 MHz)"},
    {25.0e6,  "Exact Div (25 MHz)"},
    {40.0e6,  "High Freq (40 MHz)"}
};

// --- GLOBALS ---
vluint64_t sim_time = 0;
Vdco_nco* dut;
VerilatedVcdC* m_trace;

void step() {
    dut->sys_clk ^= 1; 
    dut->eval();
    m_trace->dump(sim_time);
    sim_time++;
}

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);

    dut = new Vdco_nco;
    m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 5);
    m_trace->open("waveform_dco_func.vcd");

    dut->sys_clk = 0;
    dut->rst_n = 0;
    dut->tuning_word = 0;

    std::cout << "\n========================================" << std::endl;
    std::cout << "     DCO FUNCTIONAL VERIFICATION" << std::endl;
    std::cout << "   (SysClk: 100 MHz | Tol: 1%)" << std::endl;
    std::cout << "========================================\n" << std::endl;

    int total_failures = 0;

    // Reset Sequence
    for(int i=0; i<20; i++) step();
    dut->rst_n = 1;

    for (const auto& test : scenarios) {
        
        // 1. Set Tuning Word
        uint64_t tuning_word_calc = (uint64_t)((test.target_freq / SYS_CLK_FREQ) * 4294967296.0);
        dut->tuning_word = (uint32_t)tuning_word_calc;

        // Warmup
        for(int i=0; i<100; i++) step();

        // 2. MEASUREMENT PHASE
        int last_dco = dut->dco_out;
        int timeout = 100000; 
        bool found_start_edge = false;

        // A: Hunt for Start Edge
        while(timeout-- > 0) {
            step();
            if (dut->dco_out == 1 && last_dco == 0) {
                found_start_edge = true;
                break; 
            }
            last_dco = dut->dco_out;
        }
        
        if (!found_start_edge) {
            std::cout << "[FAIL] " << test.description << " -> Stuck" << std::endl;
            total_failures++;
            continue;
        }

        // --- CRITICAL FIX ---
        // We manually update last_dco so the next loop knows the signal is currently HIGH.
        // This prevents counting the start edge as "Pulse 1" instantly.
        last_dco = dut->dco_out; 
        
        // DEBUG PRINT (Only prints once to confirm code is updated)
        if (test.target_freq == 1.0e6) {
             // std::cout << "DEBUG: Synchronized at time " << sim_time << ". last_dco set to " << last_dco << std::endl;
        }
        // --------------------

        vluint64_t start_time = sim_time;

        // B: Count 50 Periods
        int pulses_target = 50; 
        int pulses_seen = 0;
        
        while (pulses_seen < pulses_target && sim_time < start_time + 500000) {
            step();
            if (dut->dco_out == 1 && last_dco == 0) {
                pulses_seen++;
            }
            last_dco = dut->dco_out;
        }

        vluint64_t end_time = sim_time;
        vluint64_t elapsed_ticks = end_time - start_time;

        // 3. Calculation
        double measured_freq = 0.0;
        if (elapsed_ticks > 0) {
             measured_freq = (double)pulses_target / ((double)elapsed_ticks / 2.0) * SYS_CLK_FREQ;
        }

        double error_perc = std::abs((measured_freq - test.target_freq) / test.target_freq);
        bool pass = (error_perc <= TOLERANCE);

        std::cout << "[" << (pass ? "PASS" : "FAIL") << "] " 
                  << std::left << std::setw(20) << test.description
                  << " | Target: " << std::fixed << std::setprecision(2) << (test.target_freq/1e6) << " M"
                  << " | Meas: " << (measured_freq/1e6) << " M"
                  << " | Err: " << std::setprecision(4) << (error_perc*100) << "%"
                  << std::endl;

        if (!pass) total_failures++;
    }

    std::cout << "\n========================================" << std::endl;
    if (total_failures == 0) 
        std::cout << "   ALL TESTS PASSED SUCCESSFULLY" << std::endl;
    else 
        std::cout << "   TESTS FAILED: " << total_failures << std::endl;
    std::cout << "========================================\n" << std::endl;

    m_trace->close();
    delete dut;
    return 0;
}