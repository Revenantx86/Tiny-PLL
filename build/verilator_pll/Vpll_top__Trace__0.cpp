// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vpll_top__Syms.h"


void Vpll_top___024root__trace_chg_0_sub_0(Vpll_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vpll_top___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpll_top___024root__trace_chg_0\n"); );
    // Init
    Vpll_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpll_top___024root*>(voidSelf);
    Vpll_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vpll_top___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vpll_top___024root__trace_chg_0_sub_0(Vpll_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vpll_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpll_top___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+0,(vlSelf->pll_top__DOT__pfd_error),4);
        bufp->chgBit(oldp+1,(vlSelf->pll_top__DOT__pfd_sample));
        bufp->chgIData(oldp+2,(vlSelf->pll_top__DOT__dco_ctrl_word),32);
        bufp->chgBit(oldp+3,(vlSelf->pll_top__DOT__internal_lock));
        bufp->chgCData(oldp+4,(vlSelf->pll_top__DOT__dynamic_kp),5);
        bufp->chgCData(oldp+5,(vlSelf->pll_top__DOT__dynamic_ki),5);
        bufp->chgCData(oldp+6,(vlSelf->pll_top__DOT__unlock_timer),6);
        bufp->chgIData(oldp+7,(vlSelf->pll_top__DOT__dco_inst__DOT__accumulator),32);
        bufp->chgIData(oldp+8,(vlSelf->pll_top__DOT__lf_inst__DOT__integrator),32);
        bufp->chgIData(oldp+9,((vlSelf->pll_top__DOT__lf_inst__DOT____VdfgTmp_h7d8f5e2e__0 
                                << (IData)(vlSelf->pll_top__DOT__dynamic_kp))),32);
        bufp->chgIData(oldp+10,((vlSelf->pll_top__DOT__lf_inst__DOT____VdfgTmp_h7d8f5e2e__0 
                                 << (IData)(vlSelf->pll_top__DOT__dynamic_ki))),32);
        bufp->chgIData(oldp+11,(vlSelf->pll_top__DOT__lf_inst__DOT__next_integrator),32);
        bufp->chgCData(oldp+12,(vlSelf->pll_top__DOT__lf_inst__DOT__zero_error_count),5);
        bufp->chgCData(oldp+13,(vlSelf->pll_top__DOT__pfd_inst__DOT__ref_sync),3);
        bufp->chgCData(oldp+14,(vlSelf->pll_top__DOT__pfd_inst__DOT__fb_sync),3);
        bufp->chgBit(oldp+15,((1U == (3U & ((IData)(vlSelf->pll_top__DOT__pfd_inst__DOT__ref_sync) 
                                            >> 1U)))));
        bufp->chgBit(oldp+16,((1U == (3U & ((IData)(vlSelf->pll_top__DOT__pfd_inst__DOT__fb_sync) 
                                            >> 1U)))));
        bufp->chgCData(oldp+17,(vlSelf->pll_top__DOT__pfd_inst__DOT__state),2);
    }
    bufp->chgBit(oldp+18,(vlSelf->sys_clk));
    bufp->chgBit(oldp+19,(vlSelf->rst_n));
    bufp->chgBit(oldp+20,(vlSelf->ref_clk));
    bufp->chgIData(oldp+21,(vlSelf->div_val),32);
    bufp->chgIData(oldp+22,(vlSelf->initial_freq),32);
    bufp->chgBit(oldp+23,(vlSelf->pll_out));
    bufp->chgBit(oldp+24,(vlSelf->lock_detect));
    bufp->chgIData(oldp+25,(vlSelf->debug_dco_word),32);
    bufp->chgBit(oldp+26,(vlSelf->pll_top__DOT__fb_clk_internal));
    bufp->chgIData(oldp+27,(vlSelf->pll_top__DOT__div_inst__DOT__counter),32);
}

void Vpll_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpll_top___024root__trace_cleanup\n"); );
    // Init
    Vpll_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpll_top___024root*>(voidSelf);
    Vpll_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
