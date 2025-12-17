#include "Vpfd.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <iomanip>

vluint64_t sim_time = 0;
Vpfd* dut;
VerilatedVcdC* m_trace;

void step() {
    dut->sys_clk ^= 1;
    dut->eval();
    m_trace->dump(sim_time);
    sim_time++;
}

void reset_clocks() {
    dut->ref_clk = 0;
    dut->fb_clk = 0;
    // Clear pipeline
    for(int i=0; i<10; i++) step();
}

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);

    dut = new Vpfd;
    m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 5);
    m_trace->open("waveform_pfd.vcd");

    // Initialize
    dut->sys_clk = 0;
    dut->rst_n = 0;
    dut->ref_clk = 0;
    dut->fb_clk = 0;

    std::cout << "\n========================================" << std::endl;
    std::cout << "      PFD FUNCTIONAL VERIFICATION" << std::endl;
    std::cout << "========================================\n" << std::endl;

    int total_failures = 0;

    // Reset
    dut->rst_n = 1; 
    step(); step();

    // ----------------------------------------------------------
    // TEST 1: REF LEADS FB (Expect +1)
    // ----------------------------------------------------------
    reset_clocks();
    std::cout << "Test 1: REF Leads FB (Expect +1)... ";

    // Fire Ref
    dut->ref_clk = 1;
    step(); step(); step(); step(); // Wait a few cycles
    
    // Check if it went High BEFORE FB arrives
    // We run for 20 cycles and see if error_out becomes 1
    bool seen_plus_one = false;
    for(int i=0; i<20; i++) {
        step();
        if (dut->error_out == 1) seen_plus_one = true;
    }

    // Now Fire FB (which should clear the state back to 0)
    dut->fb_clk = 1;
    step(); step(); step(); step();

    if (seen_plus_one) {
        std::cout << "[PASS]" << std::endl;
    } else {
        std::cout << "[FAIL] Output never went to +1" << std::endl;
        total_failures++;
    }

    // ----------------------------------------------------------
    // TEST 2: FB LEADS REF (Expect -1)
    // ----------------------------------------------------------
    reset_clocks();
    std::cout << "Test 2: FB Leads REF (Expect -1)... ";

    // Fire FB
    dut->fb_clk = 1;
    step(); step(); step(); step();

    // Check for -1 (represented as 15 in 4-bit unsigned, or -1 signed)
    bool seen_minus_one = false;
    for(int i=0; i<20; i++) {
        step();
        // Check for -1 (signed) or 15 (unsigned interpretation of 1111)
        if ((int8_t)dut->error_out == -1 || dut->error_out == 15) seen_minus_one = true;
    }

    // Fire Ref to clear
    dut->ref_clk = 1;
    step(); step(); step(); step();

    if (seen_minus_one) {
        std::cout << "[PASS]" << std::endl;
    } else {
        std::cout << "[FAIL] Output never went to -1" << std::endl;
        total_failures++;
    }

    // ----------------------------------------------------------
    // TEST 3: ALIGNED (Expect 0)
    // ----------------------------------------------------------
    reset_clocks();
    std::cout << "Test 3: Perfectly Aligned (Expect 0)... ";

    // Fire BOTH simultaneously
    dut->ref_clk = 1;
    dut->fb_clk = 1;
    
    bool seen_error = false;
    for(int i=0; i<20; i++) {
        step();
        if (dut->error_out != 0) seen_error = true;
    }

    if (!seen_error) {
        std::cout << "[PASS]" << std::endl;
    } else {
        std::cout << "[FAIL] Output glitched (should stay 0)" << std::endl;
        total_failures++;
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