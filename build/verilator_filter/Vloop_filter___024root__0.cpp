// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vloop_filter.h for the primary calling header

#include "Vloop_filter__pch.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vloop_filter___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vloop_filter___024root___eval_triggers__ico(Vloop_filter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vloop_filter___024root___eval_triggers__ico\n"); );
    Vloop_filter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VicoFirstIteration)));
    vlSelfRef.__VicoFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vloop_filter___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
}

bool Vloop_filter___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vloop_filter___024root___trigger_anySet__ico\n"); );
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

void Vloop_filter___024root___ico_sequent__TOP__0(Vloop_filter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vloop_filter___024root___ico_sequent__TOP__0\n"); );
    Vloop_filter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.loop_filter__DOT____VdfgRegularize_hbae78005_0_0 
        = (((- (IData)((1U & ((IData)(vlSelfRef.error_in) 
                              >> 3U)))) << 4U) | (IData)(vlSelfRef.error_in));
    vlSelfRef.loop_filter__DOT__next_integrator = (vlSelfRef.loop_filter__DOT__integrator 
                                                   + 
                                                   (vlSelfRef.loop_filter__DOT____VdfgRegularize_hbae78005_0_0 
                                                    << (IData)(vlSelfRef.ki_shift)));
}

void Vloop_filter___024root___eval_ico(Vloop_filter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vloop_filter___024root___eval_ico\n"); );
    Vloop_filter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered[0U])) {
        Vloop_filter___024root___ico_sequent__TOP__0(vlSelf);
    }
}

bool Vloop_filter___024root___eval_phase__ico(Vloop_filter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vloop_filter___024root___eval_phase__ico\n"); );
    Vloop_filter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    Vloop_filter___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = Vloop_filter___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        Vloop_filter___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vloop_filter___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vloop_filter___024root___eval_triggers__act(Vloop_filter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vloop_filter___024root___eval_triggers__act\n"); );
    Vloop_filter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((IData)(vlSelfRef.clk) 
                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vloop_filter___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
}

bool Vloop_filter___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vloop_filter___024root___trigger_anySet__act\n"); );
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

void Vloop_filter___024root___nba_sequent__TOP__0(Vloop_filter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vloop_filter___024root___nba_sequent__TOP__0\n"); );
    Vloop_filter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.rst_n) {
        if (vlSelfRef.sample_en) {
            if ((0U == VL_EXTENDS_II(32,4, (IData)(vlSelfRef.error_in)))) {
                if ((0x14U > (IData)(vlSelfRef.loop_filter__DOT__zero_error_count))) {
                    vlSelfRef.loop_filter__DOT__zero_error_count 
                        = (0x0000001fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.loop_filter__DOT__zero_error_count)));
                } else {
                    vlSelfRef.lock_detect = 1U;
                }
            } else {
                vlSelfRef.loop_filter__DOT__zero_error_count = 0U;
                vlSelfRef.lock_detect = 0U;
            }
            vlSelfRef.loop_filter__DOT__integrator 
                = vlSelfRef.loop_filter__DOT__next_integrator;
            vlSelfRef.dco_ctrl = (vlSelfRef.loop_filter__DOT__next_integrator 
                                  + (vlSelfRef.loop_filter__DOT____VdfgRegularize_hbae78005_0_0 
                                     << (IData)(vlSelfRef.kp_shift)));
        }
    } else {
        vlSelfRef.loop_filter__DOT__zero_error_count = 0U;
        vlSelfRef.lock_detect = 0U;
        vlSelfRef.loop_filter__DOT__integrator = vlSelfRef.initial_freq;
        vlSelfRef.dco_ctrl = vlSelfRef.initial_freq;
    }
    vlSelfRef.loop_filter__DOT__next_integrator = (vlSelfRef.loop_filter__DOT__integrator 
                                                   + 
                                                   (vlSelfRef.loop_filter__DOT____VdfgRegularize_hbae78005_0_0 
                                                    << (IData)(vlSelfRef.ki_shift)));
}

void Vloop_filter___024root___eval_nba(Vloop_filter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vloop_filter___024root___eval_nba\n"); );
    Vloop_filter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vloop_filter___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vloop_filter___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vloop_filter___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vloop_filter___024root___eval_phase__act(Vloop_filter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vloop_filter___024root___eval_phase__act\n"); );
    Vloop_filter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vloop_filter___024root___eval_triggers__act(vlSelf);
    Vloop_filter___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vloop_filter___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vloop_filter___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vloop_filter___024root___eval_phase__nba(Vloop_filter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vloop_filter___024root___eval_phase__nba\n"); );
    Vloop_filter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vloop_filter___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vloop_filter___024root___eval_nba(vlSelf);
        Vloop_filter___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vloop_filter___024root___eval(Vloop_filter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vloop_filter___024root___eval\n"); );
    Vloop_filter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vloop_filter___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("/Users/refikyalcin/vlsi/digital/Tiny-PLL/src/loop_filter.v", 1, "", "Input combinational region did not converge after 100 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
    } while (Vloop_filter___024root___eval_phase__ico(vlSelf));
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vloop_filter___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("/Users/refikyalcin/vlsi/digital/Tiny-PLL/src/loop_filter.v", 1, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vloop_filter___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("/Users/refikyalcin/vlsi/digital/Tiny-PLL/src/loop_filter.v", 1, "", "Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (Vloop_filter___024root___eval_phase__act(vlSelf));
    } while (Vloop_filter___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void Vloop_filter___024root___eval_debug_assertions(Vloop_filter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vloop_filter___024root___eval_debug_assertions\n"); );
    Vloop_filter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.rst_n & 0xfeU)))) {
        Verilated::overWidthError("rst_n");
    }
    if (VL_UNLIKELY(((vlSelfRef.sample_en & 0xfeU)))) {
        Verilated::overWidthError("sample_en");
    }
    if (VL_UNLIKELY(((vlSelfRef.error_in & 0xf0U)))) {
        Verilated::overWidthError("error_in");
    }
    if (VL_UNLIKELY(((vlSelfRef.kp_shift & 0xe0U)))) {
        Verilated::overWidthError("kp_shift");
    }
    if (VL_UNLIKELY(((vlSelfRef.ki_shift & 0xe0U)))) {
        Verilated::overWidthError("ki_shift");
    }
}
#endif  // VL_DEBUG
