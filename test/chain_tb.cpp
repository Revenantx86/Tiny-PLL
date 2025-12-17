#include "Vchain.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <iomanip>

vluint64_t sim_time = 0;
Vchain* dut;
VerilatedVcdC* m_trace;

const double SYS_CLK_FREQ = 100e6;

void step() {
    dut->sys_clk ^= 1;
    dut->eval();
    m_trace->dump(sim_time);
    sim_time++;
}

void trigger_sample() {
    if (dut->sys_clk == 1) step(); 
    dut->sample_en = 1;
    step(); step(); 
    dut->sample_en = 0; 
    step(); step(); 
}

double measure_freq() {
    int last_dco = dut->dco_out;
    int timeout = 50000;
    
    // Sync to first edge
    while(timeout-- > 0) {
        step();
        if (dut->dco_out == 1 && last_dco == 0) break;
        last_dco = dut->dco_out;
    }
    last_dco = dut->dco_out; 

    // Measure 50 pulses
    vluint64_t start = sim_time;
    int pulses = 0;
    while(pulses < 50 && sim_time < start + 200000) {
        step();
        if (dut->dco_out == 1 && last_dco == 0) pulses++;
        last_dco = dut->dco_out;
    }
    
    vluint64_t ticks = sim_time - start;
    if (ticks == 0) return 0.0;
    return (double)pulses / ((double)ticks / 2.0) * SYS_CLK_FREQ;
}

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);

    dut = new Vchain;
    m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 5);
    m_trace->open("waveform_chain.vcd");

    // Initialize
    dut->sys_clk = 0;
    dut->rst_n = 1;
    dut->sample_en = 0;
    dut->error_in = 0;
    dut->div_val  = 4; 
    dut->initial_freq = 429496730; // 10 MHz

    // --- TURBO MODE SETTINGS ---
    dut->kp_shift = 22; 
    dut->ki_shift = 18; 

    std::cout << "--- OPEN LOOP CHAIN TEST ---" << std::endl;
    std::cout << "DEBUG MARKER: Turbo Mode Active (Gain=22)" << std::endl; // <--- LOOK FOR THIS

    // Hard Reset
    step(); step();
    dut->rst_n = 0;
    step(); step(); step(); step();
    dut->rst_n = 1;
    step(); step();

    // Idle Check
    std::cout << "Measuring Idle Frequency..." << std::endl;
    double f_idle = measure_freq();
    std::cout << "Idle Freq: " << (f_idle/1e6) << " MHz" << std::endl;

    // Accelerate
    std::cout << "Injecting Error (+5)..." << std::endl;
    dut->error_in = 5; 
    
    for(int i=0; i<20; i++) {
        trigger_sample();
    }

    // Check Result
    double f_fast = measure_freq();
    std::cout << "New Freq:  " << (f_fast/1e6) << " MHz" << std::endl;

    if (f_fast > (f_idle + 0.5e6)) 
        std::cout << "[PASS] Frequency Increased significantly." << std::endl;
    else 
        std::cout << "[FAIL] Frequency did not increase enough." << std::endl;

    m_trace->close();
    delete dut;
    return 0;
}