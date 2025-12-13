module loop_filter #(
    parameter INITIAL_FREQ = 32'd42949673, // Start at ~1 MHz (for 100MHz system)
    parameter K_P = 1000,                  // Proportional Gain
    parameter K_I = 10                     // Integral Gain
)(
    input  wire        clk,        // System Clock (100 MHz)
    input  wire        rst_n,      // Reset
    input  wire        up,         // From PFD
    input  wire        down,       // From PFD
    output reg [31:0]  tuning_word // To DCO
);

    // 1. Convert PFD pulses to a signed error (+1, -1, or 0)
    // We use a signed 2-bit wire: 01 (+1), 11 (-1), 00 (0)
    wire signed [1:0] error_val;
    assign error_val = (up && !down) ? 2'sd1 : 
                       (!up && down) ? -2'sd1 : 2'sd0;

    // 2. Integral Path (Accumulator)
    reg signed [31:0] integrator;
    
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            integrator <= 0;
            tuning_word <= INITIAL_FREQ;
        end else begin
            // Update Integrator (accumulate error * Ki)
            // We use simple addition since error is just +1/-1
            if (error_val == 1) 
                integrator <= integrator + K_I;
            else if (error_val == -1) 
                integrator <= integrator - K_I;
            
            // Calculate Output: Base + (Error * Kp) + Integrator
            // Note: In real silicon, you must clamp/saturate this to avoid overflow!
            tuning_word <= INITIAL_FREQ + (error_val * K_P) + integrator;
        end
    end

endmodule