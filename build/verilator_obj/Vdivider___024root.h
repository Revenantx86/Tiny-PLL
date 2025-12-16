// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdivider.h for the primary calling header

#ifndef VERILATED_VDIVIDER___024ROOT_H_
#define VERILATED_VDIVIDER___024ROOT_H_  // guard

#include "verilated.h"


class Vdivider__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdivider___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk_in,0,0);
    VL_IN8(rst_n,0,0);
    VL_OUT8(clk_out,0,0);
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk_in__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n__0;
    VL_IN(div_val,31,0);
    IData/*31:0*/ divider__DOT__counter;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vdivider__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vdivider___024root(Vdivider__Syms* symsp, const char* v__name);
    ~Vdivider___024root();
    VL_UNCOPYABLE(Vdivider___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
