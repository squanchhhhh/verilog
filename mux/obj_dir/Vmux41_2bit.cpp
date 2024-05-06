// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vmux41_2bit__pch.h"

//============================================================
// Constructors

Vmux41_2bit::Vmux41_2bit(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vmux41_2bit__Syms(contextp(), _vcname__, this)}
    , a{vlSymsp->TOP.a}
    , b{vlSymsp->TOP.b}
    , c{vlSymsp->TOP.c}
    , d{vlSymsp->TOP.d}
    , s{vlSymsp->TOP.s}
    , y{vlSymsp->TOP.y}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vmux41_2bit::Vmux41_2bit(const char* _vcname__)
    : Vmux41_2bit(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vmux41_2bit::~Vmux41_2bit() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vmux41_2bit___024root___eval_debug_assertions(Vmux41_2bit___024root* vlSelf);
#endif  // VL_DEBUG
void Vmux41_2bit___024root___eval_static(Vmux41_2bit___024root* vlSelf);
void Vmux41_2bit___024root___eval_initial(Vmux41_2bit___024root* vlSelf);
void Vmux41_2bit___024root___eval_settle(Vmux41_2bit___024root* vlSelf);
void Vmux41_2bit___024root___eval(Vmux41_2bit___024root* vlSelf);

void Vmux41_2bit::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vmux41_2bit::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vmux41_2bit___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vmux41_2bit___024root___eval_static(&(vlSymsp->TOP));
        Vmux41_2bit___024root___eval_initial(&(vlSymsp->TOP));
        Vmux41_2bit___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vmux41_2bit___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vmux41_2bit::eventsPending() { return false; }

uint64_t Vmux41_2bit::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vmux41_2bit::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vmux41_2bit___024root___eval_final(Vmux41_2bit___024root* vlSelf);

VL_ATTR_COLD void Vmux41_2bit::final() {
    Vmux41_2bit___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vmux41_2bit::hierName() const { return vlSymsp->name(); }
const char* Vmux41_2bit::modelName() const { return "Vmux41_2bit"; }
unsigned Vmux41_2bit::threads() const { return 1; }
void Vmux41_2bit::prepareClone() const { contextp()->prepareClone(); }
void Vmux41_2bit::atClone() const {
    contextp()->threadPoolpOnClone();
}
