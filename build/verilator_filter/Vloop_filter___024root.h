// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vloop_filter.h for the primary calling header

#ifndef VERILATED_VLOOP_FILTER___024ROOT_H_
#define VERILATED_VLOOP_FILTER___024ROOT_H_  // guard

#include "verilated.h"


class Vloop_filter__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vloop_filter___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_IN8(sample_en,0,0);
    VL_IN8(error_in,3,0);
    VL_IN8(kp_shift,4,0);
    VL_IN8(ki_shift,4,0);
    VL_OUT8(lock_detect,0,0);
    CData/*4:0*/ loop_filter__DOT__zero_error_count;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n__0;
    VL_IN(initial_freq,31,0);
    VL_OUT(dco_ctrl,31,0);
    IData/*31:0*/ loop_filter__DOT__integrator;
    IData/*31:0*/ loop_filter__DOT__next_integrator;
    IData/*31:0*/ loop_filter__DOT____VdfgRegularize_hbae78005_0_0;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vloop_filter__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vloop_filter___024root(Vloop_filter__Syms* symsp, const char* v__name);
    ~Vloop_filter___024root();
    VL_UNCOPYABLE(Vloop_filter___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
