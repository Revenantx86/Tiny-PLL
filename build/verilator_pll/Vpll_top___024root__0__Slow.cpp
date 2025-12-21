// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpll_top.h for the primary calling header

#include "Vpll_top__pch.h"

VL_ATTR_COLD void Vpll_top___024root___eval_static(Vpll_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpll_top___024root___eval_static\n"); );
    Vpll_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__sys_clk__0 = vlSelfRef.sys_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__pll_out__0 = vlSelfRef.pll_out;
}

VL_ATTR_COLD void Vpll_top___024root___eval_initial(Vpll_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpll_top___024root___eval_initial\n"); );
    Vpll_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vpll_top___024root___eval_final(Vpll_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpll_top___024root___eval_final\n"); );
    Vpll_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpll_top___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vpll_top___024root___eval_phase__stl(Vpll_top___024root* vlSelf);

VL_ATTR_COLD void Vpll_top___024root___eval_settle(Vpll_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpll_top___024root___eval_settle\n"); );
    Vpll_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vpll_top___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("/Users/refikyalcin/vlsi/digital/Tiny-PLL/src/pll_top.v", 1, "", "Settle region did not converge after 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
    } while (Vpll_top___024root___eval_phase__stl(vlSelf));
}

VL_ATTR_COLD void Vpll_top___024root___eval_triggers__stl(Vpll_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpll_top___024root___eval_triggers__stl\n"); );
    Vpll_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    vlSelfRef.__VstlFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vpll_top___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
}

VL_ATTR_COLD bool Vpll_top___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpll_top___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpll_top___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vpll_top___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vpll_top___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpll_top___024root___trigger_anySet__stl\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

VL_ATTR_COLD void Vpll_top___024root___stl_sequent__TOP__0(Vpll_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpll_top___024root___stl_sequent__TOP__0\n"); );
    Vpll_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pll_out = (vlSelfRef.pll_top__DOT__dco_inst__DOT__accumulator 
                         >> 0x0000001fU);
    vlSelfRef.lock_detect = vlSelfRef.pll_top__DOT__internal_lock;
    vlSelfRef.debug_dco_word = vlSelfRef.pll_top__DOT__dco_ctrl_word;
    vlSelfRef.pll_top__DOT__lf_inst__DOT____VdfgRegularize_hbae78005_0_0 
        = (((- (IData)((1U & ((IData)(vlSelfRef.pll_top__DOT__pfd_error) 
                              >> 3U)))) << 4U) | (IData)(vlSelfRef.pll_top__DOT__pfd_error));
    vlSelfRef.pll_top__DOT__lf_inst__DOT__next_integrator 
        = (vlSelfRef.pll_top__DOT__lf_inst__DOT__integrator 
           + (vlSelfRef.pll_top__DOT__lf_inst__DOT____VdfgRegularize_hbae78005_0_0 
              << (IData)(vlSelfRef.pll_top__DOT__dynamic_ki)));
}

VL_ATTR_COLD void Vpll_top___024root____Vm_traceActivitySetAll(Vpll_top___024root* vlSelf);

VL_ATTR_COLD void Vpll_top___024root___eval_stl(Vpll_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpll_top___024root___eval_stl\n"); );
    Vpll_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vpll_top___024root___stl_sequent__TOP__0(vlSelf);
        Vpll_top___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD bool Vpll_top___024root___eval_phase__stl(Vpll_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpll_top___024root___eval_phase__stl\n"); );
    Vpll_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vpll_top___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = Vpll_top___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vpll_top___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vpll_top___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpll_top___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpll_top___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vpll_top___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge sys_clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(posedge pll_out)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vpll_top___024root____Vm_traceActivitySetAll(Vpll_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpll_top___024root____Vm_traceActivitySetAll\n"); );
    Vpll_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
}

VL_ATTR_COLD void Vpll_top___024root___ctor_var_reset(Vpll_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpll_top___024root___ctor_var_reset\n"); );
    Vpll_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->sys_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7302336598091101382ull);
    vlSelf->rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1638864771569018232ull);
    vlSelf->ref_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17422155706582183859ull);
    vlSelf->div_val = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15473528626211706826ull);
    vlSelf->initial_freq = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14990047633382846035ull);
    vlSelf->pll_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8026797249931377789ull);
    vlSelf->lock_detect = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11777796665687974075ull);
    vlSelf->debug_dco_word = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12642387111482945964ull);
    vlSelf->pll_top__DOT__pfd_error = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10382232738584958945ull);
    vlSelf->pll_top__DOT__pfd_sample = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9566583104318045990ull);
    vlSelf->pll_top__DOT__dco_ctrl_word = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12893576140263943847ull);
    vlSelf->pll_top__DOT__fb_clk_internal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14686982066397817990ull);
    vlSelf->pll_top__DOT__internal_lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16788585024707980658ull);
    vlSelf->pll_top__DOT__dynamic_kp = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17059946447209092880ull);
    vlSelf->pll_top__DOT__dynamic_ki = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 18191634338921333649ull);
    vlSelf->pll_top__DOT__unlock_timer = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 1295306224736377280ull);
    vlSelf->pll_top__DOT__pfd_inst__DOT__ref_sync = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5973732033400482059ull);
    vlSelf->pll_top__DOT__pfd_inst__DOT__fb_sync = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16587138084395713492ull);
    vlSelf->pll_top__DOT__pfd_inst__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4856332705548282607ull);
    vlSelf->pll_top__DOT__lf_inst__DOT__integrator = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5782064096899522694ull);
    vlSelf->pll_top__DOT__lf_inst__DOT__next_integrator = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10342325960379127126ull);
    vlSelf->pll_top__DOT__lf_inst__DOT__zero_error_count = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 16413723908982727780ull);
    vlSelf->pll_top__DOT__lf_inst__DOT____VdfgRegularize_hbae78005_0_0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11296770966966379599ull);
    vlSelf->pll_top__DOT__dco_inst__DOT__accumulator = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17690400650846079397ull);
    vlSelf->pll_top__DOT__div_inst__DOT__counter = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8013355740270759127ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__sys_clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6563614763180871282ull);
    vlSelf->__Vtrigprevexpr___TOP__pll_out__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3561405980223095689ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
