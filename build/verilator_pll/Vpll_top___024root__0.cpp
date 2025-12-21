// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpll_top.h for the primary calling header

#include "Vpll_top__pch.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpll_top___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vpll_top___024root___eval_triggers__act(Vpll_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpll_top___024root___eval_triggers__act\n"); );
    Vpll_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((((IData)(vlSelfRef.pll_out) 
                                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__pll_out__0))) 
                                                      << 1U) 
                                                     | ((IData)(vlSelfRef.sys_clk) 
                                                        & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sys_clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__sys_clk__0 = vlSelfRef.sys_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__pll_out__0 = vlSelfRef.pll_out;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vpll_top___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
}

bool Vpll_top___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpll_top___024root___trigger_anySet__act\n"); );
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

extern const VlUnpacked<CData/*2:0*/, 256> Vpll_top__ConstPool__TABLE_h4875d6ca_0;
extern const VlUnpacked<CData/*5:0*/, 256> Vpll_top__ConstPool__TABLE_h45dc6711_0;
extern const VlUnpacked<CData/*4:0*/, 256> Vpll_top__ConstPool__TABLE_h51da85bd_0;
extern const VlUnpacked<CData/*4:0*/, 256> Vpll_top__ConstPool__TABLE_h0858736f_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vpll_top__ConstPool__TABLE_h37be494a_0;
extern const VlUnpacked<CData/*2:0*/, 32> Vpll_top__ConstPool__TABLE_h5f99f885_0;
extern const VlUnpacked<CData/*3:0*/, 32> Vpll_top__ConstPool__TABLE_hf702d37d_0;
extern const VlUnpacked<CData/*1:0*/, 32> Vpll_top__ConstPool__TABLE_hef3f0edc_0;

void Vpll_top___024root___nba_sequent__TOP__0(Vpll_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpll_top___024root___nba_sequent__TOP__0\n"); );
    Vpll_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*4:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*2:0*/ __Vdly__pll_top__DOT__pfd_inst__DOT__ref_sync;
    __Vdly__pll_top__DOT__pfd_inst__DOT__ref_sync = 0;
    CData/*2:0*/ __Vdly__pll_top__DOT__pfd_inst__DOT__fb_sync;
    __Vdly__pll_top__DOT__pfd_inst__DOT__fb_sync = 0;
    // Body
    __Vdly__pll_top__DOT__pfd_inst__DOT__ref_sync = vlSelfRef.pll_top__DOT__pfd_inst__DOT__ref_sync;
    __Vdly__pll_top__DOT__pfd_inst__DOT__fb_sync = vlSelfRef.pll_top__DOT__pfd_inst__DOT__fb_sync;
    if (vlSelfRef.rst_n) {
        __Vdly__pll_top__DOT__pfd_inst__DOT__ref_sync 
            = ((6U & ((IData)(vlSelfRef.pll_top__DOT__pfd_inst__DOT__ref_sync) 
                      << 1U)) | (IData)(vlSelfRef.ref_clk));
        __Vdly__pll_top__DOT__pfd_inst__DOT__fb_sync 
            = ((6U & ((IData)(vlSelfRef.pll_top__DOT__pfd_inst__DOT__fb_sync) 
                      << 1U)) | (IData)(vlSelfRef.pll_top__DOT__fb_clk_internal));
        vlSelfRef.pll_top__DOT__dco_inst__DOT__accumulator 
            = (vlSelfRef.pll_top__DOT__dco_inst__DOT__accumulator 
               + vlSelfRef.pll_top__DOT__dco_ctrl_word);
    } else {
        __Vdly__pll_top__DOT__pfd_inst__DOT__ref_sync = 0U;
        __Vdly__pll_top__DOT__pfd_inst__DOT__fb_sync = 0U;
        vlSelfRef.pll_top__DOT__dco_inst__DOT__accumulator = 0U;
    }
    vlSelfRef.pll_out = (vlSelfRef.pll_top__DOT__dco_inst__DOT__accumulator 
                         >> 0x0000001fU);
    if (vlSelfRef.rst_n) {
        if (vlSelfRef.pll_top__DOT__pfd_sample) {
            vlSelfRef.pll_top__DOT__lf_inst__DOT__integrator 
                = vlSelfRef.pll_top__DOT__lf_inst__DOT__next_integrator;
            vlSelfRef.pll_top__DOT__dco_ctrl_word = 
                (vlSelfRef.pll_top__DOT__lf_inst__DOT__next_integrator 
                 + (vlSelfRef.pll_top__DOT__lf_inst__DOT____VdfgRegularize_hbae78005_0_0 
                    << (IData)(vlSelfRef.pll_top__DOT__dynamic_kp)));
        }
    } else {
        vlSelfRef.pll_top__DOT__lf_inst__DOT__integrator 
            = vlSelfRef.initial_freq;
        vlSelfRef.pll_top__DOT__dco_ctrl_word = vlSelfRef.initial_freq;
    }
    vlSelfRef.debug_dco_word = vlSelfRef.pll_top__DOT__dco_ctrl_word;
    __Vtableidx1 = (((IData)(vlSelfRef.pll_top__DOT__unlock_timer) 
                     << 2U) | (((IData)(vlSelfRef.pll_top__DOT__internal_lock) 
                                << 1U) | (IData)(vlSelfRef.rst_n)));
    if (vlSelfRef.rst_n) {
        if (vlSelfRef.pll_top__DOT__pfd_sample) {
            if ((0U == VL_EXTENDS_II(32,4, (IData)(vlSelfRef.pll_top__DOT__pfd_error)))) {
                if ((0x14U > (IData)(vlSelfRef.pll_top__DOT__lf_inst__DOT__zero_error_count))) {
                    vlSelfRef.pll_top__DOT__lf_inst__DOT__zero_error_count 
                        = (0x0000001fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.pll_top__DOT__lf_inst__DOT__zero_error_count)));
                } else {
                    vlSelfRef.pll_top__DOT__internal_lock = 1U;
                }
            } else {
                vlSelfRef.pll_top__DOT__lf_inst__DOT__zero_error_count = 0U;
                vlSelfRef.pll_top__DOT__internal_lock = 0U;
            }
        }
    } else {
        vlSelfRef.pll_top__DOT__lf_inst__DOT__zero_error_count = 0U;
        vlSelfRef.pll_top__DOT__internal_lock = 0U;
    }
    if ((1U & Vpll_top__ConstPool__TABLE_h4875d6ca_0
         [__Vtableidx1])) {
        vlSelfRef.pll_top__DOT__unlock_timer = Vpll_top__ConstPool__TABLE_h45dc6711_0
            [__Vtableidx1];
    }
    vlSelfRef.pll_top__DOT__dynamic_kp = Vpll_top__ConstPool__TABLE_h51da85bd_0
        [__Vtableidx1];
    vlSelfRef.pll_top__DOT__dynamic_ki = Vpll_top__ConstPool__TABLE_h0858736f_0
        [__Vtableidx1];
    vlSelfRef.lock_detect = vlSelfRef.pll_top__DOT__internal_lock;
    __Vtableidx2 = ((((1U == (3U & ((IData)(vlSelfRef.pll_top__DOT__pfd_inst__DOT__fb_sync) 
                                    >> 1U))) << 4U) 
                     | ((1U == (3U & ((IData)(vlSelfRef.pll_top__DOT__pfd_inst__DOT__ref_sync) 
                                      >> 1U))) << 3U)) 
                    | (((IData)(vlSelfRef.pll_top__DOT__pfd_inst__DOT__state) 
                        << 1U) | (IData)(vlSelfRef.rst_n)));
    vlSelfRef.pll_top__DOT__pfd_sample = Vpll_top__ConstPool__TABLE_h37be494a_0
        [__Vtableidx2];
    if ((2U & Vpll_top__ConstPool__TABLE_h5f99f885_0
         [__Vtableidx2])) {
        vlSelfRef.pll_top__DOT__pfd_error = Vpll_top__ConstPool__TABLE_hf702d37d_0
            [__Vtableidx2];
    }
    if ((4U & Vpll_top__ConstPool__TABLE_h5f99f885_0
         [__Vtableidx2])) {
        vlSelfRef.pll_top__DOT__pfd_inst__DOT__state 
            = Vpll_top__ConstPool__TABLE_hef3f0edc_0
            [__Vtableidx2];
    }
    vlSelfRef.pll_top__DOT__pfd_inst__DOT__fb_sync 
        = __Vdly__pll_top__DOT__pfd_inst__DOT__fb_sync;
    vlSelfRef.pll_top__DOT__pfd_inst__DOT__ref_sync 
        = __Vdly__pll_top__DOT__pfd_inst__DOT__ref_sync;
    vlSelfRef.pll_top__DOT__lf_inst__DOT____VdfgRegularize_hbae78005_0_0 
        = (((- (IData)((1U & ((IData)(vlSelfRef.pll_top__DOT__pfd_error) 
                              >> 3U)))) << 4U) | (IData)(vlSelfRef.pll_top__DOT__pfd_error));
    vlSelfRef.pll_top__DOT__lf_inst__DOT__next_integrator 
        = (vlSelfRef.pll_top__DOT__lf_inst__DOT__integrator 
           + (vlSelfRef.pll_top__DOT__lf_inst__DOT____VdfgRegularize_hbae78005_0_0 
              << (IData)(vlSelfRef.pll_top__DOT__dynamic_ki)));
}

void Vpll_top___024root___nba_sequent__TOP__1(Vpll_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpll_top___024root___nba_sequent__TOP__1\n"); );
    Vpll_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__pll_top__DOT__div_inst__DOT__counter;
    __Vdly__pll_top__DOT__div_inst__DOT__counter = 0;
    // Body
    __Vdly__pll_top__DOT__div_inst__DOT__counter = vlSelfRef.pll_top__DOT__div_inst__DOT__counter;
    if (vlSelfRef.rst_n) {
        if ((vlSelfRef.pll_top__DOT__div_inst__DOT__counter 
             >= (vlSelfRef.div_val - (IData)(1U)))) {
            __Vdly__pll_top__DOT__div_inst__DOT__counter = 0U;
            vlSelfRef.pll_top__DOT__fb_clk_internal = 1U;
        } else {
            __Vdly__pll_top__DOT__div_inst__DOT__counter 
                = ((IData)(1U) + vlSelfRef.pll_top__DOT__div_inst__DOT__counter);
            vlSelfRef.pll_top__DOT__fb_clk_internal 
                = (((IData)(1U) + vlSelfRef.pll_top__DOT__div_inst__DOT__counter) 
                   < VL_SHIFTR_III(32,32,32, vlSelfRef.div_val, 1U));
        }
    } else {
        __Vdly__pll_top__DOT__div_inst__DOT__counter = 0U;
        vlSelfRef.pll_top__DOT__fb_clk_internal = 0U;
    }
    vlSelfRef.pll_top__DOT__div_inst__DOT__counter 
        = __Vdly__pll_top__DOT__div_inst__DOT__counter;
}

void Vpll_top___024root___eval_nba(Vpll_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpll_top___024root___eval_nba\n"); );
    Vpll_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vpll_top___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vpll_top___024root___nba_sequent__TOP__1(vlSelf);
    }
}

void Vpll_top___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpll_top___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vpll_top___024root___eval_phase__act(Vpll_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpll_top___024root___eval_phase__act\n"); );
    Vpll_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vpll_top___024root___eval_triggers__act(vlSelf);
    Vpll_top___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vpll_top___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpll_top___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vpll_top___024root___eval_phase__nba(Vpll_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpll_top___024root___eval_phase__nba\n"); );
    Vpll_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vpll_top___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vpll_top___024root___eval_nba(vlSelf);
        Vpll_top___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vpll_top___024root___eval(Vpll_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpll_top___024root___eval\n"); );
    Vpll_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vpll_top___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("/Users/refikyalcin/vlsi/digital/Tiny-PLL/src/pll_top.v", 1, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vpll_top___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("/Users/refikyalcin/vlsi/digital/Tiny-PLL/src/pll_top.v", 1, "", "Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (Vpll_top___024root___eval_phase__act(vlSelf));
    } while (Vpll_top___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void Vpll_top___024root___eval_debug_assertions(Vpll_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpll_top___024root___eval_debug_assertions\n"); );
    Vpll_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
}
#endif  // VL_DEBUG
