// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vchain.h for the primary calling header

#ifndef VERILATED_VCHAIN___024ROOT_H_
#define VERILATED_VCHAIN___024ROOT_H_  // guard

#include "verilated.h"


class Vchain__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vchain___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(sys_clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_OUT8(dco_out,0,0);
    VL_IN8(sample_en,0,0);
    VL_IN8(error_in,3,0);
    VL_IN8(kp_shift,4,0);
    VL_IN8(ki_shift,4,0);
    VL_OUT8(div_out,0,0);
    VL_OUT8(lock_detect,0,0);
    CData/*4:0*/ chain__DOT__lf_inst__DOT__zero_error_count;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__sys_clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__dco_out__0;
    VL_IN(initial_freq,31,0);
    VL_IN(div_val,31,0);
    IData/*31:0*/ chain__DOT__filter_to_dco_word;
    IData/*31:0*/ chain__DOT__lf_inst__DOT__integrator;
    IData/*31:0*/ chain__DOT__lf_inst__DOT__next_integrator;
    IData/*31:0*/ chain__DOT__lf_inst__DOT____VdfgRegularize_hbae78005_0_0;
    IData/*31:0*/ chain__DOT__dco_inst__DOT__accumulator;
    IData/*31:0*/ chain__DOT__div_inst__DOT__counter;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vchain__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vchain___024root(Vchain__Syms* symsp, const char* v__name);
    ~Vchain___024root();
    VL_UNCOPYABLE(Vchain___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
