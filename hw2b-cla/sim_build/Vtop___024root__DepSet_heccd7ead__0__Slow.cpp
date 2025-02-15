// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/MYSTUFF/hw2b-cla/cla.sv", 73, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtop___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtop___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->a = VL_RAND_RESET_I(32);
    vlSelf->b = VL_RAND_RESET_I(32);
    vlSelf->cin = VL_RAND_RESET_I(1);
    vlSelf->sum = VL_RAND_RESET_I(32);
    vlSelf->cla__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->cla__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->cla__DOT__cin = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__sum = VL_RAND_RESET_I(32);
    vlSelf->cla__DOT__g = VL_RAND_RESET_I(32);
    vlSelf->cla__DOT__p = VL_RAND_RESET_I(32);
    vlSelf->cla__DOT__carry = VL_RAND_RESET_I(32);
    vlSelf->cla__DOT__gout = VL_RAND_RESET_I(4);
    vlSelf->cla__DOT__pout = VL_RAND_RESET_I(4);
    vlSelf->cla__DOT__c8 = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__c16 = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__c24 = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp8_low__DOT__gin = VL_RAND_RESET_I(8);
    vlSelf->cla__DOT__gp8_low__DOT__pin = VL_RAND_RESET_I(8);
    vlSelf->cla__DOT__gp8_low__DOT__cin = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp8_low__DOT__gout = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp8_low__DOT__pout = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp8_low__DOT__cout = VL_RAND_RESET_I(7);
    vlSelf->cla__DOT__gp8_low__DOT__g_lower = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp8_low__DOT__p_lower = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp8_low__DOT__g_upper = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp8_low__DOT__p_upper = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp8_low__DOT__c_mid = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp8_low__DOT__gp_segment_low__DOT__gin = VL_RAND_RESET_I(4);
    vlSelf->cla__DOT__gp8_low__DOT__gp_segment_low__DOT__pin = VL_RAND_RESET_I(4);
    vlSelf->cla__DOT__gp8_low__DOT__gp_segment_low__DOT__cin = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp8_low__DOT__gp_segment_low__DOT__gout = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp8_low__DOT__gp_segment_low__DOT__pout = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp8_low__DOT__gp_segment_low__DOT__cout = VL_RAND_RESET_I(3);
    vlSelf->cla__DOT__gp8_low__DOT__gp_segment_high__DOT__gin = VL_RAND_RESET_I(4);
    vlSelf->cla__DOT__gp8_low__DOT__gp_segment_high__DOT__pin = VL_RAND_RESET_I(4);
    vlSelf->cla__DOT__gp8_low__DOT__gp_segment_high__DOT__cin = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp8_low__DOT__gp_segment_high__DOT__gout = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp8_low__DOT__gp_segment_high__DOT__pout = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp8_low__DOT__gp_segment_high__DOT__cout = VL_RAND_RESET_I(3);
    vlSelf->cla__DOT__gp8_mid1__DOT__gin = VL_RAND_RESET_I(8);
    vlSelf->cla__DOT__gp8_mid1__DOT__pin = VL_RAND_RESET_I(8);
    vlSelf->cla__DOT__gp8_mid1__DOT__cin = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp8_mid1__DOT__gout = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp8_mid1__DOT__pout = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp8_mid1__DOT__cout = VL_RAND_RESET_I(7);
    vlSelf->cla__DOT__gp8_mid1__DOT__g_lower = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp8_mid1__DOT__p_lower = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp8_mid1__DOT__g_upper = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp8_mid1__DOT__p_upper = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp8_mid1__DOT__c_mid = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp8_mid1__DOT__gp_segment_low__DOT__gin = VL_RAND_RESET_I(4);
    vlSelf->cla__DOT__gp8_mid1__DOT__gp_segment_low__DOT__pin = VL_RAND_RESET_I(4);
    vlSelf->cla__DOT__gp8_mid1__DOT__gp_segment_low__DOT__cin = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp8_mid1__DOT__gp_segment_low__DOT__gout = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp8_mid1__DOT__gp_segment_low__DOT__pout = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp8_mid1__DOT__gp_segment_low__DOT__cout = VL_RAND_RESET_I(3);
    vlSelf->cla__DOT__gp8_mid1__DOT__gp_segment_high__DOT__gin = VL_RAND_RESET_I(4);
    vlSelf->cla__DOT__gp8_mid1__DOT__gp_segment_high__DOT__pin = VL_RAND_RESET_I(4);
    vlSelf->cla__DOT__gp8_mid1__DOT__gp_segment_high__DOT__cin = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp8_mid1__DOT__gp_segment_high__DOT__gout = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp8_mid1__DOT__gp_segment_high__DOT__pout = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp8_mid1__DOT__gp_segment_high__DOT__cout = VL_RAND_RESET_I(3);
    vlSelf->cla__DOT__gp8_mid2__DOT__gin = VL_RAND_RESET_I(8);
    vlSelf->cla__DOT__gp8_mid2__DOT__pin = VL_RAND_RESET_I(8);
    vlSelf->cla__DOT__gp8_mid2__DOT__cin = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp8_mid2__DOT__gout = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp8_mid2__DOT__pout = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp8_mid2__DOT__cout = VL_RAND_RESET_I(7);
    vlSelf->cla__DOT__gp8_mid2__DOT__g_lower = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp8_mid2__DOT__p_lower = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp8_mid2__DOT__g_upper = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp8_mid2__DOT__p_upper = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp8_mid2__DOT__c_mid = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp8_mid2__DOT__gp_segment_low__DOT__gin = VL_RAND_RESET_I(4);
    vlSelf->cla__DOT__gp8_mid2__DOT__gp_segment_low__DOT__pin = VL_RAND_RESET_I(4);
    vlSelf->cla__DOT__gp8_mid2__DOT__gp_segment_low__DOT__cin = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp8_mid2__DOT__gp_segment_low__DOT__gout = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp8_mid2__DOT__gp_segment_low__DOT__pout = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp8_mid2__DOT__gp_segment_low__DOT__cout = VL_RAND_RESET_I(3);
    vlSelf->cla__DOT__gp8_mid2__DOT__gp_segment_high__DOT__gin = VL_RAND_RESET_I(4);
    vlSelf->cla__DOT__gp8_mid2__DOT__gp_segment_high__DOT__pin = VL_RAND_RESET_I(4);
    vlSelf->cla__DOT__gp8_mid2__DOT__gp_segment_high__DOT__cin = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp8_mid2__DOT__gp_segment_high__DOT__gout = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp8_mid2__DOT__gp_segment_high__DOT__pout = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp8_mid2__DOT__gp_segment_high__DOT__cout = VL_RAND_RESET_I(3);
    vlSelf->cla__DOT__gp8_high__DOT__gin = VL_RAND_RESET_I(8);
    vlSelf->cla__DOT__gp8_high__DOT__pin = VL_RAND_RESET_I(8);
    vlSelf->cla__DOT__gp8_high__DOT__cin = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp8_high__DOT__gout = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp8_high__DOT__pout = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp8_high__DOT__cout = VL_RAND_RESET_I(7);
    vlSelf->cla__DOT__gp8_high__DOT__g_lower = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp8_high__DOT__p_lower = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp8_high__DOT__g_upper = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp8_high__DOT__p_upper = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp8_high__DOT__c_mid = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp8_high__DOT__gp_segment_low__DOT__gin = VL_RAND_RESET_I(4);
    vlSelf->cla__DOT__gp8_high__DOT__gp_segment_low__DOT__pin = VL_RAND_RESET_I(4);
    vlSelf->cla__DOT__gp8_high__DOT__gp_segment_low__DOT__cin = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp8_high__DOT__gp_segment_low__DOT__gout = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp8_high__DOT__gp_segment_low__DOT__pout = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp8_high__DOT__gp_segment_low__DOT__cout = VL_RAND_RESET_I(3);
    vlSelf->cla__DOT__gp8_high__DOT__gp_segment_high__DOT__gin = VL_RAND_RESET_I(4);
    vlSelf->cla__DOT__gp8_high__DOT__gp_segment_high__DOT__pin = VL_RAND_RESET_I(4);
    vlSelf->cla__DOT__gp8_high__DOT__gp_segment_high__DOT__cin = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp8_high__DOT__gp_segment_high__DOT__gout = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp8_high__DOT__gp_segment_high__DOT__pout = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp8_high__DOT__gp_segment_high__DOT__cout = VL_RAND_RESET_I(3);
    vlSelf->cla__DOT__gp1_loop__BRA__0__KET____DOT__gp_inst__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__0__KET____DOT__gp_inst__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__0__KET____DOT__gp_inst__DOT__g = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__0__KET____DOT__gp_inst__DOT__p = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__1__KET____DOT__gp_inst__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__1__KET____DOT__gp_inst__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__1__KET____DOT__gp_inst__DOT__g = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__1__KET____DOT__gp_inst__DOT__p = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__2__KET____DOT__gp_inst__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__2__KET____DOT__gp_inst__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__2__KET____DOT__gp_inst__DOT__g = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__2__KET____DOT__gp_inst__DOT__p = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__3__KET____DOT__gp_inst__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__3__KET____DOT__gp_inst__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__3__KET____DOT__gp_inst__DOT__g = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__3__KET____DOT__gp_inst__DOT__p = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__4__KET____DOT__gp_inst__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__4__KET____DOT__gp_inst__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__4__KET____DOT__gp_inst__DOT__g = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__4__KET____DOT__gp_inst__DOT__p = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__5__KET____DOT__gp_inst__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__5__KET____DOT__gp_inst__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__5__KET____DOT__gp_inst__DOT__g = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__5__KET____DOT__gp_inst__DOT__p = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__6__KET____DOT__gp_inst__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__6__KET____DOT__gp_inst__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__6__KET____DOT__gp_inst__DOT__g = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__6__KET____DOT__gp_inst__DOT__p = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__7__KET____DOT__gp_inst__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__7__KET____DOT__gp_inst__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__7__KET____DOT__gp_inst__DOT__g = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__7__KET____DOT__gp_inst__DOT__p = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__8__KET____DOT__gp_inst__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__8__KET____DOT__gp_inst__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__8__KET____DOT__gp_inst__DOT__g = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__8__KET____DOT__gp_inst__DOT__p = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__9__KET____DOT__gp_inst__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__9__KET____DOT__gp_inst__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__9__KET____DOT__gp_inst__DOT__g = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__9__KET____DOT__gp_inst__DOT__p = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__10__KET____DOT__gp_inst__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__10__KET____DOT__gp_inst__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__10__KET____DOT__gp_inst__DOT__g = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__10__KET____DOT__gp_inst__DOT__p = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__11__KET____DOT__gp_inst__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__11__KET____DOT__gp_inst__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__11__KET____DOT__gp_inst__DOT__g = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__11__KET____DOT__gp_inst__DOT__p = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__12__KET____DOT__gp_inst__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__12__KET____DOT__gp_inst__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__12__KET____DOT__gp_inst__DOT__g = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__12__KET____DOT__gp_inst__DOT__p = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__13__KET____DOT__gp_inst__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__13__KET____DOT__gp_inst__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__13__KET____DOT__gp_inst__DOT__g = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__13__KET____DOT__gp_inst__DOT__p = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__14__KET____DOT__gp_inst__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__14__KET____DOT__gp_inst__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__14__KET____DOT__gp_inst__DOT__g = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__14__KET____DOT__gp_inst__DOT__p = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__15__KET____DOT__gp_inst__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__15__KET____DOT__gp_inst__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__15__KET____DOT__gp_inst__DOT__g = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__15__KET____DOT__gp_inst__DOT__p = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__16__KET____DOT__gp_inst__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__16__KET____DOT__gp_inst__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__16__KET____DOT__gp_inst__DOT__g = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__16__KET____DOT__gp_inst__DOT__p = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__17__KET____DOT__gp_inst__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__17__KET____DOT__gp_inst__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__17__KET____DOT__gp_inst__DOT__g = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__17__KET____DOT__gp_inst__DOT__p = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__18__KET____DOT__gp_inst__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__18__KET____DOT__gp_inst__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__18__KET____DOT__gp_inst__DOT__g = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__18__KET____DOT__gp_inst__DOT__p = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__19__KET____DOT__gp_inst__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__19__KET____DOT__gp_inst__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__19__KET____DOT__gp_inst__DOT__g = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__19__KET____DOT__gp_inst__DOT__p = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__20__KET____DOT__gp_inst__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__20__KET____DOT__gp_inst__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__20__KET____DOT__gp_inst__DOT__g = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__20__KET____DOT__gp_inst__DOT__p = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__21__KET____DOT__gp_inst__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__21__KET____DOT__gp_inst__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__21__KET____DOT__gp_inst__DOT__g = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__21__KET____DOT__gp_inst__DOT__p = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__22__KET____DOT__gp_inst__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__22__KET____DOT__gp_inst__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__22__KET____DOT__gp_inst__DOT__g = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__22__KET____DOT__gp_inst__DOT__p = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__23__KET____DOT__gp_inst__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__23__KET____DOT__gp_inst__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__23__KET____DOT__gp_inst__DOT__g = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__23__KET____DOT__gp_inst__DOT__p = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__24__KET____DOT__gp_inst__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__24__KET____DOT__gp_inst__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__24__KET____DOT__gp_inst__DOT__g = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__24__KET____DOT__gp_inst__DOT__p = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__25__KET____DOT__gp_inst__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__25__KET____DOT__gp_inst__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__25__KET____DOT__gp_inst__DOT__g = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__25__KET____DOT__gp_inst__DOT__p = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__26__KET____DOT__gp_inst__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__26__KET____DOT__gp_inst__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__26__KET____DOT__gp_inst__DOT__g = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__26__KET____DOT__gp_inst__DOT__p = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__27__KET____DOT__gp_inst__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__27__KET____DOT__gp_inst__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__27__KET____DOT__gp_inst__DOT__g = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__27__KET____DOT__gp_inst__DOT__p = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__28__KET____DOT__gp_inst__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__28__KET____DOT__gp_inst__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__28__KET____DOT__gp_inst__DOT__g = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__28__KET____DOT__gp_inst__DOT__p = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__29__KET____DOT__gp_inst__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__29__KET____DOT__gp_inst__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__29__KET____DOT__gp_inst__DOT__g = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__29__KET____DOT__gp_inst__DOT__p = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__30__KET____DOT__gp_inst__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__30__KET____DOT__gp_inst__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__30__KET____DOT__gp_inst__DOT__g = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__30__KET____DOT__gp_inst__DOT__p = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__31__KET____DOT__gp_inst__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__31__KET____DOT__gp_inst__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__31__KET____DOT__gp_inst__DOT__g = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gp1_loop__BRA__31__KET____DOT__gp_inst__DOT__p = VL_RAND_RESET_I(1);
}
