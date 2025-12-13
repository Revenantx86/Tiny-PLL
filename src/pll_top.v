module pll_top #(
    parameter DIV_VALUE = 4,
    parameter DCO_WIDTH = 32,
    parameter INITIAL_FREQ = 32'd0, 
    parameter K_P = 2000,
    parameter K_I = 20
)(
    input  wire        sys_clk,       // NEW: High-speed master clock (e.g. 500 MHz)
    input  wire        ref_clk,       // Slow Reference clock (e.g. 10 MHz)
    input  wire        rst_n,
    output wire        pll_out,
    output wire        locked_debug,
    output wire [31:0] debug_tuning_word // Expose this for waveform viewing
);

    wire        fb_clk;
    wire        up, down;
    wire [31:0] tuning_word;
    
    // Assign internal signal to output for debugging
    assign debug_tuning_word = tuning_word;

    // 1. PFD (Compares Ref vs Feedback)
    pfd u_pfd (
        .ref_clk (ref_clk),
        .fb_clk  (fb_clk),
        .rst_n   (rst_n),
        .up      (up),
        .down    (down)
    );

    // 2. Loop Filter (Updates on Ref Clk edge)
    loop_filter #(
        .INITIAL_FREQ(INITIAL_FREQ),
        .K_P(K_P),
        .K_I(K_I)
    ) u_filter (
        .clk         (ref_clk),   // Filter still updates at reference rate
        .rst_n       (rst_n),
        .up          (up),
        .down        (down),
        .tuning_word (tuning_word)
    );

    // 3. DCO (Runs on HIGH SPEED System Clock)
    dco_nco #(
        .WIDTH(DCO_WIDTH)
    ) u_dco (
        .sys_clk     (sys_clk),    // <--- CHANGED: Now uses fast system clock
        .rst_n       (rst_n),
        .tuning_word (tuning_word),
        .dco_out     (pll_out)
    );

    // 4. Divider
    divider #(
        .DIV_VALUE(DIV_VALUE)
    ) u_div (
        .clk_in  (pll_out),
        .rst_n   (rst_n),
        .clk_out (fb_clk)
    );

    assign locked_debug = ~(up | down);

endmodule