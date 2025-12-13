module pfd (
    input  wire ref_clk,    // The Reference Clock
    input  wire fb_clk,     // The Feedback Clock (from DCO/Divider)
    input  wire rst_n,      // Global System Reset
    output reg  up,         // "Speed Up" pulse
    output reg  down        // "Slow Down" pulse
);

    // Internal wire for the reset condition
    wire reset_pfd;

    // The PFD Reset happens if BOTH outputs are high OR if global reset is low
    // Note: We invert rst_n because the DFFs usually expect active high clear in this specific structure
    assign reset_pfd = (up & down) | (!rst_n);

    // D-Flip-Flop for Reference Path
    // When ref_clk rises, 'up' goes High.
    // It stays High until 'reset_pfd' clears it.
    always @(posedge ref_clk or posedge reset_pfd) begin
        if (reset_pfd) begin
            up <= 1'b0;
        end else begin
            up <= 1'b1;
        end
    end

    // D-Flip-Flop for Feedback Path
    // When fb_clk rises, 'down' goes High.
    // It stays High until 'reset_pfd' clears it.
    always @(posedge fb_clk or posedge reset_pfd) begin
        if (reset_pfd) begin
            down <= 1'b0;
        end else begin
            down <= 1'b1;
        end
    end

endmodule