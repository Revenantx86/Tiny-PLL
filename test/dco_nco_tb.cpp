// dco_nco_tb.cpp
#include "Vdco_nco.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <iomanip>

vluint64_t sim_time = 0;
// Let's assume a System Clock of 100 MHz (10ns period) for calculation purposes
const double SYS_CLK_FREQ = 100e6; 

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);

    // Instantiate your NCO module
    Vdco_nco* dut = new Vdco_nco;

    // Waveform setup
    VerilatedVcdC* m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 5);
    m_trace->open("waveform.vcd");

    // Initialize
    dut->sys_clk = 0;
    dut->rst_n = 0;
    dut->tuning_word = 0;

    // Test Variables
    int last_dco_out = 0;
    vluint64_t last_rising_edge = 0;
    int edges_captured = 0;
    
    // We will test these specific Tuning Words
    // With WIDTH=32, Max = 4,294,967,296
    // Word = (Target / Fsys) * 2^32
    uint32_t tuning_words[] = {
        214748365,  // ~5 MHz (Target)
        429496730,  // ~10 MHz
        1073741824  // 25 MHz (Exact: 2^30)
    };
    int test_idx = 0;
    int max_tests = 3;

    std::cout << "--- Starting NCO Simulation ---" << std::endl;

    while (test_idx < max_tests && sim_time < 50000) { // Limit sim time
        
        // 1. Toggle System Clock (Simulating 100 MHz source)
        dut->sys_clk ^= 1; 

        // 2. Release Reset
        if (sim_time > 20) dut->rst_n = 1;

        // 3. Apply Tuning Word
        dut->tuning_word = tuning_words[test_idx];

        // 4. Evaluate
        dut->eval();
        m_trace->dump(sim_time);

        // 5. Measure Frequency of dco_out
        // We look for a Rising Edge on dco_out
        if (dut->dco_out == 1 && last_dco_out == 0 && dut->rst_n == 1) {
            
            // Calculate period in "half-cycles" of sys_clk
            vluint64_t period_ticks = sim_time - last_rising_edge;
            
            // Only print after the first valid edge and some settling
            if (last_rising_edge != 0 && edges_captured > 2) {
                
                // Convert simulation ticks to Frequency
                // Each 'sim_time' tick is half a sys_clk cycle
                // F_out = F_sys / (period_ticks / 2)
                double measured_freq = SYS_CLK_FREQ / (period_ticks / 2.0);

                std::cout << "Tuning Word: " << dut->tuning_word 
                          << " | Period (sys_clks): " << (period_ticks/2.0)
                          << " | Freq: " << std::fixed << std::setprecision(2) 
                          << (measured_freq / 1e6) << " MHz" << std::endl;

                // Move to next test case
                test_idx++;
                edges_captured = 0; // Reset for next test
                last_rising_edge = 0; // Reset measurement
            } else {
                 last_rising_edge = sim_time;
                 edges_captured++;
            }
        }
        
        last_dco_out = dut->dco_out;
        sim_time++;
    }

    m_trace->close();
    delete dut;
    return 0;
}