// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdco_nco.h for the primary calling header

#include "Vdco_nco__pch.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdco_nco___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vdco_nco___024root___eval_triggers__act(Vdco_nco___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdco_nco___024root___eval_triggers__act\n"); );
    Vdco_nco__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((((IData)(vlSelfRef.sys_clk) 
                                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sys_clk__0))) 
                                                      << 1U) 
                                                     | ((~ (IData)(vlSelfRef.rst_n)) 
                                                        & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0 = vlSelfRef.rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__sys_clk__0 = vlSelfRef.sys_clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vdco_nco___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
}

bool Vdco_nco___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdco_nco___024root___trigger_anySet__act\n"); );
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

void Vdco_nco___024root___nba_sequent__TOP__0(Vdco_nco___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdco_nco___024root___nba_sequent__TOP__0\n"); );
    Vdco_nco__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.dco_nco__DOT__accumulator = ((IData)(vlSelfRef.rst_n)
                                            ? (vlSelfRef.dco_nco__DOT__accumulator 
                                               + vlSelfRef.tuning_word)
                                            : 0U);
    vlSelfRef.dco_out = (vlSelfRef.dco_nco__DOT__accumulator 
                         >> 0x0000001fU);
}

void Vdco_nco___024root___eval_nba(Vdco_nco___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdco_nco___024root___eval_nba\n"); );
    Vdco_nco__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vdco_nco___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vdco_nco___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdco_nco___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vdco_nco___024root___eval_phase__act(Vdco_nco___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdco_nco___024root___eval_phase__act\n"); );
    Vdco_nco__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vdco_nco___024root___eval_triggers__act(vlSelf);
    Vdco_nco___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vdco_nco___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdco_nco___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vdco_nco___024root___eval_phase__nba(Vdco_nco___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdco_nco___024root___eval_phase__nba\n"); );
    Vdco_nco__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vdco_nco___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vdco_nco___024root___eval_nba(vlSelf);
        Vdco_nco___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vdco_nco___024root___eval(Vdco_nco___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdco_nco___024root___eval\n"); );
    Vdco_nco__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vdco_nco___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("/Users/refikyalcin/vlsi/digital/Tiny-PLL/src/dco_nco.v", 1, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vdco_nco___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("/Users/refikyalcin/vlsi/digital/Tiny-PLL/src/dco_nco.v", 1, "", "Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (Vdco_nco___024root___eval_phase__act(vlSelf));
    } while (Vdco_nco___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void Vdco_nco___024root___eval_debug_assertions(Vdco_nco___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdco_nco___024root___eval_debug_assertions\n"); );
    Vdco_nco__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.sys_clk & 0xfeU)))) {
        Verilated::overWidthError("sys_clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.rst_n & 0xfeU)))) {
        Verilated::overWidthError("rst_n");
    }
}
#endif  // VL_DEBUG
