#include "Vdivider.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <vector>

vluint64_t sim_time = 0;

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);

    Vdivider* dut = new Vdivider;
    VerilatedVcdC* m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 5);
    m_trace->open("waveform_div.vcd");

    dut->clk_in = 0;
    dut->rst_n = 0;
    dut->div_val = 10; // Default start

    // --- CORNER CASES TO TEST ---
    // 2: Smallest valid even divider
    // 3: Smallest valid odd divider (tests integer truncation)
    // 4: Standard even
    // 10: Standard decimal
    // 13: Prime number (odd)
    // 100: Large number
    std::vector<int> test_cases = {2, 3, 4, 10, 13, 100}; 
    
    int case_idx = 0;
    int samples_per_case = 0;
    int last_clk_out = 0;
    int input_cycles = 0;
    int last_capture = 0;

    std::cout << "--- Starting Dynamic Divider Test ---" << std::endl;

    while (case_idx < test_cases.size() && sim_time < 10000) {
        
        dut->clk_in ^= 1; // Toggle Clock
        if (dut->clk_in == 1) input_cycles++;

        if (sim_time > 10) dut->rst_n = 1;

        // Apply current test case
        dut->div_val = test_cases[case_idx];

        dut->eval();
        m_trace->dump(sim_time);

        // Measure on Rising Edge of Output
        if (dut->clk_out == 1 && last_clk_out == 0 && dut->rst_n == 1) {
            
            int measured_ratio = input_cycles - last_capture;
            
            // Only print if we have valid data (skip first edge after reset/change)
            if (last_capture > 0 && measured_ratio > 0) {
                std::cout << "Target N=" << dut->div_val 
                          << " | Measured N=" << measured_ratio;

                if (measured_ratio == dut->div_val) 
                    std::cout << " [PASS]";
                else 
                    std::cout << " [FAIL]"; // Often fails on first cycle of change (normal)
                
                std::cout << std::endl;

                samples_per_case++;
                // After 3 successful samples, switch to next case
                if (samples_per_case >= 3) {
                    case_idx++;
                    samples_per_case = 0;
                    // Reset tracking to avoid glitches in measurement logic
                    // (Real hardware doesn't reset, but our measurement counter needs to sync)
                    last_capture = input_cycles; 
                }
            }
            last_capture = input_cycles;
        }

        last_clk_out = dut->clk_out;
        sim_time++;
    }

    m_trace->close();
    delete dut;
    return 0;
}