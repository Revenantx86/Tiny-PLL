// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vpll_top__Syms.h"


VL_ATTR_COLD void Vpll_top___024root__trace_init_sub__TOP__0(Vpll_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vpll_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpll_top___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+19,0,"sys_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"ref_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+22,0,"div_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+23,0,"initial_freq",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+24,0,"pll_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"lock_detect",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+26,0,"debug_dco_word",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("pll_top", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+19,0,"sys_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"ref_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+22,0,"div_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+23,0,"initial_freq",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+24,0,"pll_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"lock_detect",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+26,0,"debug_dco_word",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"pfd_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+2,0,"pfd_sample",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"dco_ctrl_word",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+24,0,"dco_clk_raw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"fb_clk_internal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"internal_lock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"dynamic_kp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+6,0,"dynamic_ki",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+7,0,"unlock_timer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->pushPrefix("dco_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+19,0,"sys_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"tuning_word",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+24,0,"dco_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+8,0,"accumulator",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("div_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+24,0,"clk_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+22,0,"div_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+27,0,"clk_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+28,0,"counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("lf_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+19,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"sample_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"error_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+5,0,"kp_shift",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+6,0,"ki_shift",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+23,0,"initial_freq",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"dco_ctrl",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+4,0,"lock_detect",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9,0,"integrator",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+10,0,"prop_term",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+11,0,"integ_term",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+12,0,"next_integrator",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,0,"zero_error_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->pushPrefix("pfd_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+19,0,"sys_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"ref_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"fb_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"error_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+2,0,"sample_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+14,0,"ref_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+15,0,"fb_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+16,0,"ref_rise",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"fb_rise",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+29,0,"STATE_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+30,0,"STATE_UP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+31,0,"STATE_DOWN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+18,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vpll_top___024root__trace_init_top(Vpll_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vpll_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpll_top___024root__trace_init_top\n"); );
    // Body
    Vpll_top___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vpll_top___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vpll_top___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vpll_top___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vpll_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vpll_top___024root__trace_register(Vpll_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vpll_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpll_top___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vpll_top___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vpll_top___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vpll_top___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vpll_top___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vpll_top___024root__trace_const_0_sub_0(Vpll_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vpll_top___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpll_top___024root__trace_const_0\n"); );
    // Init
    Vpll_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpll_top___024root*>(voidSelf);
    Vpll_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vpll_top___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vpll_top___024root__trace_const_0_sub_0(Vpll_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vpll_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpll_top___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+29,(0U),2);
    bufp->fullCData(oldp+30,(1U),2);
    bufp->fullCData(oldp+31,(2U),2);
}

VL_ATTR_COLD void Vpll_top___024root__trace_full_0_sub_0(Vpll_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vpll_top___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpll_top___024root__trace_full_0\n"); );
    // Init
    Vpll_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpll_top___024root*>(voidSelf);
    Vpll_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vpll_top___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vpll_top___024root__trace_full_0_sub_0(Vpll_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vpll_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpll_top___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->pll_top__DOT__pfd_error),4);
    bufp->fullBit(oldp+2,(vlSelf->pll_top__DOT__pfd_sample));
    bufp->fullIData(oldp+3,(vlSelf->pll_top__DOT__dco_ctrl_word),32);
    bufp->fullBit(oldp+4,(vlSelf->pll_top__DOT__internal_lock));
    bufp->fullCData(oldp+5,(vlSelf->pll_top__DOT__dynamic_kp),5);
    bufp->fullCData(oldp+6,(vlSelf->pll_top__DOT__dynamic_ki),5);
    bufp->fullCData(oldp+7,(vlSelf->pll_top__DOT__unlock_timer),6);
    bufp->fullIData(oldp+8,(vlSelf->pll_top__DOT__dco_inst__DOT__accumulator),32);
    bufp->fullIData(oldp+9,(vlSelf->pll_top__DOT__lf_inst__DOT__integrator),32);
    bufp->fullIData(oldp+10,((vlSelf->pll_top__DOT__lf_inst__DOT____VdfgTmp_h7d8f5e2e__0 
                              << (IData)(vlSelf->pll_top__DOT__dynamic_kp))),32);
    bufp->fullIData(oldp+11,((vlSelf->pll_top__DOT__lf_inst__DOT____VdfgTmp_h7d8f5e2e__0 
                              << (IData)(vlSelf->pll_top__DOT__dynamic_ki))),32);
    bufp->fullIData(oldp+12,(vlSelf->pll_top__DOT__lf_inst__DOT__next_integrator),32);
    bufp->fullCData(oldp+13,(vlSelf->pll_top__DOT__lf_inst__DOT__zero_error_count),5);
    bufp->fullCData(oldp+14,(vlSelf->pll_top__DOT__pfd_inst__DOT__ref_sync),3);
    bufp->fullCData(oldp+15,(vlSelf->pll_top__DOT__pfd_inst__DOT__fb_sync),3);
    bufp->fullBit(oldp+16,((1U == (3U & ((IData)(vlSelf->pll_top__DOT__pfd_inst__DOT__ref_sync) 
                                         >> 1U)))));
    bufp->fullBit(oldp+17,((1U == (3U & ((IData)(vlSelf->pll_top__DOT__pfd_inst__DOT__fb_sync) 
                                         >> 1U)))));
    bufp->fullCData(oldp+18,(vlSelf->pll_top__DOT__pfd_inst__DOT__state),2);
    bufp->fullBit(oldp+19,(vlSelf->sys_clk));
    bufp->fullBit(oldp+20,(vlSelf->rst_n));
    bufp->fullBit(oldp+21,(vlSelf->ref_clk));
    bufp->fullIData(oldp+22,(vlSelf->div_val),32);
    bufp->fullIData(oldp+23,(vlSelf->initial_freq),32);
    bufp->fullBit(oldp+24,(vlSelf->pll_out));
    bufp->fullBit(oldp+25,(vlSelf->lock_detect));
    bufp->fullIData(oldp+26,(vlSelf->debug_dco_word),32);
    bufp->fullBit(oldp+27,(vlSelf->pll_top__DOT__fb_clk_internal));
    bufp->fullIData(oldp+28,(vlSelf->pll_top__DOT__div_inst__DOT__counter),32);
}
