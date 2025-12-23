// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpll_top.h for the primary calling header

#include "Vpll_top__pch.h"
#include "Vpll_top___024root.h"

void Vpll_top___024root___eval_act(Vpll_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpll_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpll_top___024root___eval_act\n"); );
}

extern const VlUnpacked<CData/*2:0*/, 256> Vpll_top__ConstPool__TABLE_h7d13fc04_0;
extern const VlUnpacked<CData/*5:0*/, 256> Vpll_top__ConstPool__TABLE_h8d071fc7_0;
extern const VlUnpacked<CData/*4:0*/, 256> Vpll_top__ConstPool__TABLE_heb9170dd_0;
extern const VlUnpacked<CData/*4:0*/, 256> Vpll_top__ConstPool__TABLE_hdcf05ba3_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vpll_top__ConstPool__TABLE_h8027cdd4_0;
extern const VlUnpacked<CData/*2:0*/, 32> Vpll_top__ConstPool__TABLE_hf90756e9_0;
extern const VlUnpacked<CData/*3:0*/, 32> Vpll_top__ConstPool__TABLE_hd0fb1c7f_0;
extern const VlUnpacked<CData/*1:0*/, 32> Vpll_top__ConstPool__TABLE_h7ef09654_0;

VL_INLINE_OPT void Vpll_top___024root___nba_sequent__TOP__0(Vpll_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpll_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpll_top___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*4:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*2:0*/ __Vdly__pll_top__DOT__pfd_inst__DOT__ref_sync;
    __Vdly__pll_top__DOT__pfd_inst__DOT__ref_sync = 0;
    CData/*2:0*/ __Vdly__pll_top__DOT__pfd_inst__DOT__fb_sync;
    __Vdly__pll_top__DOT__pfd_inst__DOT__fb_sync = 0;
    // Body
    __Vdly__pll_top__DOT__pfd_inst__DOT__ref_sync = vlSelf->pll_top__DOT__pfd_inst__DOT__ref_sync;
    __Vdly__pll_top__DOT__pfd_inst__DOT__fb_sync = vlSelf->pll_top__DOT__pfd_inst__DOT__fb_sync;
    if (vlSelf->rst_n) {
        __Vdly__pll_top__DOT__pfd_inst__DOT__ref_sync 
            = ((6U & ((IData)(vlSelf->pll_top__DOT__pfd_inst__DOT__ref_sync) 
                      << 1U)) | (IData)(vlSelf->ref_clk));
        __Vdly__pll_top__DOT__pfd_inst__DOT__fb_sync 
            = ((6U & ((IData)(vlSelf->pll_top__DOT__pfd_inst__DOT__fb_sync) 
                      << 1U)) | (IData)(vlSelf->pll_top__DOT__fb_clk_internal));
        vlSelf->pll_top__DOT__dco_inst__DOT__accumulator 
            = (vlSelf->pll_top__DOT__dco_inst__DOT__accumulator 
               + vlSelf->pll_top__DOT__dco_ctrl_word);
    } else {
        __Vdly__pll_top__DOT__pfd_inst__DOT__ref_sync = 0U;
        __Vdly__pll_top__DOT__pfd_inst__DOT__fb_sync = 0U;
        vlSelf->pll_top__DOT__dco_inst__DOT__accumulator = 0U;
    }
    vlSelf->pll_out = (vlSelf->pll_top__DOT__dco_inst__DOT__accumulator 
                       >> 0x1fU);
    if (vlSelf->rst_n) {
        if (vlSelf->pll_top__DOT__pfd_sample) {
            vlSelf->pll_top__DOT__lf_inst__DOT__integrator 
                = vlSelf->pll_top__DOT__lf_inst__DOT__next_integrator;
            vlSelf->pll_top__DOT__dco_ctrl_word = (vlSelf->pll_top__DOT__lf_inst__DOT__next_integrator 
                                                   + 
                                                   (vlSelf->pll_top__DOT__lf_inst__DOT____VdfgTmp_h7d8f5e2e__0 
                                                    << (IData)(vlSelf->pll_top__DOT__dynamic_kp)));
        }
    } else {
        vlSelf->pll_top__DOT__lf_inst__DOT__integrator 
            = vlSelf->initial_freq;
        vlSelf->pll_top__DOT__dco_ctrl_word = vlSelf->initial_freq;
    }
    vlSelf->debug_dco_word = vlSelf->pll_top__DOT__dco_ctrl_word;
    __Vtableidx1 = (((IData)(vlSelf->pll_top__DOT__unlock_timer) 
                     << 2U) | (((IData)(vlSelf->pll_top__DOT__internal_lock) 
                                << 1U) | (IData)(vlSelf->rst_n)));
    if (vlSelf->rst_n) {
        if (vlSelf->pll_top__DOT__pfd_sample) {
            if ((0U == VL_EXTENDS_II(32,4, (IData)(vlSelf->pll_top__DOT__pfd_error)))) {
                if ((0x14U > (IData)(vlSelf->pll_top__DOT__lf_inst__DOT__zero_error_count))) {
                    vlSelf->pll_top__DOT__lf_inst__DOT__zero_error_count 
                        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->pll_top__DOT__lf_inst__DOT__zero_error_count)));
                } else {
                    vlSelf->pll_top__DOT__internal_lock = 1U;
                }
            } else {
                vlSelf->pll_top__DOT__lf_inst__DOT__zero_error_count = 0U;
                vlSelf->pll_top__DOT__internal_lock = 0U;
            }
        }
    } else {
        vlSelf->pll_top__DOT__lf_inst__DOT__zero_error_count = 0U;
        vlSelf->pll_top__DOT__internal_lock = 0U;
    }
    if ((1U & Vpll_top__ConstPool__TABLE_h7d13fc04_0
         [__Vtableidx1])) {
        vlSelf->pll_top__DOT__unlock_timer = Vpll_top__ConstPool__TABLE_h8d071fc7_0
            [__Vtableidx1];
    }
    vlSelf->pll_top__DOT__dynamic_kp = Vpll_top__ConstPool__TABLE_heb9170dd_0
        [__Vtableidx1];
    vlSelf->pll_top__DOT__dynamic_ki = Vpll_top__ConstPool__TABLE_hdcf05ba3_0
        [__Vtableidx1];
    vlSelf->lock_detect = vlSelf->pll_top__DOT__internal_lock;
    __Vtableidx2 = (((1U == (3U & ((IData)(vlSelf->pll_top__DOT__pfd_inst__DOT__fb_sync) 
                                   >> 1U))) << 4U) 
                    | (((1U == (3U & ((IData)(vlSelf->pll_top__DOT__pfd_inst__DOT__ref_sync) 
                                      >> 1U))) << 3U) 
                       | (((IData)(vlSelf->pll_top__DOT__pfd_inst__DOT__state) 
                           << 1U) | (IData)(vlSelf->rst_n))));
    vlSelf->pll_top__DOT__pfd_sample = Vpll_top__ConstPool__TABLE_h8027cdd4_0
        [__Vtableidx2];
    if ((2U & Vpll_top__ConstPool__TABLE_hf90756e9_0
         [__Vtableidx2])) {
        vlSelf->pll_top__DOT__pfd_error = Vpll_top__ConstPool__TABLE_hd0fb1c7f_0
            [__Vtableidx2];
    }
    if ((4U & Vpll_top__ConstPool__TABLE_hf90756e9_0
         [__Vtableidx2])) {
        vlSelf->pll_top__DOT__pfd_inst__DOT__state 
            = Vpll_top__ConstPool__TABLE_h7ef09654_0
            [__Vtableidx2];
    }
    vlSelf->pll_top__DOT__pfd_inst__DOT__fb_sync = __Vdly__pll_top__DOT__pfd_inst__DOT__fb_sync;
    vlSelf->pll_top__DOT__pfd_inst__DOT__ref_sync = __Vdly__pll_top__DOT__pfd_inst__DOT__ref_sync;
    vlSelf->pll_top__DOT__lf_inst__DOT____VdfgTmp_h7d8f5e2e__0 
        = (((- (IData)((1U & ((IData)(vlSelf->pll_top__DOT__pfd_error) 
                              >> 3U)))) << 4U) | (IData)(vlSelf->pll_top__DOT__pfd_error));
    vlSelf->pll_top__DOT__lf_inst__DOT__next_integrator 
        = (vlSelf->pll_top__DOT__lf_inst__DOT__integrator 
           + (vlSelf->pll_top__DOT__lf_inst__DOT____VdfgTmp_h7d8f5e2e__0 
              << (IData)(vlSelf->pll_top__DOT__dynamic_ki)));
}

VL_INLINE_OPT void Vpll_top___024root___nba_sequent__TOP__1(Vpll_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpll_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpll_top___024root___nba_sequent__TOP__1\n"); );
    // Init
    IData/*31:0*/ __Vdly__pll_top__DOT__div_inst__DOT__counter;
    __Vdly__pll_top__DOT__div_inst__DOT__counter = 0;
    // Body
    __Vdly__pll_top__DOT__div_inst__DOT__counter = vlSelf->pll_top__DOT__div_inst__DOT__counter;
    if (vlSelf->rst_n) {
        if ((vlSelf->pll_top__DOT__div_inst__DOT__counter 
             >= (vlSelf->div_val - (IData)(1U)))) {
            __Vdly__pll_top__DOT__div_inst__DOT__counter = 0U;
            vlSelf->pll_top__DOT__fb_clk_internal = 1U;
        } else {
            __Vdly__pll_top__DOT__div_inst__DOT__counter 
                = ((IData)(1U) + vlSelf->pll_top__DOT__div_inst__DOT__counter);
            vlSelf->pll_top__DOT__fb_clk_internal = 
                (((IData)(1U) + vlSelf->pll_top__DOT__div_inst__DOT__counter) 
                 < VL_SHIFTR_III(32,32,32, vlSelf->div_val, 1U));
        }
    } else {
        __Vdly__pll_top__DOT__div_inst__DOT__counter = 0U;
        vlSelf->pll_top__DOT__fb_clk_internal = 0U;
    }
    vlSelf->pll_top__DOT__div_inst__DOT__counter = __Vdly__pll_top__DOT__div_inst__DOT__counter;
}

void Vpll_top___024root___eval_nba(Vpll_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpll_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpll_top___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vpll_top___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vpll_top___024root___nba_sequent__TOP__1(vlSelf);
    }
}

void Vpll_top___024root___eval_triggers__act(Vpll_top___024root* vlSelf);

bool Vpll_top___024root___eval_phase__act(Vpll_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpll_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpll_top___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vpll_top___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vpll_top___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vpll_top___024root___eval_phase__nba(Vpll_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpll_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpll_top___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vpll_top___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpll_top___024root___dump_triggers__nba(Vpll_top___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vpll_top___024root___dump_triggers__act(Vpll_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vpll_top___024root___eval(Vpll_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpll_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpll_top___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vpll_top___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/home/highpoly/vlsi/digital/Tiny-PLL/src/pll_top.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vpll_top___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/home/highpoly/vlsi/digital/Tiny-PLL/src/pll_top.v", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vpll_top___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vpll_top___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vpll_top___024root___eval_debug_assertions(Vpll_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpll_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpll_top___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->sys_clk & 0xfeU))) {
        Verilated::overWidthError("sys_clk");}
    if (VL_UNLIKELY((vlSelf->rst_n & 0xfeU))) {
        Verilated::overWidthError("rst_n");}
    if (VL_UNLIKELY((vlSelf->ref_clk & 0xfeU))) {
        Verilated::overWidthError("ref_clk");}
}
#endif  // VL_DEBUG
