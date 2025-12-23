module dco_nco (
    input  wire        sys_clk,      // FPGA System Clock (e.g., 100 MHz)
    input  wire        rst_n,
    input  wire [31:0] tuning_word,  // From Loop Filter
    output wire        dco_out       // The "Synthesized" Clock
);

    // 32-bit Phase Accumulator
    reg [31:0] accumulator;

    always @(posedge sys_clk ) begin
        if (!rst_n) begin
            accumulator <= 0;
        end else begin
            // Every clock cycle, we add the 'Step Size' (Tuning Word)
            // The speed of overflow determines the output frequency.
            accumulator <= accumulator + tuning_word;
        end
    end

    // The MSB (Most Significant Bit) is our 50% duty cycle square wave
    assign dco_out = accumulator[31];

endmodule
