// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vpfd.h for the primary calling header

#ifndef VERILATED_VPFD___024ROOT_H_
#define VERILATED_VPFD___024ROOT_H_  // guard

#include "verilated.h"


class Vpfd__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vpfd___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(sys_clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_IN8(ref_clk,0,0);
    VL_IN8(fb_clk,0,0);
    VL_OUT8(error_out,3,0);
    VL_OUT8(sample_en,0,0);
    CData/*2:0*/ pfd__DOT__ref_sync;
    CData/*2:0*/ pfd__DOT__fb_sync;
    CData/*1:0*/ pfd__DOT__state;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__sys_clk__0;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vpfd__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vpfd___024root(Vpfd__Syms* symsp, const char* v__name);
    ~Vpfd___024root();
    VL_UNCOPYABLE(Vpfd___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
