// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vchain.h for the primary calling header

#include "Vchain__pch.h"

void Vchain___024root___ctor_var_reset(Vchain___024root* vlSelf);

Vchain___024root::Vchain___024root(Vchain__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vchain___024root___ctor_var_reset(this);
}

void Vchain___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vchain___024root::~Vchain___024root() {
}
