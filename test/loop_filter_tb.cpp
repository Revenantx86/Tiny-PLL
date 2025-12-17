#include "Vloop_filter.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <iomanip>

// --- GLOBALS ---
vluint64_t sim_time = 0;
Vloop_filter* dut;
VerilatedVcdC* m_trace;

// Advance time by one half-cycle
void step() {
    dut->clk ^= 1;
    dut->eval();
    m_trace->dump(sim_time);
    sim_time++;
}

// Helper to pulse the filter update signal
void trigger_sample() {
    // Ensure we start at a clean clock edge (clk=0)
    if (dut->clk == 1) step(); 
    
    // Create a 1-cycle pulse on sample_en
    dut->sample_en = 1;
    step(); step(); // 1 Cycle High
    dut->sample_en = 0; 
    step(); step(); // 1 Cycle Low
}

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);

    dut = new Vloop_filter;
    m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 5);
    m_trace->open("waveform_filter.vcd");

    // Initialize Inputs
    dut->clk = 0;
    dut->rst_n = 1; // Start High
    dut->sample_en = 0;
    dut->error_in = 0;
    
    // --- CONFIGURATION FOR UNIT TEST ---
    // We use small, readable numbers to verify the math easily.
    // Proportional Gain = 2^4 = 16
    // Integral Gain     = 2^2 = 4
    dut->kp_shift = 4; 
    dut->ki_shift = 2; 
    dut->initial_freq = 1000; // Start at 1000

    std::cout << "--- LOOP FILTER UNIT TEST ---" << std::endl;
    std::cout << "Gains: Kp=16 (shift 4), Ki=4 (shift 2)" << std::endl;

    // 1. HARD RESET SEQUENCE
    step(); step();
    dut->rst_n = 0; // Assert Reset
    step(); step(); step(); step();
    dut->rst_n = 1; // Release Reset
    step(); step();

    // 2. CHECK INITIALIZATION
    if (dut->dco_ctrl == 1000) 
        std::cout << "[PASS] Reset Value: " << dut->dco_ctrl << " (Expected 1000)" << std::endl;
    else
        std::cout << "[FAIL] Reset Value: " << dut->dco_ctrl << " (Expected 1000)" << std::endl;

    // 3. MATH CHECK (Step Response)
    // We inject Error = +1.
    // Prop Term = 1 * 16 = 16
    // Integ Term = 1 * 4 = 4
    
    // --- UPDATE 1 ---
    // Integrator should become: 1000 + 4 = 1004
    // Output should become:     1004 + 16 = 1020
    dut->error_in = 1;
    trigger_sample();

    if (dut->dco_ctrl == 1020) 
        std::cout << "[PASS] Step 1 Output: " << dut->dco_ctrl << " (Expected 1020)" << std::endl;
    else 
        std::cout << "[FAIL] Step 1 Output: " << dut->dco_ctrl << " (Expected 1020)" << std::endl;

    // --- UPDATE 2 ---
    // Integrator should become: 1004 + 4 = 1008
    // Output should become:     1008 + 16 = 1024
    trigger_sample();

    if (dut->dco_ctrl == 1024) 
        std::cout << "[PASS] Step 2 Output: " << dut->dco_ctrl << " (Expected 1024)" << std::endl;
    else 
        std::cout << "[FAIL] Step 2 Output: " << dut->dco_ctrl << " (Expected 1024)" << std::endl;

    // 4. LOCK DETECT TEST
    // Set error to 0 and wait for lock
    std::cout << "Testing Lock Detect (Waiting for 20 clean cycles)..." << std::endl;
    dut->error_in = 0;
    
    // Pulse 25 times
    for(int i=0; i<25; i++) trigger_sample();

    if (dut->lock_detect == 1) 
        std::cout << "[PASS] Lock Detect Asserted High" << std::endl;
    else 
        std::cout << "[FAIL] Lock Detect stuck Low" << std::endl;

    m_trace->close();
    delete dut;
    return 0;
}