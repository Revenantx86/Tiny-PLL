module chain (
    input  wire              sys_clk,
    input  wire              rst_n,
    
    // Loop Filter Interface
    input  wire              sample_en,    // Pulse to update filter
    input  wire signed [3:0] error_in,     // "Push" command from PFD
    input  wire [4:0]        kp_shift,
    input  wire [4:0]        ki_shift,
    input  wire [31:0]       initial_freq, // Center Frequency
    
    // Divider Interface
    input  wire [31:0]       div_val,
    
    // Outputs
    output wire              dco_out,      // Fast Clock
    output wire              div_out,      // Slow Feedback Clock
    output wire              lock_detect
);

    // Internal Signal: Filter Output -> DCO Input
    wire [31:0] filter_to_dco_word;
    wire        dco_clk_internal;

    // 1. Loop Filter
    loop_filter lf_inst (
        .clk         (sys_clk),
        .rst_n       (rst_n),
        .sample_en   (sample_en),
        .error_in    (error_in),
        .kp_shift    (kp_shift),
        .ki_shift    (ki_shift),
        .initial_freq(initial_freq),
        .dco_ctrl    (filter_to_dco_word), // Drives the DCO
        .lock_detect (lock_detect)
    );

    // 2. DCO (NCO)
    dco_nco dco_inst (
        .sys_clk     (sys_clk),
        .rst_n       (rst_n),
        .tuning_word (filter_to_dco_word), // Driven by Filter
        .dco_out     (dco_clk_internal)
    );

    // 3. Divider
    divider div_inst (
        .clk_in      (dco_clk_internal),
        .rst_n       (rst_n),
        .div_val     (div_val),
        .clk_out     (div_out)
    );

    assign dco_out = dco_clk_internal;

endmodule
