// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmux41_2bit.h for the primary calling header

#include "Vmux41_2bit__pch.h"
#include "Vmux41_2bit__Syms.h"
#include "Vmux41_2bit___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmux41_2bit___024root___dump_triggers__stl(Vmux41_2bit___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vmux41_2bit___024root___eval_triggers__stl(Vmux41_2bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmux41_2bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux41_2bit___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmux41_2bit___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
