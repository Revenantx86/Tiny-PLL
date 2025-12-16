// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdco_nco.h for the primary calling header

#ifndef VERILATED_VDCO_NCO___024ROOT_H_
#define VERILATED_VDCO_NCO___024ROOT_H_  // guard

#include "verilated.h"


class Vdco_nco__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdco_nco___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(sys_clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_OUT8(dco_out,0,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__sys_clk__0;
    VL_IN(tuning_word,31,0);
    IData/*31:0*/ dco_nco__DOT__accumulator;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vdco_nco__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vdco_nco___024root(Vdco_nco__Syms* symsp, const char* v__name);
    ~Vdco_nco___024root();
    VL_UNCOPYABLE(Vdco_nco___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
