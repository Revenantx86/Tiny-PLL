// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vchain.h for the primary calling header

#include "Vchain__pch.h"

VL_ATTR_COLD void Vchain___024root___eval_static(Vchain___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchain___024root___eval_static\n"); );
    Vchain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0 = vlSelfRef.rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__sys_clk__0 = vlSelfRef.sys_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__dco_out__0 = vlSelfRef.dco_out;
}

VL_ATTR_COLD void Vchain___024root___eval_initial(Vchain___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchain___024root___eval_initial\n"); );
    Vchain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vchain___024root___eval_final(Vchain___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchain___024root___eval_final\n"); );
    Vchain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vchain___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vchain___024root___eval_phase__stl(Vchain___024root* vlSelf);

VL_ATTR_COLD void Vchain___024root___eval_settle(Vchain___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchain___024root___eval_settle\n"); );
    Vchain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vchain___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("/Users/refikyalcin/vlsi/digital/Tiny-PLL/src/chain.v", 1, "", "Settle region did not converge after 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
    } while (Vchain___024root___eval_phase__stl(vlSelf));
}

VL_ATTR_COLD void Vchain___024root___eval_triggers__stl(Vchain___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchain___024root___eval_triggers__stl\n"); );
    Vchain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    vlSelfRef.__VstlFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vchain___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
}

VL_ATTR_COLD bool Vchain___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vchain___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchain___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vchain___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vchain___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchain___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vchain___024root___stl_sequent__TOP__0(Vchain___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchain___024root___stl_sequent__TOP__0\n"); );
    Vchain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.dco_out = (vlSelfRef.chain__DOT__dco_inst__DOT__accumulator 
                         >> 0x0000001fU);
    vlSelfRef.chain__DOT__lf_inst__DOT____VdfgRegularize_hbae78005_0_0 
        = (((- (IData)((1U & ((IData)(vlSelfRef.error_in) 
                              >> 3U)))) << 4U) | (IData)(vlSelfRef.error_in));
    vlSelfRef.chain__DOT__lf_inst__DOT__next_integrator 
        = (vlSelfRef.chain__DOT__lf_inst__DOT__integrator 
           + (vlSelfRef.chain__DOT__lf_inst__DOT____VdfgRegularize_hbae78005_0_0 
              << (IData)(vlSelfRef.ki_shift)));
}

VL_ATTR_COLD void Vchain___024root___eval_stl(Vchain___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchain___024root___eval_stl\n"); );
    Vchain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vchain___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD bool Vchain___024root___eval_phase__stl(Vchain___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchain___024root___eval_phase__stl\n"); );
    Vchain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vchain___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = Vchain___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vchain___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vchain___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vchain___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchain___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vchain___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vchain___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vchain___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchain___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vchain___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(negedge rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(posedge sys_clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @(posedge dco_out)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vchain___024root___ctor_var_reset(Vchain___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchain___024root___ctor_var_reset\n"); );
    Vchain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->sys_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7302336598091101382ull);
    vlSelf->rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1638864771569018232ull);
    vlSelf->sample_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4392723383910105695ull);
    vlSelf->error_in = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 797788699063587630ull);
    vlSelf->kp_shift = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13243468885507278242ull);
    vlSelf->ki_shift = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12252027695943739611ull);
    vlSelf->initial_freq = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14990047633382846035ull);
    vlSelf->div_val = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15473528626211706826ull);
    vlSelf->dco_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2581254658677347878ull);
    vlSelf->div_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16209886968671507776ull);
    vlSelf->lock_detect = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11777796665687974075ull);
    vlSelf->chain__DOT__filter_to_dco_word = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1433323513497700949ull);
    vlSelf->chain__DOT__lf_inst__DOT__integrator = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16415347808499494178ull);
    vlSelf->chain__DOT__lf_inst__DOT__next_integrator = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7819023547866015360ull);
    vlSelf->chain__DOT__lf_inst__DOT__zero_error_count = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11112463357281119497ull);
    vlSelf->chain__DOT__lf_inst__DOT____VdfgRegularize_hbae78005_0_0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16513237872103848456ull);
    vlSelf->chain__DOT__dco_inst__DOT__accumulator = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12664475034882114483ull);
    vlSelf->chain__DOT__div_inst__DOT__counter = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14356453243356224905ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14803524876191471008ull);
    vlSelf->__Vtrigprevexpr___TOP__sys_clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6563614763180871282ull);
    vlSelf->__Vtrigprevexpr___TOP__dco_out__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2927037999815778279ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
