
module tb_pfd;

    reg ref_clk;
    reg fb_clk;
    reg rst_n;
    wire up;
    wire down;

    pfd u_pfd (
        .ref_clk(ref_clk),
        .fb_clk(fb_clk),
        .rst_n(rst_n),
        .up(up),
        .down(down)
    );

    // Generate VCD
    initial begin
        $dumpfile("build/tb_pfd.vcd");
        $dumpvars(0, tb_pfd);
    end

    // 1. Reference Clock: 100 MHz (10ns period)
    always #5 ref_clk = ~ref_clk;

    // 2. Feedback Clock: 90 MHz (11.11ns period) -> SLOWER
    // Since FB is slower, we expect 'UP' pulses to appear.
    always #5.55 fb_clk = ~fb_clk;

    initial begin
        // Init
        ref_clk = 0; 
        fb_clk = 0;
        rst_n = 0;
        
        #50 rst_n = 1;

        // Run for enough time to see the phase drift
        #2000;
        
        $finish;
    end

endmodule