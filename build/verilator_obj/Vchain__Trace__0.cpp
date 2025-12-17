// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vchain__Syms.h"


void Vchain___024root__trace_chg_0_sub_0(Vchain___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vchain___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchain___024root__trace_chg_0\n"); );
    // Body
    Vchain___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vchain___024root*>(voidSelf);
    Vchain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vchain___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vchain___024root__trace_chg_0_sub_0(Vchain___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchain___024root__trace_chg_0_sub_0\n"); );
    Vchain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgIData(oldp+0,(vlSelfRef.chain__DOT__filter_to_dco_word),32);
        bufp->chgIData(oldp+1,(vlSelfRef.chain__DOT__dco_inst__DOT__accumulator),32);
        bufp->chgIData(oldp+2,(vlSelfRef.chain__DOT__lf_inst__DOT__integrator),32);
        bufp->chgCData(oldp+3,(vlSelfRef.chain__DOT__lf_inst__DOT__zero_error_count),5);
    }
    bufp->chgBit(oldp+4,(vlSelfRef.sys_clk));
    bufp->chgBit(oldp+5,(vlSelfRef.rst_n));
    bufp->chgBit(oldp+6,(vlSelfRef.sample_en));
    bufp->chgCData(oldp+7,(vlSelfRef.error_in),4);
    bufp->chgCData(oldp+8,(vlSelfRef.kp_shift),5);
    bufp->chgCData(oldp+9,(vlSelfRef.ki_shift),5);
    bufp->chgIData(oldp+10,(vlSelfRef.initial_freq),32);
    bufp->chgIData(oldp+11,(vlSelfRef.div_val),32);
    bufp->chgBit(oldp+12,(vlSelfRef.dco_out));
    bufp->chgBit(oldp+13,(vlSelfRef.div_out));
    bufp->chgBit(oldp+14,(vlSelfRef.lock_detect));
    bufp->chgIData(oldp+15,(vlSelfRef.chain__DOT__div_inst__DOT__counter),32);
    bufp->chgIData(oldp+16,((vlSelfRef.chain__DOT__lf_inst__DOT____VdfgRegularize_hbae78005_0_0 
                             << (IData)(vlSelfRef.kp_shift))),32);
    bufp->chgIData(oldp+17,((vlSelfRef.chain__DOT__lf_inst__DOT____VdfgRegularize_hbae78005_0_0 
                             << (IData)(vlSelfRef.ki_shift))),32);
    bufp->chgIData(oldp+18,(vlSelfRef.chain__DOT__lf_inst__DOT__next_integrator),32);
}

void Vchain___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchain___024root__trace_cleanup\n"); );
    // Body
    Vchain___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vchain___024root*>(voidSelf);
    Vchain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
