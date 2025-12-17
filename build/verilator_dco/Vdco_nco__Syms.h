// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VDCO_NCO__SYMS_H_
#define VERILATED_VDCO_NCO__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vdco_nco.h"

// INCLUDE MODULE CLASSES
#include "Vdco_nco___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vdco_nco__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vdco_nco* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vdco_nco___024root             TOP;

    // CONSTRUCTORS
    Vdco_nco__Syms(VerilatedContext* contextp, const char* namep, Vdco_nco* modelp);
    ~Vdco_nco__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
