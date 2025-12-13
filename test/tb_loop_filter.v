`timescale 1ns / 1ps

module tb_loop_filter;

    reg clk;
    reg rst_n;
    reg up;
    reg down;
    wire [31:0] tuning_word;

    // Instantiate Loop Filter
    // Initial Freq = 1000, Kp = 10, Ki = 1
    loop_filter #(
        .INITIAL_FREQ(32'd1000), 
        .K_P(10), 
        .K_I(1)
    ) u_filter (
        .clk(clk),
        .rst_n(rst_n),
        .up(up),
        .down(down),
        .tuning_word(tuning_word)
    );

    // 100 MHz System Clock
    always #5 clk = ~clk;

    initial begin
        $dumpfile("build/tb_loop_filter.vcd");
        $dumpvars(0, tb_loop_filter);

        // Init
        clk = 0; rst_n = 0;
        up = 0; down = 0;

        // Release Reset
        #20 rst_n = 1;
        #20;

        // -------------------------------------------------
        // Test 1: "Too Slow" -> Force UP pulses
        // -------------------------------------------------
        $display("Time: %0t | Initial Tuning Word: %d", $time, tuning_word);
        
        up = 1; // Simulate PFD holding "UP" high
        #100;   // Hold for 10 clock cycles
        up = 0;
        
        $display("Time: %0t | After UP pulses: %d (Should be Higher)", $time, tuning_word);
        #50; // Wait to see it settle (Proportional part will vanish, Integral stays)

        // -------------------------------------------------
        // Test 2: "Too Fast" -> Force DOWN pulses
        // -------------------------------------------------
        down = 1; // Simulate PFD holding "DOWN" high
        #200;     // Hold for 20 clock cycles (longer than UP)
        down = 0;

        $display("Time: %0t | After DOWN pulses: %d (Should be Lower)", $time, tuning_word);
        #50;

        $finish;
    end

endmodule