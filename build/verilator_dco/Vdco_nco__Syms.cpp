// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vdco_nco__pch.h"
#include "Vdco_nco.h"
#include "Vdco_nco___024root.h"

// FUNCTIONS
Vdco_nco__Syms::~Vdco_nco__Syms()
{
}

Vdco_nco__Syms::Vdco_nco__Syms(VerilatedContext* contextp, const char* namep, Vdco_nco* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Check resources
    Verilated::stackCheck(188);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
