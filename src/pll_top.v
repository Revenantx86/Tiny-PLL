module pll_top (
    input  wire              sys_clk,
    input  wire              rst_n,
    
    input  wire              ref_clk,
    input  wire [31:0]       div_val,
    input  wire [31:0]       initial_freq,
    
    output wire              pll_out,
    output wire              lock_detect,
    output wire [31:0]       debug_dco_word
);

    wire signed [3:0] pfd_error;
    wire              pfd_sample;
    wire [31:0]       dco_ctrl_word;
    wire              dco_clk_raw;
    wire              fb_clk_internal;
    wire              internal_lock;

    // --- SMART GAIN CONTROLLER WITH HYSTERESIS ---
    reg [4:0] dynamic_kp;
    reg [4:0] dynamic_ki;
    
    // Timer to filter out short "glitch" unlocks
    reg [5:0] unlock_timer; 

    always @(posedge sys_clk or negedge rst_n) begin
        if (!rst_n) begin
            dynamic_kp <= 17;
            dynamic_ki <= 13;
            unlock_timer <= 0;
        end else begin
            if (internal_lock) begin
                // === LOCKED STATE ===
                // Clear the panic timer
                unlock_timer <= 0;
                
                // Use TRACKING GAINS (Smooth & Stable)
                dynamic_kp <= 13; // Moderate Proportional
                dynamic_ki <= 9;  // Moderate Integral
            end else begin
                // === UNLOCKED STATE ===
                // Don't panic immediately! Wait to see if it's a real jump.
                if (unlock_timer < 32) begin
                    unlock_timer <= unlock_timer + 1;
                    // Keep using Low Gains while waiting
                    dynamic_kp <= 13;
                    dynamic_ki <= 9;
                end else begin
                    // We have been unlocked for 32 cycles -> REAL JUMP.
                    // Engage ACQUISITION GAINS (Fast)
                    dynamic_kp <= 17; // Reduced from 18 to prevent violent overshoot
                    dynamic_ki <= 13; 
                end
            end
        end
    end
    // ---------------------------------------------

    pfd pfd_inst (
        .sys_clk   (sys_clk),
        .rst_n     (rst_n),
        .ref_clk   (ref_clk),
        .fb_clk    (fb_clk_internal),
        .error_out (pfd_error),
        .sample_en (pfd_sample)
    );

    loop_filter lf_inst (
        .clk         (sys_clk),
        .rst_n       (rst_n),
        .sample_en   (pfd_sample),
        .error_in    (pfd_error),
        .kp_shift    (dynamic_kp),
        .ki_shift    (dynamic_ki),
        .initial_freq(initial_freq),
        .dco_ctrl    (dco_ctrl_word),
        .lock_detect (internal_lock)
    );

    dco_nco dco_inst (
        .sys_clk     (sys_clk),
        .rst_n       (rst_n),
        .tuning_word (dco_ctrl_word),
        .dco_out     (dco_clk_raw)
    );

    divider div_inst (
        .clk_in      (dco_clk_raw),
        .rst_n       (rst_n),
        .div_val     (div_val),
        .clk_out     (fb_clk_internal)
    );

    assign pll_out        = dco_clk_raw;
    assign debug_dco_word = dco_ctrl_word;
    assign lock_detect    = internal_lock;

endmodule
