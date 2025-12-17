// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpfd.h for the primary calling header

#include "Vpfd__pch.h"

VL_ATTR_COLD void Vpfd___024root___eval_static(Vpfd___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpfd___024root___eval_static\n"); );
    Vpfd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0 = vlSelfRef.rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__sys_clk__0 = vlSelfRef.sys_clk;
}

VL_ATTR_COLD void Vpfd___024root___eval_initial(Vpfd___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpfd___024root___eval_initial\n"); );
    Vpfd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vpfd___024root___eval_final(Vpfd___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpfd___024root___eval_final\n"); );
    Vpfd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vpfd___024root___eval_settle(Vpfd___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpfd___024root___eval_settle\n"); );
    Vpfd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

bool Vpfd___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpfd___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpfd___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vpfd___024root___trigger_anySet__act(triggers))))) {
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

VL_ATTR_COLD void Vpfd___024root___ctor_var_reset(Vpfd___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpfd___024root___ctor_var_reset\n"); );
    Vpfd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->sys_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7302336598091101382ull);
    vlSelf->rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1638864771569018232ull);
    vlSelf->ref_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17422155706582183859ull);
    vlSelf->fb_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13578989213905083942ull);
    vlSelf->error_out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17404967636672836712ull);
    vlSelf->sample_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4392723383910105695ull);
    vlSelf->pfd__DOT__ref_sync = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13280703254436915384ull);
    vlSelf->pfd__DOT__fb_sync = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1693277536802123622ull);
    vlSelf->pfd__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 569021857498846085ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14803524876191471008ull);
    vlSelf->__Vtrigprevexpr___TOP__sys_clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6563614763180871282ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
