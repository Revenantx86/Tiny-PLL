module dco_nco #(
    parameter WIDTH = 32  // Accumulator width. Higher = finer frequency resolution
)(
    input  wire             sys_clk,      // System clock (e.g., 100MHz)
    input  wire             rst_n,        // Active low reset
    input  wire [WIDTH-1:0] tuning_word,  // Control input (sets frequency)
    output wire             dco_out       // Generated output clock
);

    // The Phase Accumulator
    reg [WIDTH-1:0] accumulator;

    always @(posedge sys_clk) begin
        if (!rst_n) begin
            accumulator <= {WIDTH{1'b0}};
        end else begin
            // Increment phase by the tuning word every cycle
            accumulator <= accumulator + tuning_word;
        end
    end

    // The MSB is the output clock (50% duty cycle on average, but with jitter)
    assign dco_out = accumulator[WIDTH-1];
endmodule
