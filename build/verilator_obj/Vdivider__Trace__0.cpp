// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdivider__Syms.h"


void Vdivider___024root__trace_chg_0_sub_0(Vdivider___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vdivider___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdivider___024root__trace_chg_0\n"); );
    // Body
    Vdivider___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdivider___024root*>(voidSelf);
    Vdivider__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vdivider___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vdivider___024root__trace_chg_0_sub_0(Vdivider___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdivider___024root__trace_chg_0_sub_0\n"); );
    Vdivider__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    bufp->chgBit(oldp+0,(vlSelfRef.clk_in));
    bufp->chgBit(oldp+1,(vlSelfRef.rst_n));
    bufp->chgIData(oldp+2,(vlSelfRef.div_val),32);
    bufp->chgBit(oldp+3,(vlSelfRef.clk_out));
    bufp->chgIData(oldp+4,(vlSelfRef.divider__DOT__counter),32);
}

void Vdivider___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdivider___024root__trace_cleanup\n"); );
    // Locals
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    Vdivider___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdivider___024root*>(voidSelf);
    Vdivider__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
