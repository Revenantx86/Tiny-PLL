module divider (
    input  wire        clk_in,
    input  wire        rst_n,
    input  wire [31:0] div_val,
    output reg         clk_out
);

    reg [31:0] counter;

    always @(posedge clk_in ) begin
        if (!rst_n) begin
            counter <= 0;
            clk_out <= 0;
        end else begin
            // 1. End of Cycle Check (Reset)
            if (counter >= div_val - 1) begin
                counter <= 0;
                clk_out <= 1'b1; // The next cycle (Cycle 0) is always High
            end else begin
                // 2. Normal Increment
                counter <= counter + 1;
                
                // 3. Duty Cycle Logic (FIXED)
                // We check if (counter + 1) is within the High phase.
                if ((counter + 1) < (div_val >> 1)) 
                    clk_out <= 1'b1;
                else
                    clk_out <= 1'b0;
            end
        end
    end
endmodule
