// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vloop_filter__Syms.h"


void Vloop_filter___024root__trace_chg_0_sub_0(Vloop_filter___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vloop_filter___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vloop_filter___024root__trace_chg_0\n"); );
    // Body
    Vloop_filter___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vloop_filter___024root*>(voidSelf);
    Vloop_filter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vloop_filter___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vloop_filter___024root__trace_chg_0_sub_0(Vloop_filter___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vloop_filter___024root__trace_chg_0_sub_0\n"); );
    Vloop_filter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    bufp->chgBit(oldp+0,(vlSelfRef.clk));
    bufp->chgBit(oldp+1,(vlSelfRef.rst_n));
    bufp->chgBit(oldp+2,(vlSelfRef.sample_en));
    bufp->chgCData(oldp+3,(vlSelfRef.error_in),4);
    bufp->chgCData(oldp+4,(vlSelfRef.kp_shift),5);
    bufp->chgCData(oldp+5,(vlSelfRef.ki_shift),5);
    bufp->chgIData(oldp+6,(vlSelfRef.initial_freq),32);
    bufp->chgIData(oldp+7,(vlSelfRef.dco_ctrl),32);
    bufp->chgBit(oldp+8,(vlSelfRef.lock_detect));
    bufp->chgIData(oldp+9,(vlSelfRef.loop_filter__DOT__integrator),32);
    bufp->chgIData(oldp+10,((vlSelfRef.loop_filter__DOT____VdfgRegularize_hbae78005_0_0 
                             << (IData)(vlSelfRef.kp_shift))),32);
    bufp->chgIData(oldp+11,((vlSelfRef.loop_filter__DOT____VdfgRegularize_hbae78005_0_0 
                             << (IData)(vlSelfRef.ki_shift))),32);
    bufp->chgIData(oldp+12,(vlSelfRef.loop_filter__DOT__next_integrator),32);
    bufp->chgCData(oldp+13,(vlSelfRef.loop_filter__DOT__zero_error_count),5);
}

void Vloop_filter___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vloop_filter___024root__trace_cleanup\n"); );
    // Locals
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    Vloop_filter___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vloop_filter___024root*>(voidSelf);
    Vloop_filter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
