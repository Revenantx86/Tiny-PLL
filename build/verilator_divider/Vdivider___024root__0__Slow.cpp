// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdivider.h for the primary calling header

#include "Vdivider__pch.h"

VL_ATTR_COLD void Vdivider___024root___eval_static(Vdivider___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdivider___024root___eval_static\n"); );
    Vdivider__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk_in__0 = vlSelfRef.clk_in;
}

VL_ATTR_COLD void Vdivider___024root___eval_initial(Vdivider___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdivider___024root___eval_initial\n"); );
    Vdivider__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vdivider___024root___eval_final(Vdivider___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdivider___024root___eval_final\n"); );
    Vdivider__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vdivider___024root___eval_settle(Vdivider___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdivider___024root___eval_settle\n"); );
    Vdivider__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

bool Vdivider___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdivider___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdivider___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vdivider___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge clk_in)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vdivider___024root___ctor_var_reset(Vdivider___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdivider___024root___ctor_var_reset\n"); );
    Vdivider__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7300820149525667669ull);
    vlSelf->rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1638864771569018232ull);
    vlSelf->div_val = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15473528626211706826ull);
    vlSelf->clk_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10850409511193680662ull);
    vlSelf->divider__DOT__counter = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12507293913929274473ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk_in__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17525217497419317126ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
