#include "Vchain.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <iomanip>

// --- GLOBALS ---
vluint64_t sim_time = 0;
Vchain* dut;
VerilatedVcdC* m_trace;

const double SYS_CLK_FREQ = 100e6;

// Advance time by one half-cycle
void step() {
    dut->sys_clk ^= 1;
    dut->eval();
    m_trace->dump(sim_time);
    sim_time++;
}

// Helper to pulse the filter update signal
void trigger_sample() {
    // Ensure we start at a clean clock edge
    if (dut->sys_clk == 1) step(); 
    
    // Create a 1-cycle pulse on sample_en
    dut->sample_en = 1;
    step(); step(); // 1 Cycle High
    dut->sample_en = 0; 
    step(); step(); // 1 Cycle Low
}

// Robust Frequency Measurement (Synchronized)
double measure_freq() {
    int last_dco = dut->dco_out;
    int timeout = 50000;
    
    // 1. Synchronize: Wait for the first rising edge
    while(timeout-- > 0) {
        step();
        if (dut->dco_out == 1 && last_dco == 0) break;
        last_dco = dut->dco_out;
    }
    last_dco = dut->dco_out; // Update state after sync

    // 2. Count 50 pulses exactly
    vluint64_t start = sim_time;
    int pulses = 0;
    while(pulses < 50 && sim_time < start + 200000) {
        step();
        if (dut->dco_out == 1 && last_dco == 0) pulses++;
        last_dco = dut->dco_out;
    }
    
    vluint64_t ticks = sim_time - start;
    if (ticks == 0) return 0.0;
    
    // Calculate Freq: (Pulses / Time)
    // Time in seconds = (ticks / 2.0) / SYS_CLK_FREQ
    return (double)pulses / ((double)ticks / 2.0) * SYS_CLK_FREQ;
}

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);

    dut = new Vchain;
    m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 5);
    m_trace->open("waveform_chain.vcd");

    // Initialize Inputs
    dut->sys_clk = 0;
    dut->rst_n = 1; // Start High
    dut->sample_en = 0;
    dut->error_in = 0;
    dut->div_val  = 4; // Divide by 4

    // --- CONFIGURATION ---
    // Initial Freq: 10 MHz
    // TW = (10M / 100M) * 2^32 = 429496730
    dut->initial_freq = 429496730;

    // HIGH GAIN SETTINGS ("Turbo Mode")
    // We shift by 22 bits so a small error creates a visible jump in simulation
    dut->kp_shift = 22; 
    dut->ki_shift = 18; 

    std::cout << "--- OPEN LOOP CHAIN TEST ---" << std::endl;

    // 1. HARD RESET SEQUENCE
    step(); step();
    dut->rst_n = 0; // Assert Reset
    step(); step(); step(); step();
    dut->rst_n = 1; // Release Reset
    step(); step();

    // 2. CHECK IDLE (Should be ~10 MHz)
    std::cout << "Measuring Idle Frequency..." << std::endl;
    double f_idle = measure_freq();
    std::cout << "Idle Freq: " << (f_idle/1e6) << " MHz (Expected ~10.0)" << std::endl;

    if (f_idle > 9.9e6 && f_idle < 10.1e6) 
        std::cout << "[PASS] Idle frequency correct." << std::endl;
    else
        std::cout << "[FAIL] Idle frequency wrong." << std::endl;

    // 3. ACCELERATE (Apply Strong Positive Error)
    // Injecting 5 with Gain 22 adds roughly 20 million to the Tuning Word per tick.
    std::cout << "Injecting Error (+5) for 20 cycles with HIGH GAIN..." << std::endl;
    dut->error_in = 5; 
    
    for(int i=0; i<20; i++) {
        trigger_sample();
    }

    // 4. CHECK ACCELERATION
    double f_fast = measure_freq();
    std::cout << "New Freq:  " << (f_fast/1e6) << " MHz" << std::endl;

    // We expect a significant jump (e.g., > 10.5 MHz)
    if (f_fast > (f_idle + 0.5e6)) 
        std::cout << "[PASS] Frequency Increased significantly." << std::endl;
    else 
        std::cout << "[FAIL] Frequency did not increase enough." << std::endl;

    m_trace->close();
    delete dut;
    return 0;
}