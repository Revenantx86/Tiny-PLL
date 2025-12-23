// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpll_top.h for the primary calling header

#include "Vpll_top__pch.h"
#include "Vpll_top___024root.h"

VL_ATTR_COLD void Vpll_top___024root___eval_static(Vpll_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpll_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpll_top___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vpll_top___024root___eval_initial(Vpll_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpll_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpll_top___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__sys_clk__0 = vlSelf->sys_clk;
    vlSelf->__Vtrigprevexpr___TOP__pll_out__0 = vlSelf->pll_out;
}

VL_ATTR_COLD void Vpll_top___024root___eval_final(Vpll_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpll_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpll_top___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpll_top___024root___dump_triggers__stl(Vpll_top___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vpll_top___024root___eval_phase__stl(Vpll_top___024root* vlSelf);

VL_ATTR_COLD void Vpll_top___024root___eval_settle(Vpll_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpll_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpll_top___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vpll_top___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/home/highpoly/vlsi/digital/Tiny-PLL/src/pll_top.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vpll_top___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpll_top___024root___dump_triggers__stl(Vpll_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpll_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpll_top___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vpll_top___024root___stl_sequent__TOP__0(Vpll_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpll_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpll_top___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->pll_out = (vlSelf->pll_top__DOT__dco_inst__DOT__accumulator 
                       >> 0x1fU);
    vlSelf->lock_detect = vlSelf->pll_top__DOT__internal_lock;
    vlSelf->debug_dco_word = vlSelf->pll_top__DOT__dco_ctrl_word;
    vlSelf->pll_top__DOT__lf_inst__DOT____VdfgTmp_h7d8f5e2e__0 
        = (((- (IData)((1U & ((IData)(vlSelf->pll_top__DOT__pfd_error) 
                              >> 3U)))) << 4U) | (IData)(vlSelf->pll_top__DOT__pfd_error));
    vlSelf->pll_top__DOT__lf_inst__DOT__next_integrator 
        = (vlSelf->pll_top__DOT__lf_inst__DOT__integrator 
           + (vlSelf->pll_top__DOT__lf_inst__DOT____VdfgTmp_h7d8f5e2e__0 
              << (IData)(vlSelf->pll_top__DOT__dynamic_ki)));
}

VL_ATTR_COLD void Vpll_top___024root___eval_stl(Vpll_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpll_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpll_top___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vpll_top___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void Vpll_top___024root___eval_triggers__stl(Vpll_top___024root* vlSelf);

VL_ATTR_COLD bool Vpll_top___024root___eval_phase__stl(Vpll_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpll_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpll_top___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vpll_top___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vpll_top___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpll_top___024root___dump_triggers__act(Vpll_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpll_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpll_top___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge sys_clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge pll_out)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpll_top___024root___dump_triggers__nba(Vpll_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpll_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpll_top___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge sys_clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge pll_out)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vpll_top___024root___ctor_var_reset(Vpll_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpll_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpll_top___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->sys_clk = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->ref_clk = VL_RAND_RESET_I(1);
    vlSelf->div_val = VL_RAND_RESET_I(32);
    vlSelf->initial_freq = VL_RAND_RESET_I(32);
    vlSelf->pll_out = VL_RAND_RESET_I(1);
    vlSelf->lock_detect = VL_RAND_RESET_I(1);
    vlSelf->debug_dco_word = VL_RAND_RESET_I(32);
    vlSelf->pll_top__DOT__pfd_error = VL_RAND_RESET_I(4);
    vlSelf->pll_top__DOT__pfd_sample = VL_RAND_RESET_I(1);
    vlSelf->pll_top__DOT__dco_ctrl_word = VL_RAND_RESET_I(32);
    vlSelf->pll_top__DOT__fb_clk_internal = VL_RAND_RESET_I(1);
    vlSelf->pll_top__DOT__internal_lock = VL_RAND_RESET_I(1);
    vlSelf->pll_top__DOT__dynamic_kp = VL_RAND_RESET_I(5);
    vlSelf->pll_top__DOT__dynamic_ki = VL_RAND_RESET_I(5);
    vlSelf->pll_top__DOT__unlock_timer = VL_RAND_RESET_I(6);
    vlSelf->pll_top__DOT__pfd_inst__DOT__ref_sync = VL_RAND_RESET_I(3);
    vlSelf->pll_top__DOT__pfd_inst__DOT__fb_sync = VL_RAND_RESET_I(3);
    vlSelf->pll_top__DOT__pfd_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->pll_top__DOT__lf_inst__DOT__integrator = VL_RAND_RESET_I(32);
    vlSelf->pll_top__DOT__lf_inst__DOT__next_integrator = VL_RAND_RESET_I(32);
    vlSelf->pll_top__DOT__lf_inst__DOT__zero_error_count = VL_RAND_RESET_I(5);
    vlSelf->pll_top__DOT__lf_inst__DOT____VdfgTmp_h7d8f5e2e__0 = 0;
    vlSelf->pll_top__DOT__dco_inst__DOT__accumulator = VL_RAND_RESET_I(32);
    vlSelf->pll_top__DOT__div_inst__DOT__counter = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__sys_clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__pll_out__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
