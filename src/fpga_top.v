module fpga_top (
    input  wire        clk_in,     // 100 MHz Board Oscillator
    input  wire        rst_btn,    // Reset Button
    output wire        led_locked, // LED 1: Shows Lock Status
    output wire        led_clock   // LED 2: Visualizes the Clock (slowed down)
);

    // 1. Reset Conditioning (Active High button -> Active Low logic)
    wire rst_n = !rst_btn;

    // 2. Reference Clock Generation
    // The PLL needs a slow reference (e.g., 1 MHz).
    // We create it by dividing the 100 MHz board clock by 100.
    reg [6:0] ref_cnt;
    reg       ref_clk_generated;
    
    always @(posedge clk_in or negedge rst_n) begin
        if(!rst_n) begin
            ref_cnt <= 0;
            ref_clk_generated <= 0;
        end else begin
            if (ref_cnt == 49) begin // Toggle every 50 ticks = Divide by 100
                ref_cnt <= 0;
                ref_clk_generated <= ~ref_clk_generated;
            end else begin
                ref_cnt <= ref_cnt + 1;
            end
        end
    end

    // 3. Instantiate the PLL
    wire pll_out_raw;
    
    pll_top inst_pll (
        .sys_clk      (clk_in),
        .rst_n        (rst_n),
        .ref_clk      (ref_clk_generated), // 1 MHz Reference
        
        // Settings for 10 MHz Output:
        // Div = 10 (1 MHz * 10 = 10 MHz)
        .div_val      (32'd10), 
        
        // Initial Guess for NCO (Calculated above)
        .initial_freq (32'd429496730), 
        
        .pll_out      (pll_out_raw),
        .lock_detect  (led_locked),    // Light up LED when locked
        .debug_dco_word()              // Unused
    );

    // 4. Human-Visible Clock (Optional)
    // The 10 MHz clock is too fast to see on an LED. 
    // Let's divide it by 2^24 so it blinks at ~0.6 Hz.
    reg [23:0] led_div;
    always @(posedge pll_out_raw or negedge rst_n) begin
        if(!rst_n) led_div <= 0;
        else led_div <= led_div + 1;
    end
    
    assign led_clock = led_div[23];

endmodule