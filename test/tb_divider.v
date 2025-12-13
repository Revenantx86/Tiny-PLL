`timescale 1ns / 1ps
module tb_divider;
    reg clk;
    reg rst_n;
    wire slow_clk;

    // Divide by 4
    divider #(.DIV_VALUE(4)) u_div (
        .clk_in(clk),
        .rst_n(rst_n),
        .clk_out(slow_clk)
    );

    always #5 clk = ~clk; // 100MHz input

    initial begin
        $dumpfile("build/tb_divider.vcd");
        $dumpvars(0, tb_divider);
        clk = 0; rst_n = 0;
        #20 rst_n = 1;
        #500 $finish;
    end
endmodule