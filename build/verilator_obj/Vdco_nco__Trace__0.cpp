// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdco_nco__Syms.h"


void Vdco_nco___024root__trace_chg_0_sub_0(Vdco_nco___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vdco_nco___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdco_nco___024root__trace_chg_0\n"); );
    // Body
    Vdco_nco___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdco_nco___024root*>(voidSelf);
    Vdco_nco__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vdco_nco___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vdco_nco___024root__trace_chg_0_sub_0(Vdco_nco___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdco_nco___024root__trace_chg_0_sub_0\n"); );
    Vdco_nco__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    bufp->chgBit(oldp+0,(vlSelfRef.sys_clk));
    bufp->chgBit(oldp+1,(vlSelfRef.rst_n));
    bufp->chgIData(oldp+2,(vlSelfRef.tuning_word),32);
    bufp->chgBit(oldp+3,(vlSelfRef.dco_out));
    bufp->chgIData(oldp+4,(vlSelfRef.dco_nco__DOT__accumulator),32);
}

void Vdco_nco___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdco_nco___024root__trace_cleanup\n"); );
    // Locals
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    Vdco_nco___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdco_nco___024root*>(voidSelf);
    Vdco_nco__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
