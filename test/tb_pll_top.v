module tb_pll_top;

    reg sys_clk;    // Fast (500 MHz)
    reg ref_clk;    // Slow (10 MHz)
    reg rst_n;
    
    wire pll_out;
    wire locked_debug;
    wire [31:0] debug_tuning_word;

    // --- PLL SETUP ---
    // Goal: Ref=10MHz, Div=4 -> Output=40MHz.
    // SysClk = 500MHz.
    // Expected Tuning Word = (40M / 500M) * 2^32 = ~343,597,383
    
    // Start condition: We deliberately set INITIAL_FREQ to ~10MHz (85,899,345)
    // This forces the PLL to "climb" a huge frequency hill to reach 40MHz.
    pll_top #(
        .DIV_VALUE(4),
        .INITIAL_FREQ(32'd85899345), // Start at 10 MHz (Far from target 40M)
        .K_P(500),                   // Lower gain for smoother, slower lock
        .K_I(10)                     // Low integral gain to see the "ramping"
    ) u_pll (
        .sys_clk (sys_clk),
        .ref_clk (ref_clk),
        .rst_n   (rst_n),
        .pll_out (pll_out),
        .locked_debug (locked_debug),
        .debug_tuning_word (debug_tuning_word)
    );

    // 1. Generate Fast System Clock (500 MHz -> 2ns period)
    always #1 sys_clk = ~sys_clk;

    // 2. Generate Slow Reference Clock (10 MHz -> 100ns period)
    always #50 ref_clk = ~ref_clk;

    initial begin
        $dumpfile("build/tb_pll_top.vcd");
        $dumpvars(0, tb_pll_top);

        // Init
        sys_clk = 0;
        ref_clk = 0;
        rst_n = 0;
        
        $display("-----------------------------------------");
        $display(" Starting Comprehensive PLL Sim");
        $display(" Target: Lock to 40 MHz (Ref=10M * 4)");
        $display(" Start:  DCO initialized to 10 MHz");
        $display("-----------------------------------------");

        // Release Reset
        #200 rst_n = 1;

        // Run for a significant time (200 microseconds)
        // With low Ki=10, it will take many reference cycles to climb.
        #200000; 

        $display("Final Tuning Word: %d (Expected approx 343597383)", debug_tuning_word);
        $finish;
    end

endmodule