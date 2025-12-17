// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vpfd__Syms.h"


VL_ATTR_COLD void Vpfd___024root__trace_init_sub__TOP__0(Vpfd___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpfd___024root__trace_init_sub__TOP__0\n"); );
    Vpfd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->pushPrefix("$rootio", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+6,0,"sys_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"ref_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"fb_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"error_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+11,0,"sample_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("pfd", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+6,0,"sys_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"ref_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"fb_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"error_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+11,0,"sample_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"ref_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+2,0,"fb_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+3,0,"ref_rise",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"fb_rise",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+12,0,"STATE_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+13,0,"STATE_UP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+14,0,"STATE_DOWN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+5,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vpfd___024root__trace_init_top(Vpfd___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpfd___024root__trace_init_top\n"); );
    Vpfd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vpfd___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vpfd___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vpfd___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vpfd___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vpfd___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vpfd___024root__trace_register(Vpfd___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpfd___024root__trace_register\n"); );
    Vpfd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vpfd___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vpfd___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vpfd___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vpfd___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vpfd___024root__trace_const_0_sub_0(Vpfd___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vpfd___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpfd___024root__trace_const_0\n"); );
    // Body
    Vpfd___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpfd___024root*>(voidSelf);
    Vpfd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vpfd___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vpfd___024root__trace_const_0_sub_0(Vpfd___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpfd___024root__trace_const_0_sub_0\n"); );
    Vpfd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullCData(oldp+12,(0U),2);
    bufp->fullCData(oldp+13,(1U),2);
    bufp->fullCData(oldp+14,(2U),2);
}

VL_ATTR_COLD void Vpfd___024root__trace_full_0_sub_0(Vpfd___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vpfd___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpfd___024root__trace_full_0\n"); );
    // Body
    Vpfd___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpfd___024root*>(voidSelf);
    Vpfd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vpfd___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vpfd___024root__trace_full_0_sub_0(Vpfd___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpfd___024root__trace_full_0_sub_0\n"); );
    Vpfd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullCData(oldp+1,(vlSelfRef.pfd__DOT__ref_sync),3);
    bufp->fullCData(oldp+2,(vlSelfRef.pfd__DOT__fb_sync),3);
    bufp->fullBit(oldp+3,((1U == (3U & ((IData)(vlSelfRef.pfd__DOT__ref_sync) 
                                        >> 1U)))));
    bufp->fullBit(oldp+4,((1U == (3U & ((IData)(vlSelfRef.pfd__DOT__fb_sync) 
                                        >> 1U)))));
    bufp->fullCData(oldp+5,(vlSelfRef.pfd__DOT__state),2);
    bufp->fullBit(oldp+6,(vlSelfRef.sys_clk));
    bufp->fullBit(oldp+7,(vlSelfRef.rst_n));
    bufp->fullBit(oldp+8,(vlSelfRef.ref_clk));
    bufp->fullBit(oldp+9,(vlSelfRef.fb_clk));
    bufp->fullCData(oldp+10,(vlSelfRef.error_out),4);
    bufp->fullBit(oldp+11,(vlSelfRef.sample_en));
}
