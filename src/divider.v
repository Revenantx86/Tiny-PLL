module divider (
    input  wire        clk_in,
    input  wire        rst_n,
    input  wire [31:0] div_val,   // Dynamic input (not parameter)
    output reg         clk_out
);

    reg [31:0] counter;

    always @(posedge clk_in or negedge rst_n) begin
        if (!rst_n) begin
            counter <= 0;
            clk_out <= 0;
        end else begin
            if (counter >= div_val - 1) begin
                counter <= 0;
                clk_out <= 1'b1; 
            end else begin
                counter <= counter + 1;
                if (counter < (div_val >> 1)) 
                    clk_out <= 1'b1;
                else
                    clk_out <= 1'b0;
            end
        end
    end
endmodule
