// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vpfd__Syms.h"


void Vpfd___024root__trace_chg_0_sub_0(Vpfd___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vpfd___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpfd___024root__trace_chg_0\n"); );
    // Body
    Vpfd___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpfd___024root*>(voidSelf);
    Vpfd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vpfd___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vpfd___024root__trace_chg_0_sub_0(Vpfd___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpfd___024root__trace_chg_0_sub_0\n"); );
    Vpfd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgCData(oldp+0,(vlSelfRef.pfd__DOT__ref_sync),3);
        bufp->chgCData(oldp+1,(vlSelfRef.pfd__DOT__fb_sync),3);
        bufp->chgBit(oldp+2,((1U == (3U & ((IData)(vlSelfRef.pfd__DOT__ref_sync) 
                                           >> 1U)))));
        bufp->chgBit(oldp+3,((1U == (3U & ((IData)(vlSelfRef.pfd__DOT__fb_sync) 
                                           >> 1U)))));
        bufp->chgCData(oldp+4,(vlSelfRef.pfd__DOT__state),2);
    }
    bufp->chgBit(oldp+5,(vlSelfRef.sys_clk));
    bufp->chgBit(oldp+6,(vlSelfRef.rst_n));
    bufp->chgBit(oldp+7,(vlSelfRef.ref_clk));
    bufp->chgBit(oldp+8,(vlSelfRef.fb_clk));
    bufp->chgCData(oldp+9,(vlSelfRef.error_out),4);
    bufp->chgBit(oldp+10,(vlSelfRef.sample_en));
}

void Vpfd___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpfd___024root__trace_cleanup\n"); );
    // Body
    Vpfd___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpfd___024root*>(voidSelf);
    Vpfd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
