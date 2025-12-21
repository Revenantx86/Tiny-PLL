// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpfd.h for the primary calling header

#include "Vpfd__pch.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpfd___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vpfd___024root___eval_triggers__act(Vpfd___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpfd___024root___eval_triggers__act\n"); );
    Vpfd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((IData)(vlSelfRef.sys_clk) 
                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sys_clk__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP__sys_clk__0 = vlSelfRef.sys_clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vpfd___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
}

bool Vpfd___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpfd___024root___trigger_anySet__act\n"); );
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

extern const VlUnpacked<CData/*0:0*/, 32> Vpfd__ConstPool__TABLE_h37be494a_0;
extern const VlUnpacked<CData/*2:0*/, 32> Vpfd__ConstPool__TABLE_h5f99f885_0;
extern const VlUnpacked<CData/*3:0*/, 32> Vpfd__ConstPool__TABLE_hf702d37d_0;
extern const VlUnpacked<CData/*1:0*/, 32> Vpfd__ConstPool__TABLE_hef3f0edc_0;

void Vpfd___024root___nba_sequent__TOP__0(Vpfd___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpfd___024root___nba_sequent__TOP__0\n"); );
    Vpfd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*4:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*2:0*/ __Vdly__pfd__DOT__ref_sync;
    __Vdly__pfd__DOT__ref_sync = 0;
    CData/*2:0*/ __Vdly__pfd__DOT__fb_sync;
    __Vdly__pfd__DOT__fb_sync = 0;
    // Body
    __Vdly__pfd__DOT__ref_sync = vlSelfRef.pfd__DOT__ref_sync;
    __Vdly__pfd__DOT__fb_sync = vlSelfRef.pfd__DOT__fb_sync;
    if (vlSelfRef.rst_n) {
        __Vdly__pfd__DOT__ref_sync = ((6U & ((IData)(vlSelfRef.pfd__DOT__ref_sync) 
                                             << 1U)) 
                                      | (IData)(vlSelfRef.ref_clk));
        __Vdly__pfd__DOT__fb_sync = ((6U & ((IData)(vlSelfRef.pfd__DOT__fb_sync) 
                                            << 1U)) 
                                     | (IData)(vlSelfRef.fb_clk));
    } else {
        __Vdly__pfd__DOT__ref_sync = 0U;
        __Vdly__pfd__DOT__fb_sync = 0U;
    }
    __Vtableidx1 = ((((1U == (3U & ((IData)(vlSelfRef.pfd__DOT__fb_sync) 
                                    >> 1U))) << 4U) 
                     | ((1U == (3U & ((IData)(vlSelfRef.pfd__DOT__ref_sync) 
                                      >> 1U))) << 3U)) 
                    | (((IData)(vlSelfRef.pfd__DOT__state) 
                        << 1U) | (IData)(vlSelfRef.rst_n)));
    vlSelfRef.sample_en = Vpfd__ConstPool__TABLE_h37be494a_0
        [__Vtableidx1];
    if ((2U & Vpfd__ConstPool__TABLE_h5f99f885_0[__Vtableidx1])) {
        vlSelfRef.error_out = Vpfd__ConstPool__TABLE_hf702d37d_0
            [__Vtableidx1];
    }
    if ((4U & Vpfd__ConstPool__TABLE_h5f99f885_0[__Vtableidx1])) {
        vlSelfRef.pfd__DOT__state = Vpfd__ConstPool__TABLE_hef3f0edc_0
            [__Vtableidx1];
    }
    vlSelfRef.pfd__DOT__fb_sync = __Vdly__pfd__DOT__fb_sync;
    vlSelfRef.pfd__DOT__ref_sync = __Vdly__pfd__DOT__ref_sync;
}

void Vpfd___024root___eval_nba(Vpfd___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpfd___024root___eval_nba\n"); );
    Vpfd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vpfd___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

void Vpfd___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpfd___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vpfd___024root___eval_phase__act(Vpfd___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpfd___024root___eval_phase__act\n"); );
    Vpfd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vpfd___024root___eval_triggers__act(vlSelf);
    Vpfd___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vpfd___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpfd___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vpfd___024root___eval_phase__nba(Vpfd___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpfd___024root___eval_phase__nba\n"); );
    Vpfd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vpfd___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vpfd___024root___eval_nba(vlSelf);
        Vpfd___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vpfd___024root___eval(Vpfd___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpfd___024root___eval\n"); );
    Vpfd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vpfd___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("/Users/refikyalcin/vlsi/digital/Tiny-PLL/src/pfd.v", 1, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vpfd___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("/Users/refikyalcin/vlsi/digital/Tiny-PLL/src/pfd.v", 1, "", "Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (Vpfd___024root___eval_phase__act(vlSelf));
    } while (Vpfd___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void Vpfd___024root___eval_debug_assertions(Vpfd___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpfd___024root___eval_debug_assertions\n"); );
    Vpfd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.sys_clk & 0xfeU)))) {
        Verilated::overWidthError("sys_clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.rst_n & 0xfeU)))) {
        Verilated::overWidthError("rst_n");
    }
    if (VL_UNLIKELY(((vlSelfRef.ref_clk & 0xfeU)))) {
        Verilated::overWidthError("ref_clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.fb_clk & 0xfeU)))) {
        Verilated::overWidthError("fb_clk");
    }
}
#endif  // VL_DEBUG
