// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmux41_2bit.h for the primary calling header

#include "Vmux41_2bit__pch.h"
#include "Vmux41_2bit___024root.h"

VL_ATTR_COLD void Vmux41_2bit___024root___eval_static(Vmux41_2bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmux41_2bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux41_2bit___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vmux41_2bit___024root___eval_initial__TOP(Vmux41_2bit___024root* vlSelf);

VL_ATTR_COLD void Vmux41_2bit___024root___eval_initial(Vmux41_2bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmux41_2bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux41_2bit___024root___eval_initial\n"); );
    // Body
    Vmux41_2bit___024root___eval_initial__TOP(vlSelf);
}

VL_ATTR_COLD void Vmux41_2bit___024root___eval_initial__TOP(Vmux41_2bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmux41_2bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux41_2bit___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->mux41_2bit__DOT__i0__DOT__i0__DOT__key_list[0U] = 3U;
    vlSelf->mux41_2bit__DOT__i0__DOT__i0__DOT__key_list[1U] = 2U;
    vlSelf->mux41_2bit__DOT__i0__DOT__i0__DOT__key_list[2U] = 1U;
    vlSelf->mux41_2bit__DOT__i0__DOT__i0__DOT__key_list[3U] = 0U;
}

VL_ATTR_COLD void Vmux41_2bit___024root___eval_final(Vmux41_2bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmux41_2bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux41_2bit___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmux41_2bit___024root___dump_triggers__stl(Vmux41_2bit___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vmux41_2bit___024root___eval_phase__stl(Vmux41_2bit___024root* vlSelf);

VL_ATTR_COLD void Vmux41_2bit___024root___eval_settle(Vmux41_2bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmux41_2bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux41_2bit___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vmux41_2bit___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("mux41_2bit.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vmux41_2bit___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmux41_2bit___024root___dump_triggers__stl(Vmux41_2bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmux41_2bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux41_2bit___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vmux41_2bit___024root___ico_sequent__TOP__0(Vmux41_2bit___024root* vlSelf);

VL_ATTR_COLD void Vmux41_2bit___024root___eval_stl(Vmux41_2bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmux41_2bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux41_2bit___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vmux41_2bit___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vmux41_2bit___024root___eval_triggers__stl(Vmux41_2bit___024root* vlSelf);

VL_ATTR_COLD bool Vmux41_2bit___024root___eval_phase__stl(Vmux41_2bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmux41_2bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux41_2bit___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vmux41_2bit___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vmux41_2bit___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmux41_2bit___024root___dump_triggers__ico(Vmux41_2bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmux41_2bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux41_2bit___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ vlSelf->__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmux41_2bit___024root___dump_triggers__act(Vmux41_2bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmux41_2bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux41_2bit___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmux41_2bit___024root___dump_triggers__nba(Vmux41_2bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmux41_2bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux41_2bit___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vmux41_2bit___024root___ctor_var_reset(Vmux41_2bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmux41_2bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux41_2bit___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->a = VL_RAND_RESET_I(2);
    vlSelf->b = VL_RAND_RESET_I(2);
    vlSelf->c = VL_RAND_RESET_I(2);
    vlSelf->d = VL_RAND_RESET_I(2);
    vlSelf->s = VL_RAND_RESET_I(2);
    vlSelf->y = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->mux41_2bit__DOT__i0__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->mux41_2bit__DOT__i0__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(2);
    }
}
