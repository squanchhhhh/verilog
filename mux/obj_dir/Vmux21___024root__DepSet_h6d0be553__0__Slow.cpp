// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmux21.h for the primary calling header

#include "Vmux21__pch.h"
#include "Vmux21___024root.h"

VL_ATTR_COLD void Vmux21___024root___eval_static(Vmux21___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmux21__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux21___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vmux21___024root___eval_initial__TOP(Vmux21___024root* vlSelf);

VL_ATTR_COLD void Vmux21___024root___eval_initial(Vmux21___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmux21__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux21___024root___eval_initial\n"); );
    // Body
    Vmux21___024root___eval_initial__TOP(vlSelf);
}

VL_ATTR_COLD void Vmux21___024root___eval_initial__TOP(Vmux21___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmux21__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux21___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->mux21__DOT__i0__DOT__i0__DOT__key_list[0U] = 1U;
    vlSelf->mux21__DOT__i0__DOT__i0__DOT__key_list[1U] = 0U;
}

VL_ATTR_COLD void Vmux21___024root___eval_final(Vmux21___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmux21__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux21___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmux21___024root___dump_triggers__stl(Vmux21___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vmux21___024root___eval_phase__stl(Vmux21___024root* vlSelf);

VL_ATTR_COLD void Vmux21___024root___eval_settle(Vmux21___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmux21__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux21___024root___eval_settle\n"); );
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
            Vmux21___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("mux21.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vmux21___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmux21___024root___dump_triggers__stl(Vmux21___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmux21__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux21___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vmux21___024root___ico_sequent__TOP__0(Vmux21___024root* vlSelf);

VL_ATTR_COLD void Vmux21___024root___eval_stl(Vmux21___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmux21__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux21___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vmux21___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vmux21___024root___eval_triggers__stl(Vmux21___024root* vlSelf);

VL_ATTR_COLD bool Vmux21___024root___eval_phase__stl(Vmux21___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmux21__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux21___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vmux21___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vmux21___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmux21___024root___dump_triggers__ico(Vmux21___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmux21__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux21___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void Vmux21___024root___dump_triggers__act(Vmux21___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmux21__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux21___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmux21___024root___dump_triggers__nba(Vmux21___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmux21__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux21___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vmux21___024root___ctor_var_reset(Vmux21___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmux21__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux21___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->a = VL_RAND_RESET_I(1);
    vlSelf->b = VL_RAND_RESET_I(1);
    vlSelf->s = VL_RAND_RESET_I(1);
    vlSelf->y = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->mux21__DOT__i0__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->mux21__DOT__i0__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(1);
    }
}
