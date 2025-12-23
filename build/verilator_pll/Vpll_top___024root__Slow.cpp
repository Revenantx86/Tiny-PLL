// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpll_top.h for the primary calling header

#include "Vpll_top__pch.h"
#include "Vpll_top__Syms.h"
#include "Vpll_top___024root.h"

void Vpll_top___024root___ctor_var_reset(Vpll_top___024root* vlSelf);

Vpll_top___024root::Vpll_top___024root(Vpll_top__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vpll_top___024root___ctor_var_reset(this);
}

void Vpll_top___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vpll_top___024root::~Vpll_top___024root() {
}
