// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpll_top.h for the primary calling header

#include "Vpll_top__pch.h"
#include "Vpll_top__Syms.h"
#include "Vpll_top___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpll_top___024root___dump_triggers__act(Vpll_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vpll_top___024root___eval_triggers__act(Vpll_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpll_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpll_top___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->sys_clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__sys_clk__0))));
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSelf->pll_out) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__pll_out__0))));
    vlSelf->__Vtrigprevexpr___TOP__sys_clk__0 = vlSelf->sys_clk;
    vlSelf->__Vtrigprevexpr___TOP__pll_out__0 = vlSelf->pll_out;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vpll_top___024root___dump_triggers__act(vlSelf);
    }
#endif
}
