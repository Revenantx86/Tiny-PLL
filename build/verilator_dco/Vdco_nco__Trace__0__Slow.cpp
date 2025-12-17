// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdco_nco__Syms.h"


VL_ATTR_COLD void Vdco_nco___024root__trace_init_sub__TOP__0(Vdco_nco___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdco_nco___024root__trace_init_sub__TOP__0\n"); );
    Vdco_nco__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->pushPrefix("$rootio", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"sys_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"tuning_word",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+4,0,"dco_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("dco_nco", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+6,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1,0,"sys_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"tuning_word",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+4,0,"dco_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"accumulator",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vdco_nco___024root__trace_init_top(Vdco_nco___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdco_nco___024root__trace_init_top\n"); );
    Vdco_nco__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vdco_nco___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vdco_nco___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vdco_nco___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vdco_nco___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vdco_nco___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vdco_nco___024root__trace_register(Vdco_nco___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdco_nco___024root__trace_register\n"); );
    Vdco_nco__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vdco_nco___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vdco_nco___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vdco_nco___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vdco_nco___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vdco_nco___024root__trace_const_0_sub_0(Vdco_nco___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vdco_nco___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdco_nco___024root__trace_const_0\n"); );
    // Body
    Vdco_nco___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdco_nco___024root*>(voidSelf);
    Vdco_nco__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vdco_nco___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vdco_nco___024root__trace_const_0_sub_0(Vdco_nco___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdco_nco___024root__trace_const_0_sub_0\n"); );
    Vdco_nco__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+6,(0x00000020U),32);
}

VL_ATTR_COLD void Vdco_nco___024root__trace_full_0_sub_0(Vdco_nco___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vdco_nco___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdco_nco___024root__trace_full_0\n"); );
    // Body
    Vdco_nco___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdco_nco___024root*>(voidSelf);
    Vdco_nco__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vdco_nco___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vdco_nco___024root__trace_full_0_sub_0(Vdco_nco___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdco_nco___024root__trace_full_0_sub_0\n"); );
    Vdco_nco__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullBit(oldp+1,(vlSelfRef.sys_clk));
    bufp->fullBit(oldp+2,(vlSelfRef.rst_n));
    bufp->fullIData(oldp+3,(vlSelfRef.tuning_word),32);
    bufp->fullBit(oldp+4,(vlSelfRef.dco_out));
    bufp->fullIData(oldp+5,(vlSelfRef.dco_nco__DOT__accumulator),32);
}
