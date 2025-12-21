// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdivider.h for the primary calling header

#include "Vdivider__pch.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdivider___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vdivider___024root___eval_triggers__act(Vdivider___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdivider___024root___eval_triggers__act\n"); );
    Vdivider__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((IData)(vlSelfRef.clk_in) 
                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk_in__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP__clk_in__0 = vlSelfRef.clk_in;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vdivider___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
}

bool Vdivider___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdivider___024root___trigger_anySet__act\n"); );
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

void Vdivider___024root___nba_sequent__TOP__0(Vdivider___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdivider___024root___nba_sequent__TOP__0\n"); );
    Vdivider__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__divider__DOT__counter;
    __Vdly__divider__DOT__counter = 0;
    // Body
    __Vdly__divider__DOT__counter = vlSelfRef.divider__DOT__counter;
    if (vlSelfRef.rst_n) {
        if ((vlSelfRef.divider__DOT__counter >= (vlSelfRef.div_val 
                                                 - (IData)(1U)))) {
            __Vdly__divider__DOT__counter = 0U;
            vlSelfRef.clk_out = 1U;
        } else {
            __Vdly__divider__DOT__counter = ((IData)(1U) 
                                             + vlSelfRef.divider__DOT__counter);
            vlSelfRef.clk_out = (((IData)(1U) + vlSelfRef.divider__DOT__counter) 
                                 < VL_SHIFTR_III(32,32,32, vlSelfRef.div_val, 1U));
        }
    } else {
        __Vdly__divider__DOT__counter = 0U;
        vlSelfRef.clk_out = 0U;
    }
    vlSelfRef.divider__DOT__counter = __Vdly__divider__DOT__counter;
}

void Vdivider___024root___eval_nba(Vdivider___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdivider___024root___eval_nba\n"); );
    Vdivider__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vdivider___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vdivider___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdivider___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vdivider___024root___eval_phase__act(Vdivider___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdivider___024root___eval_phase__act\n"); );
    Vdivider__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vdivider___024root___eval_triggers__act(vlSelf);
    Vdivider___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vdivider___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdivider___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vdivider___024root___eval_phase__nba(Vdivider___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdivider___024root___eval_phase__nba\n"); );
    Vdivider__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vdivider___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vdivider___024root___eval_nba(vlSelf);
        Vdivider___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vdivider___024root___eval(Vdivider___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdivider___024root___eval\n"); );
    Vdivider__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vdivider___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("/Users/refikyalcin/vlsi/digital/Tiny-PLL/src/divider.v", 1, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vdivider___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("/Users/refikyalcin/vlsi/digital/Tiny-PLL/src/divider.v", 1, "", "Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (Vdivider___024root___eval_phase__act(vlSelf));
    } while (Vdivider___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void Vdivider___024root___eval_debug_assertions(Vdivider___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdivider___024root___eval_debug_assertions\n"); );
    Vdivider__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk_in & 0xfeU)))) {
        Verilated::overWidthError("clk_in");
    }
    if (VL_UNLIKELY(((vlSelfRef.rst_n & 0xfeU)))) {
        Verilated::overWidthError("rst_n");
    }
}
#endif  // VL_DEBUG
