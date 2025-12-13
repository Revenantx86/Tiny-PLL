module tb_dco;

    reg clk;
    reg rst_n;
    reg [31:0] tuning_word;
    wire dco_out;

    // Instantiate the DCO
    dco_nco #(.WIDTH(32)) u_dco (
        .sys_clk(clk),
        .rst_n(rst_n),
        .tuning_word(tuning_word),
        .dco_out(dco_out)
    );

    // Generate 100 MHz System Clock
    always #5 clk = ~clk; 

    initial begin
        // --- VCD DUMPING COMMANDS START HERE ---
        $dumpfile("build/dco_tb.vcd");   // 1. Set the output filename
        $dumpvars(0, tb_dco);           // 2. Dump all signals in 'tb_dco' hierarchy
        // ---------------------------------------
        // Init
        clk = 0;
        rst_n = 0;
        tuning_word = 0;
        
        // Release Reset
        #100 rst_n = 1;

        // Test Case 1: Low Frequency
        // Formula: Target 1 MHz output with 100 MHz sys_clk
        // Tuning = (1M / 100M) * 2^32 approx 42949673
        tuning_word = 32'd42949673;
        $display("Setting DCO to approx 1 MHz");
        #20000; // Run for a bit

        // Test Case 2: High Frequency (Double it)
        tuning_word = 32'd85899346; 
        $display("Setting DCO to approx 2 MHz");
        #20000;

        $finish;
    end
endmodule