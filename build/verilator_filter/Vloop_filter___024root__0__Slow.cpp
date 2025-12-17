// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vloop_filter.h for the primary calling header

#include "Vloop_filter__pch.h"

VL_ATTR_COLD void Vloop_filter___024root___eval_static(Vloop_filter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vloop_filter___024root___eval_static\n"); );
    Vloop_filter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0 = vlSelfRef.rst_n;
}

VL_ATTR_COLD void Vloop_filter___024root___eval_initial(Vloop_filter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vloop_filter___024root___eval_initial\n"); );
    Vloop_filter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vloop_filter___024root___eval_final(Vloop_filter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vloop_filter___024root___eval_final\n"); );
    Vloop_filter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vloop_filter___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vloop_filter___024root___eval_phase__stl(Vloop_filter___024root* vlSelf);

VL_ATTR_COLD void Vloop_filter___024root___eval_settle(Vloop_filter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vloop_filter___024root___eval_settle\n"); );
    Vloop_filter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vloop_filter___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("/Users/refikyalcin/vlsi/digital/Tiny-PLL/src/loop_filter.v", 1, "", "Settle region did not converge after 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
    } while (Vloop_filter___024root___eval_phase__stl(vlSelf));
}

VL_ATTR_COLD void Vloop_filter___024root___eval_triggers__stl(Vloop_filter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vloop_filter___024root___eval_triggers__stl\n"); );
    Vloop_filter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    vlSelfRef.__VstlFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vloop_filter___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
}

VL_ATTR_COLD bool Vloop_filter___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vloop_filter___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vloop_filter___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vloop_filter___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vloop_filter___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vloop_filter___024root___trigger_anySet__stl\n"); );
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

void Vloop_filter___024root___ico_sequent__TOP__0(Vloop_filter___024root* vlSelf);

VL_ATTR_COLD void Vloop_filter___024root___eval_stl(Vloop_filter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vloop_filter___024root___eval_stl\n"); );
    Vloop_filter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vloop_filter___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD bool Vloop_filter___024root___eval_phase__stl(Vloop_filter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vloop_filter___024root___eval_phase__stl\n"); );
    Vloop_filter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vloop_filter___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = Vloop_filter___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vloop_filter___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vloop_filter___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vloop_filter___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vloop_filter___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vloop_filter___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vloop_filter___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vloop_filter___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vloop_filter___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vloop_filter___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge rst_n)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vloop_filter___024root___ctor_var_reset(Vloop_filter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vloop_filter___024root___ctor_var_reset\n"); );
    Vloop_filter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1638864771569018232ull);
    vlSelf->sample_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4392723383910105695ull);
    vlSelf->error_in = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 797788699063587630ull);
    vlSelf->kp_shift = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13243468885507278242ull);
    vlSelf->ki_shift = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12252027695943739611ull);
    vlSelf->initial_freq = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14990047633382846035ull);
    vlSelf->dco_ctrl = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14203419983788756843ull);
    vlSelf->lock_detect = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11777796665687974075ull);
    vlSelf->loop_filter__DOT__integrator = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16916663177450092882ull);
    vlSelf->loop_filter__DOT__next_integrator = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14721610796555878782ull);
    vlSelf->loop_filter__DOT__zero_error_count = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4802586492537046493ull);
    vlSelf->loop_filter__DOT____VdfgRegularize_hbae78005_0_0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11884841346442803937ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9526919608049418986ull);
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14803524876191471008ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
