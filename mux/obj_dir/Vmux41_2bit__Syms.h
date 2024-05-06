// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VMUX41_2BIT__SYMS_H_
#define VERILATED_VMUX41_2BIT__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vmux41_2bit.h"

// INCLUDE MODULE CLASSES
#include "Vmux41_2bit___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vmux41_2bit__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vmux41_2bit* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vmux41_2bit___024root          TOP;

    // CONSTRUCTORS
    Vmux41_2bit__Syms(VerilatedContext* contextp, const char* namep, Vmux41_2bit* modelp);
    ~Vmux41_2bit__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
