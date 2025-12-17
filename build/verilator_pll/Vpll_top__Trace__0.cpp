// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vpll_top__Syms.h"


void Vpll_top___024root__trace_chg_0_sub_0(Vpll_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vpll_top___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpll_top___024root__trace_chg_0\n"); );
    // Body
    Vpll_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpll_top___024root*>(voidSelf);
    Vpll_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vpll_top___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vpll_top___024root__trace_chg_0_sub_0(Vpll_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpll_top___024root__trace_chg_0_sub_0\n"); );
    Vpll_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgCData(oldp+0,(vlSelfRef.pll_top__DOT__pfd_error),4);
        bufp->chgBit(oldp+1,(vlSelfRef.pll_top__DOT__pfd_sample));
        bufp->chgIData(oldp+2,(vlSelfRef.pll_top__DOT__dco_ctrl_word),32);
        bufp->chgBit(oldp+3,(vlSelfRef.pll_top__DOT__internal_lock));
        bufp->chgCData(oldp+4,(vlSelfRef.pll_top__DOT__dynamic_kp),5);
        bufp->chgCData(oldp+5,(vlSelfRef.pll_top__DOT__dynamic_ki),5);
        bufp->chgCData(oldp+6,(vlSelfRef.pll_top__DOT__unlock_timer),6);
        bufp->chgIData(oldp+7,(vlSelfRef.pll_top__DOT__dco_inst__DOT__accumulator),32);
        bufp->chgIData(oldp+8,(vlSelfRef.pll_top__DOT__lf_inst__DOT__integrator),32);
        bufp->chgIData(oldp+9,((vlSelfRef.pll_top__DOT__lf_inst__DOT____VdfgRegularize_hbae78005_0_0 
                                << (IData)(vlSelfRef.pll_top__DOT__dynamic_kp))),32);
        bufp->chgIData(oldp+10,((vlSelfRef.pll_top__DOT__lf_inst__DOT____VdfgRegularize_hbae78005_0_0 
                                 << (IData)(vlSelfRef.pll_top__DOT__dynamic_ki))),32);
        bufp->chgIData(oldp+11,(vlSelfRef.pll_top__DOT__lf_inst__DOT__next_integrator),32);
        bufp->chgCData(oldp+12,(vlSelfRef.pll_top__DOT__lf_inst__DOT__zero_error_count),5);
        bufp->chgCData(oldp+13,(vlSelfRef.pll_top__DOT__pfd_inst__DOT__ref_sync),3);
        bufp->chgCData(oldp+14,(vlSelfRef.pll_top__DOT__pfd_inst__DOT__fb_sync),3);
        bufp->chgBit(oldp+15,((1U == (3U & ((IData)(vlSelfRef.pll_top__DOT__pfd_inst__DOT__ref_sync) 
                                            >> 1U)))));
        bufp->chgBit(oldp+16,((1U == (3U & ((IData)(vlSelfRef.pll_top__DOT__pfd_inst__DOT__fb_sync) 
                                            >> 1U)))));
        bufp->chgCData(oldp+17,(vlSelfRef.pll_top__DOT__pfd_inst__DOT__state),2);
    }
    bufp->chgBit(oldp+18,(vlSelfRef.sys_clk));
    bufp->chgBit(oldp+19,(vlSelfRef.rst_n));
    bufp->chgBit(oldp+20,(vlSelfRef.ref_clk));
    bufp->chgIData(oldp+21,(vlSelfRef.div_val),32);
    bufp->chgIData(oldp+22,(vlSelfRef.initial_freq),32);
    bufp->chgBit(oldp+23,(vlSelfRef.pll_out));
    bufp->chgBit(oldp+24,(vlSelfRef.lock_detect));
    bufp->chgIData(oldp+25,(vlSelfRef.debug_dco_word),32);
    bufp->chgBit(oldp+26,(vlSelfRef.pll_top__DOT__fb_clk_internal));
    bufp->chgIData(oldp+27,(vlSelfRef.pll_top__DOT__div_inst__DOT__counter),32);
}

void Vpll_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpll_top___024root__trace_cleanup\n"); );
    // Body
    Vpll_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpll_top___024root*>(voidSelf);
    Vpll_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
