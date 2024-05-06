// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmux41_2bit.h for the primary calling header

#ifndef VERILATED_VMUX41_2BIT___024ROOT_H_
#define VERILATED_VMUX41_2BIT___024ROOT_H_  // guard

#include "verilated.h"


class Vmux41_2bit__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vmux41_2bit___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(a,1,0);
    VL_IN8(b,1,0);
    VL_IN8(c,1,0);
    VL_IN8(d,1,0);
    VL_IN8(s,1,0);
    VL_OUT8(y,1,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*1:0*/, 4> mux41_2bit__DOT__i0__DOT__i0__DOT__key_list;
    VlUnpacked<CData/*1:0*/, 4> mux41_2bit__DOT__i0__DOT__i0__DOT__data_list;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vmux41_2bit__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmux41_2bit___024root(Vmux41_2bit__Syms* symsp, const char* v__name);
    ~Vmux41_2bit___024root();
    VL_UNCOPYABLE(Vmux41_2bit___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
