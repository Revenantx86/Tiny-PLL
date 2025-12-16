// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdco_nco.h for the primary calling header

#include "Vdco_nco__pch.h"

VL_ATTR_COLD void Vdco_nco___024root___eval_static(Vdco_nco___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdco_nco___024root___eval_static\n"); );
    Vdco_nco__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0 = vlSelfRef.rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__sys_clk__0 = vlSelfRef.sys_clk;
}

VL_ATTR_COLD void Vdco_nco___024root___eval_initial(Vdco_nco___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdco_nco___024root___eval_initial\n"); );
    Vdco_nco__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vdco_nco___024root___eval_final(Vdco_nco___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdco_nco___024root___eval_final\n"); );
    Vdco_nco__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdco_nco___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vdco_nco___024root___eval_phase__stl(Vdco_nco___024root* vlSelf);

VL_ATTR_COLD void Vdco_nco___024root___eval_settle(Vdco_nco___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdco_nco___024root___eval_settle\n"); );
    Vdco_nco__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vdco_nco___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("/Users/refikyalcin/vlsi/digital/Tiny-PLL/src/dco_nco.v", 1, "", "Settle region did not converge after 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
    } while (Vdco_nco___024root___eval_phase__stl(vlSelf));
}

VL_ATTR_COLD void Vdco_nco___024root___eval_triggers__stl(Vdco_nco___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdco_nco___024root___eval_triggers__stl\n"); );
    Vdco_nco__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    vlSelfRef.__VstlFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vdco_nco___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
}

VL_ATTR_COLD bool Vdco_nco___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdco_nco___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdco_nco___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vdco_nco___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vdco_nco___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdco_nco___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vdco_nco___024root___stl_sequent__TOP__0(Vdco_nco___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdco_nco___024root___stl_sequent__TOP__0\n"); );
    Vdco_nco__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.dco_out = (vlSelfRef.dco_nco__DOT__accumulator 
                         >> 0x0000001fU);
}

VL_ATTR_COLD void Vdco_nco___024root___eval_stl(Vdco_nco___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdco_nco___024root___eval_stl\n"); );
    Vdco_nco__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vdco_nco___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD bool Vdco_nco___024root___eval_phase__stl(Vdco_nco___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdco_nco___024root___eval_phase__stl\n"); );
    Vdco_nco__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vdco_nco___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = Vdco_nco___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vdco_nco___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vdco_nco___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdco_nco___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdco_nco___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vdco_nco___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(negedge rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(posedge sys_clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vdco_nco___024root___ctor_var_reset(Vdco_nco___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdco_nco___024root___ctor_var_reset\n"); );
    Vdco_nco__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->sys_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7302336598091101382ull);
    vlSelf->rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1638864771569018232ull);
    vlSelf->tuning_word = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 638921303674965593ull);
    vlSelf->dco_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2581254658677347878ull);
    vlSelf->dco_nco__DOT__accumulator = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18180726375523808106ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14803524876191471008ull);
    vlSelf->__Vtrigprevexpr___TOP__sys_clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6563614763180871282ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
