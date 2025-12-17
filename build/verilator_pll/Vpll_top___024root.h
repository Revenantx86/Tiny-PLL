// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vpll_top.h for the primary calling header

#ifndef VERILATED_VPLL_TOP___024ROOT_H_
#define VERILATED_VPLL_TOP___024ROOT_H_  // guard

#include "verilated.h"


class Vpll_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vpll_top___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(sys_clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_OUT8(pll_out,0,0);
    VL_IN8(ref_clk,0,0);
    VL_OUT8(lock_detect,0,0);
    CData/*3:0*/ pll_top__DOT__pfd_error;
    CData/*0:0*/ pll_top__DOT__pfd_sample;
    CData/*0:0*/ pll_top__DOT__fb_clk_internal;
    CData/*0:0*/ pll_top__DOT__internal_lock;
    CData/*4:0*/ pll_top__DOT__dynamic_kp;
    CData/*4:0*/ pll_top__DOT__dynamic_ki;
    CData/*5:0*/ pll_top__DOT__unlock_timer;
    CData/*2:0*/ pll_top__DOT__pfd_inst__DOT__ref_sync;
    CData/*2:0*/ pll_top__DOT__pfd_inst__DOT__fb_sync;
    CData/*1:0*/ pll_top__DOT__pfd_inst__DOT__state;
    CData/*4:0*/ pll_top__DOT__lf_inst__DOT__zero_error_count;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__sys_clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__pll_out__0;
    VL_IN(div_val,31,0);
    VL_IN(initial_freq,31,0);
    VL_OUT(debug_dco_word,31,0);
    IData/*31:0*/ pll_top__DOT__dco_ctrl_word;
    IData/*31:0*/ pll_top__DOT__lf_inst__DOT__integrator;
    IData/*31:0*/ pll_top__DOT__lf_inst__DOT__next_integrator;
    IData/*31:0*/ pll_top__DOT__lf_inst__DOT____VdfgRegularize_hbae78005_0_0;
    IData/*31:0*/ pll_top__DOT__dco_inst__DOT__accumulator;
    IData/*31:0*/ pll_top__DOT__div_inst__DOT__counter;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vpll_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vpll_top___024root(Vpll_top__Syms* symsp, const char* v__name);
    ~Vpll_top___024root();
    VL_UNCOPYABLE(Vpll_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
