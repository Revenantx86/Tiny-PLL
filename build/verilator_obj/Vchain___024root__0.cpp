// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vchain.h for the primary calling header

#include "Vchain__pch.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vchain___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vchain___024root___eval_triggers__ico(Vchain___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchain___024root___eval_triggers__ico\n"); );
    Vchain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VicoFirstIteration)));
    vlSelfRef.__VicoFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vchain___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
}

bool Vchain___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchain___024root___trigger_anySet__ico\n"); );
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

void Vchain___024root___ico_sequent__TOP__0(Vchain___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchain___024root___ico_sequent__TOP__0\n"); );
    Vchain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chain__DOT__lf_inst__DOT____VdfgRegularize_hbae78005_0_0 
        = (((- (IData)((1U & ((IData)(vlSelfRef.error_in) 
                              >> 3U)))) << 4U) | (IData)(vlSelfRef.error_in));
    vlSelfRef.chain__DOT__lf_inst__DOT__next_integrator 
        = (vlSelfRef.chain__DOT__lf_inst__DOT__integrator 
           + (vlSelfRef.chain__DOT__lf_inst__DOT____VdfgRegularize_hbae78005_0_0 
              << (IData)(vlSelfRef.ki_shift)));
}

void Vchain___024root___eval_ico(Vchain___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchain___024root___eval_ico\n"); );
    Vchain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered[0U])) {
        Vchain___024root___ico_sequent__TOP__0(vlSelf);
    }
}

bool Vchain___024root___eval_phase__ico(Vchain___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchain___024root___eval_phase__ico\n"); );
    Vchain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    Vchain___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = Vchain___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        Vchain___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vchain___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vchain___024root___eval_triggers__act(Vchain___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchain___024root___eval_triggers__act\n"); );
    Vchain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((((IData)(vlSelfRef.dco_out) 
                                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__dco_out__0))) 
                                                      << 2U) 
                                                     | ((((IData)(vlSelfRef.sys_clk) 
                                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sys_clk__0))) 
                                                         << 1U) 
                                                        | ((~ (IData)(vlSelfRef.rst_n)) 
                                                           & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0 = vlSelfRef.rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__sys_clk__0 = vlSelfRef.sys_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__dco_out__0 = vlSelfRef.dco_out;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vchain___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
}

bool Vchain___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchain___024root___trigger_anySet__act\n"); );
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

void Vchain___024root___nba_sequent__TOP__0(Vchain___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchain___024root___nba_sequent__TOP__0\n"); );
    Vchain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__chain__DOT__div_inst__DOT__counter;
    __Vdly__chain__DOT__div_inst__DOT__counter = 0;
    // Body
    __Vdly__chain__DOT__div_inst__DOT__counter = vlSelfRef.chain__DOT__div_inst__DOT__counter;
    if (vlSelfRef.rst_n) {
        if ((vlSelfRef.chain__DOT__div_inst__DOT__counter 
             >= (vlSelfRef.div_val - (IData)(1U)))) {
            __Vdly__chain__DOT__div_inst__DOT__counter = 0U;
            vlSelfRef.div_out = 1U;
        } else {
            __Vdly__chain__DOT__div_inst__DOT__counter 
                = ((IData)(1U) + vlSelfRef.chain__DOT__div_inst__DOT__counter);
            vlSelfRef.div_out = (((IData)(1U) + vlSelfRef.chain__DOT__div_inst__DOT__counter) 
                                 < VL_SHIFTR_III(32,32,32, vlSelfRef.div_val, 1U));
        }
    } else {
        __Vdly__chain__DOT__div_inst__DOT__counter = 0U;
        vlSelfRef.div_out = 0U;
    }
    vlSelfRef.chain__DOT__div_inst__DOT__counter = __Vdly__chain__DOT__div_inst__DOT__counter;
}

void Vchain___024root___nba_sequent__TOP__1(Vchain___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchain___024root___nba_sequent__TOP__1\n"); );
    Vchain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.rst_n) {
        vlSelfRef.chain__DOT__dco_inst__DOT__accumulator 
            = (vlSelfRef.chain__DOT__dco_inst__DOT__accumulator 
               + vlSelfRef.chain__DOT__filter_to_dco_word);
        if (vlSelfRef.sample_en) {
            if ((0U == VL_EXTENDS_II(32,4, (IData)(vlSelfRef.error_in)))) {
                if ((0x14U > (IData)(vlSelfRef.chain__DOT__lf_inst__DOT__zero_error_count))) {
                    vlSelfRef.chain__DOT__lf_inst__DOT__zero_error_count 
                        = (0x0000001fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.chain__DOT__lf_inst__DOT__zero_error_count)));
                } else {
                    vlSelfRef.lock_detect = 1U;
                }
            } else {
                vlSelfRef.chain__DOT__lf_inst__DOT__zero_error_count = 0U;
                vlSelfRef.lock_detect = 0U;
            }
            vlSelfRef.chain__DOT__lf_inst__DOT__integrator 
                = vlSelfRef.chain__DOT__lf_inst__DOT__next_integrator;
            vlSelfRef.chain__DOT__filter_to_dco_word 
                = (vlSelfRef.chain__DOT__lf_inst__DOT__next_integrator 
                   + (vlSelfRef.chain__DOT__lf_inst__DOT____VdfgRegularize_hbae78005_0_0 
                      << (IData)(vlSelfRef.kp_shift)));
        }
    } else {
        vlSelfRef.chain__DOT__dco_inst__DOT__accumulator = 0U;
        vlSelfRef.chain__DOT__lf_inst__DOT__zero_error_count = 0U;
        vlSelfRef.lock_detect = 0U;
        vlSelfRef.chain__DOT__lf_inst__DOT__integrator 
            = vlSelfRef.initial_freq;
        vlSelfRef.chain__DOT__filter_to_dco_word = vlSelfRef.initial_freq;
    }
    vlSelfRef.dco_out = (vlSelfRef.chain__DOT__dco_inst__DOT__accumulator 
                         >> 0x0000001fU);
    vlSelfRef.chain__DOT__lf_inst__DOT__next_integrator 
        = (vlSelfRef.chain__DOT__lf_inst__DOT__integrator 
           + (vlSelfRef.chain__DOT__lf_inst__DOT____VdfgRegularize_hbae78005_0_0 
              << (IData)(vlSelfRef.ki_shift)));
}

void Vchain___024root___eval_nba(Vchain___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchain___024root___eval_nba\n"); );
    Vchain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((5ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vchain___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vchain___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

void Vchain___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchain___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vchain___024root___eval_phase__act(Vchain___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchain___024root___eval_phase__act\n"); );
    Vchain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vchain___024root___eval_triggers__act(vlSelf);
    Vchain___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vchain___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchain___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vchain___024root___eval_phase__nba(Vchain___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchain___024root___eval_phase__nba\n"); );
    Vchain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vchain___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vchain___024root___eval_nba(vlSelf);
        Vchain___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vchain___024root___eval(Vchain___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchain___024root___eval\n"); );
    Vchain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vchain___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("/Users/refikyalcin/vlsi/digital/Tiny-PLL/src/chain.v", 1, "", "Input combinational region did not converge after 100 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
    } while (Vchain___024root___eval_phase__ico(vlSelf));
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vchain___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("/Users/refikyalcin/vlsi/digital/Tiny-PLL/src/chain.v", 1, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vchain___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("/Users/refikyalcin/vlsi/digital/Tiny-PLL/src/chain.v", 1, "", "Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (Vchain___024root___eval_phase__act(vlSelf));
    } while (Vchain___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void Vchain___024root___eval_debug_assertions(Vchain___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchain___024root___eval_debug_assertions\n"); );
    Vchain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.sys_clk & 0xfeU)))) {
        Verilated::overWidthError("sys_clk");
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
