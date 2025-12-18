module pfd (
    input  wire              sys_clk,    // 100 MHz System Clock
    input  wire              rst_n,
    input  wire              ref_clk,    // Slow Reference
    input  wire              fb_clk,     // Slow Feedback
    output reg signed [3:0]  error_out,  // +1, -1, or 0
    output reg               sample_en   // Always High to allow Pulse-Width Integration
);

    // 1. Synchronizers
    reg [2:0] ref_sync, fb_sync;
    always @(posedge sys_clk or negedge rst_n) begin
        if (!rst_n) begin
            ref_sync <= 0;
            fb_sync  <= 0;
        end else begin
            ref_sync <= {ref_sync[1:0], ref_clk};
            fb_sync  <= {fb_sync[1:0], fb_clk};
        end
    end

    // 2. Rising Edge Detectors
    wire ref_rise = (ref_sync[2:1] == 2'b01);
    wire fb_rise  = (fb_sync[2:1] == 2'b01);

    // 3. Three-State Machine (UP, DOWN, IDLE)
    localparam STATE_IDLE = 2'd0;
    localparam STATE_UP   = 2'd1;
    localparam STATE_DOWN = 2'd2;

    reg [1:0] state;

    always @(posedge sys_clk) begin
        if (!rst_n) begin
            state     <= STATE_IDLE;
            error_out <= 0;
            sample_en <= 0;
        end else begin
            // We keep sample_en HIGH so the Loop Filter integrates 
            // the *duration* of the phase error (Pulse Width Modulation).
            sample_en <= 1'b1;

            case (state)
                STATE_IDLE: begin
                    error_out <= 0;
                    if (ref_rise && !fb_rise)      state <= STATE_UP;
                    else if (fb_rise && !ref_rise) state <= STATE_DOWN;
                end

                STATE_UP: begin
                    error_out <= 4'sd1; // Output +1 continuously
                    // If FB arrives, we are done. Go back to IDLE.
                    if (fb_rise) state <= STATE_IDLE;
                end

                STATE_DOWN: begin
                    error_out <= -4'sd1; // Output -1 continuously
                    // If Ref arrives, we are done. Go back to IDLE.
                    if (ref_rise) state <= STATE_IDLE;
                end
                
                default: state <= STATE_IDLE;
            endcase
        end
    end

endmodule
