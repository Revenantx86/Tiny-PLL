#include "Vdivider.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <vector>
#include <iomanip>

// --- TEST CONFIGURATION ---
struct TestCase {
    int div_val;
    std::string description;
};

// Define the scenarios we want to verify
std::vector<TestCase> scenarios = {
    {2,   "Minimum Even (2)"},
    {3,   "Minimum Odd (3)"},
    {4,   "Power of Two (4)"},
    {5,   "Prime / Odd (5)"},
    {10,  "Standard Decimal (10)"},
    {37,  "Large Prime (37)"},
    {100, "Large Even (100)"}
};

// --- SIMULATION GLOBALS ---
vluint64_t sim_time = 0;
Vdivider* dut;
VerilatedVcdC* m_trace;

void step() {
    dut->eval();
    m_trace->dump(sim_time);
    sim_time++;
}

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);

    dut = new Vdivider;
    m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 5);
    m_trace->open("waveform_div.vcd");

    // Initialize
    dut->clk_in = 0;
    dut->rst_n = 0;
    dut->div_val = 10;
    
    std::cout << "\n========================================" << std::endl;
    std::cout << "   DIVIDER FUNCTIONAL VERIFICATION" << std::endl;
    std::cout << "========================================\n" << std::endl;

    int total_failures = 0;

    for (const auto& test : scenarios) {
        
        // 1. SETUP TEST CASE
        dut->div_val = test.div_val;
        
        // Reset Logic
        dut->rst_n = 0;
        for(int i=0; i<10; i++) { dut->clk_in ^= 1; step(); } // Hold reset
        dut->rst_n = 1;
        
        // Wait for first edge to stabilize (flush pipeline)
        int warmup_limit = 2000;
        bool warmup_done = false;
        int last_clk_out = 0;
        
        while(warmup_limit-- > 0) {
            dut->clk_in ^= 1;
            step();
            if (dut->clk_out == 1 && last_clk_out == 0) {
                warmup_done = true;
                last_clk_out = dut->clk_out;
                break; 
            }
            last_clk_out = dut->clk_out;
        }

        if (!warmup_done) {
            std::cout << "[FAIL] " << std::left << std::setw(25) << test.description 
                      << " -> Output STUCK (No edges detected)" << std::endl;
            total_failures++;
            continue;
        }

        // 2. MEASUREMENT PHASE
        // We will measure 3 full periods to be safe
        int periods_to_measure = 3;
        int current_period_count = 0;
        int high_ticks = 0;
        int total_ticks = 0;
        
        // State tracking
        bool counting = false;
        int measured_period_len = 0;
        
        // Run simulation loop for this case
        int timeout = test.div_val * 10; // generous timeout
        bool case_passed = false;

        while (periods_to_measure > 0 && timeout > 0) {
            // Clock Toggle
            dut->clk_in ^= 1;
            
            // We only count "cycles" on rising edge of input clock
            if (dut->clk_in == 1) {
                if (counting) {
                    total_ticks++;
                    if (dut->clk_out) high_ticks++;
                }
            }

            step();

            // Detect Rising Edge of Output
            if (dut->clk_out == 1 && last_clk_out == 0) {
                if (counting) {
                    // We just finished a period
                    if (total_ticks == test.div_val) {
                        // Period is correct!
                        periods_to_measure--;
                    } else {
                        // Period is WRONG
                        std::cout << "[FAIL] " << std::left << std::setw(25) << test.description 
                                  << " -> Expected " << test.div_val << " cycles, got " << total_ticks << std::endl;
                        total_failures++;
                        periods_to_measure = 0; // Abort this case
                        goto next_case; // Break out
                    }
                } else {
                    // Start counting from this first edge
                    counting = true;
                }
                // Reset counters for next period
                total_ticks = 0;
                high_ticks = 0;
            }

            last_clk_out = dut->clk_out;
            if (dut->clk_in == 1) timeout--;
        }

        if (periods_to_measure == 0) {
            std::cout << "[PASS] " << std::left << std::setw(25) << test.description 
                      << " | Period: " << test.div_val << " (Matches)" << std::endl;
        } else {
             std::cout << "[FAIL] " << std::left << std::setw(25) << test.description 
                      << " -> Timeout (Output stopped toggling)" << std::endl;
             total_failures++;
        }

        next_case:; 
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