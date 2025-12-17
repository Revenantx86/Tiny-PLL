module loop_filter (
    input  wire              clk,
    input  wire              rst_n,
    input  wire              sample_en,
    input  wire signed [3:0] error_in,
    input  wire [4:0]        kp_shift,
    input  wire [4:0]        ki_shift,
    input  wire [31:0]       initial_freq,
    output reg  [31:0]       dco_ctrl,
    output reg               lock_detect
);

    reg signed [31:0] integrator;
    wire signed [31:0] prop_term;
    wire signed [31:0] integ_term;

    // 1. Sign Extension (Keep this from previous fix)
    assign prop_term  = $signed({{28{error_in[3]}}, error_in}) <<< kp_shift;
    assign integ_term = $signed({{28{error_in[3]}}, error_in}) <<< ki_shift;

    // 2. THE FIX: Calculate Next Integrator Combinatorially
    wire signed [31:0] next_integrator;
    assign next_integrator = integrator + integ_term;

    // Lock Detect Logic
    reg [4:0] zero_error_count;

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            integrator       <= initial_freq;
            dco_ctrl         <= initial_freq;
            zero_error_count <= 0;
            lock_detect      <= 0;
        end else if (sample_en) begin
            
            // Update Integrator with the pre-calculated value
            integrator <= next_integrator;

            // Use 'next_integrator' for output so we include immediate error
            dco_ctrl <= next_integrator + prop_term;

            // Lock Detection
            if (error_in == 0) begin
                if (zero_error_count < 20) 
                    zero_error_count <= zero_error_count + 1;
                else 
                    lock_detect <= 1'b1;
            end else begin
                zero_error_count <= 0;
                lock_detect <= 1'b0;
            end
        end
    end
endmodule
