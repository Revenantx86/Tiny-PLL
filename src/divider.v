module divider #(
    parameter DIV_VALUE = 10  // The divide ratio (N)
)(
    input  wire clk_in,   // Fast clock from DCO
    input  wire rst_n,    // Active low reset
    output reg  clk_out   // Slow clock to PFD
);

    // Counter width: Log2 of DIV_VALUE is enough, but 32 bits is safe for generic use
    reg [31:0] counter;

    always @(posedge clk_in or negedge rst_n) begin
        if (!rst_n) begin
            counter <= 0;
            clk_out <= 0;
        end else begin
            // Simple logic: Toggle clock every N/2 cycles to get 50% duty cycle
            // Note: This logic works best for EVEN divide ratios.
            // For N=10, we toggle every 5 ticks.
            if (counter >= (DIV_VALUE/2 - 1)) begin
                clk_out <= ~clk_out;
                counter <= 0;
            end else begin
                counter <= counter + 1;
            end
        end
    end

endmodule