// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ cla__DOT____Vcellinp__gp8_low__pin;
    cla__DOT____Vcellinp__gp8_low__pin = 0;
    CData/*7:0*/ cla__DOT____Vcellinp__gp8_low__gin;
    cla__DOT____Vcellinp__gp8_low__gin = 0;
    CData/*3:0*/ cla__DOT__gp8_low__DOT____Vcellinp__gp_segment_low__pin;
    cla__DOT__gp8_low__DOT____Vcellinp__gp_segment_low__pin = 0;
    CData/*3:0*/ cla__DOT__gp8_low__DOT____Vcellinp__gp_segment_low__gin;
    cla__DOT__gp8_low__DOT____Vcellinp__gp_segment_low__gin = 0;
    CData/*3:0*/ cla__DOT__gp8_low__DOT____Vcellinp__gp_segment_high__pin;
    cla__DOT__gp8_low__DOT____Vcellinp__gp_segment_high__pin = 0;
    CData/*0:0*/ cla__DOT__gp8_low__DOT__gp_segment_low__DOT____VdfgRegularize_h7103d123_0_1;
    cla__DOT__gp8_low__DOT__gp_segment_low__DOT____VdfgRegularize_h7103d123_0_1 = 0;
    CData/*0:0*/ cla__DOT__gp8_low__DOT__gp_segment_low__DOT____VdfgRegularize_h7103d123_0_4;
    cla__DOT__gp8_low__DOT__gp_segment_low__DOT____VdfgRegularize_h7103d123_0_4 = 0;
    CData/*0:0*/ cla__DOT__gp8_low__DOT__gp_segment_high__DOT____VdfgRegularize_h7103d123_0_1;
    cla__DOT__gp8_low__DOT__gp_segment_high__DOT____VdfgRegularize_h7103d123_0_1 = 0;
    CData/*0:0*/ cla__DOT__gp8_low__DOT__gp_segment_high__DOT____VdfgRegularize_h7103d123_0_4;
    cla__DOT__gp8_low__DOT__gp_segment_high__DOT____VdfgRegularize_h7103d123_0_4 = 0;
    CData/*3:0*/ cla__DOT__gp8_mid1__DOT____Vcellinp__gp_segment_low__pin;
    cla__DOT__gp8_mid1__DOT____Vcellinp__gp_segment_low__pin = 0;
    CData/*3:0*/ cla__DOT__gp8_mid1__DOT____Vcellinp__gp_segment_low__gin;
    cla__DOT__gp8_mid1__DOT____Vcellinp__gp_segment_low__gin = 0;
    CData/*3:0*/ cla__DOT__gp8_mid1__DOT____Vcellinp__gp_segment_high__pin;
    cla__DOT__gp8_mid1__DOT____Vcellinp__gp_segment_high__pin = 0;
    CData/*0:0*/ cla__DOT__gp8_mid1__DOT__gp_segment_low__DOT____VdfgRegularize_h7103d123_0_1;
    cla__DOT__gp8_mid1__DOT__gp_segment_low__DOT____VdfgRegularize_h7103d123_0_1 = 0;
    CData/*0:0*/ cla__DOT__gp8_mid1__DOT__gp_segment_low__DOT____VdfgRegularize_h7103d123_0_4;
    cla__DOT__gp8_mid1__DOT__gp_segment_low__DOT____VdfgRegularize_h7103d123_0_4 = 0;
    CData/*0:0*/ cla__DOT__gp8_mid1__DOT__gp_segment_high__DOT____VdfgRegularize_h7103d123_0_1;
    cla__DOT__gp8_mid1__DOT__gp_segment_high__DOT____VdfgRegularize_h7103d123_0_1 = 0;
    CData/*0:0*/ cla__DOT__gp8_mid1__DOT__gp_segment_high__DOT____VdfgRegularize_h7103d123_0_4;
    cla__DOT__gp8_mid1__DOT__gp_segment_high__DOT____VdfgRegularize_h7103d123_0_4 = 0;
    CData/*3:0*/ cla__DOT__gp8_mid2__DOT____Vcellinp__gp_segment_low__pin;
    cla__DOT__gp8_mid2__DOT____Vcellinp__gp_segment_low__pin = 0;
    CData/*3:0*/ cla__DOT__gp8_mid2__DOT____Vcellinp__gp_segment_low__gin;
    cla__DOT__gp8_mid2__DOT____Vcellinp__gp_segment_low__gin = 0;
    CData/*3:0*/ cla__DOT__gp8_mid2__DOT____Vcellinp__gp_segment_high__pin;
    cla__DOT__gp8_mid2__DOT____Vcellinp__gp_segment_high__pin = 0;
    CData/*0:0*/ cla__DOT__gp8_mid2__DOT__gp_segment_low__DOT____VdfgRegularize_h7103d123_0_1;
    cla__DOT__gp8_mid2__DOT__gp_segment_low__DOT____VdfgRegularize_h7103d123_0_1 = 0;
    CData/*0:0*/ cla__DOT__gp8_mid2__DOT__gp_segment_low__DOT____VdfgRegularize_h7103d123_0_4;
    cla__DOT__gp8_mid2__DOT__gp_segment_low__DOT____VdfgRegularize_h7103d123_0_4 = 0;
    CData/*0:0*/ cla__DOT__gp8_mid2__DOT__gp_segment_high__DOT____VdfgRegularize_h7103d123_0_1;
    cla__DOT__gp8_mid2__DOT__gp_segment_high__DOT____VdfgRegularize_h7103d123_0_1 = 0;
    CData/*0:0*/ cla__DOT__gp8_mid2__DOT__gp_segment_high__DOT____VdfgRegularize_h7103d123_0_4;
    cla__DOT__gp8_mid2__DOT__gp_segment_high__DOT____VdfgRegularize_h7103d123_0_4 = 0;
    CData/*3:0*/ cla__DOT__gp8_high__DOT____Vcellinp__gp_segment_low__pin;
    cla__DOT__gp8_high__DOT____Vcellinp__gp_segment_low__pin = 0;
    CData/*3:0*/ cla__DOT__gp8_high__DOT____Vcellinp__gp_segment_low__gin;
    cla__DOT__gp8_high__DOT____Vcellinp__gp_segment_low__gin = 0;
    CData/*3:0*/ cla__DOT__gp8_high__DOT____Vcellinp__gp_segment_high__pin;
    cla__DOT__gp8_high__DOT____Vcellinp__gp_segment_high__pin = 0;
    CData/*0:0*/ cla__DOT__gp8_high__DOT__gp_segment_low__DOT____VdfgRegularize_h7103d123_0_1;
    cla__DOT__gp8_high__DOT__gp_segment_low__DOT____VdfgRegularize_h7103d123_0_1 = 0;
    CData/*0:0*/ cla__DOT__gp8_high__DOT__gp_segment_low__DOT____VdfgRegularize_h7103d123_0_4;
    cla__DOT__gp8_high__DOT__gp_segment_low__DOT____VdfgRegularize_h7103d123_0_4 = 0;
    CData/*0:0*/ cla__DOT__gp8_high__DOT__gp_segment_high__DOT____VdfgRegularize_h7103d123_0_1;
    cla__DOT__gp8_high__DOT__gp_segment_high__DOT____VdfgRegularize_h7103d123_0_1 = 0;
    CData/*0:0*/ cla__DOT__gp8_high__DOT__gp_segment_high__DOT____VdfgRegularize_h7103d123_0_4;
    cla__DOT__gp8_high__DOT__gp_segment_high__DOT____VdfgRegularize_h7103d123_0_4 = 0;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_0;
    __VdfgRegularize_hd87f99a1_0_0 = 0;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_1;
    __VdfgRegularize_hd87f99a1_0_1 = 0;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_2;
    __VdfgRegularize_hd87f99a1_0_2 = 0;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_3;
    __VdfgRegularize_hd87f99a1_0_3 = 0;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_4;
    __VdfgRegularize_hd87f99a1_0_4 = 0;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_5;
    __VdfgRegularize_hd87f99a1_0_5 = 0;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_6;
    __VdfgRegularize_hd87f99a1_0_6 = 0;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_7;
    __VdfgRegularize_hd87f99a1_0_7 = 0;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_8;
    __VdfgRegularize_hd87f99a1_0_8 = 0;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_9;
    __VdfgRegularize_hd87f99a1_0_9 = 0;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_10;
    __VdfgRegularize_hd87f99a1_0_10 = 0;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_11;
    __VdfgRegularize_hd87f99a1_0_11 = 0;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_12;
    __VdfgRegularize_hd87f99a1_0_12 = 0;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_13;
    __VdfgRegularize_hd87f99a1_0_13 = 0;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_14;
    __VdfgRegularize_hd87f99a1_0_14 = 0;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_15;
    __VdfgRegularize_hd87f99a1_0_15 = 0;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_16;
    __VdfgRegularize_hd87f99a1_0_16 = 0;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_17;
    __VdfgRegularize_hd87f99a1_0_17 = 0;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_18;
    __VdfgRegularize_hd87f99a1_0_18 = 0;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_19;
    __VdfgRegularize_hd87f99a1_0_19 = 0;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_20;
    __VdfgRegularize_hd87f99a1_0_20 = 0;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_21;
    __VdfgRegularize_hd87f99a1_0_21 = 0;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_22;
    __VdfgRegularize_hd87f99a1_0_22 = 0;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_23;
    __VdfgRegularize_hd87f99a1_0_23 = 0;
    // Body
    vlSelfRef.cla__DOT__a = vlSelfRef.a;
    vlSelfRef.cla__DOT__b = vlSelfRef.b;
    vlSelfRef.cla__DOT__gp1_loop__BRA__0__KET____DOT__gp_inst__DOT__a 
        = (1U & (vlSelfRef.a >> 0U));
    vlSelfRef.cla__DOT__gp1_loop__BRA__0__KET____DOT__gp_inst__DOT__b 
        = (1U & (vlSelfRef.b >> 0U));
    vlSelfRef.cla__DOT__gp1_loop__BRA__1__KET____DOT__gp_inst__DOT__a 
        = (1U & (vlSelfRef.a >> 1U));
    vlSelfRef.cla__DOT__gp1_loop__BRA__1__KET____DOT__gp_inst__DOT__b 
        = (1U & (vlSelfRef.b >> 1U));
    vlSelfRef.cla__DOT__gp1_loop__BRA__2__KET____DOT__gp_inst__DOT__a 
        = (1U & (vlSelfRef.a >> 2U));
    vlSelfRef.cla__DOT__gp1_loop__BRA__2__KET____DOT__gp_inst__DOT__b 
        = (1U & (vlSelfRef.b >> 2U));
    vlSelfRef.cla__DOT__gp1_loop__BRA__3__KET____DOT__gp_inst__DOT__a 
        = (1U & (vlSelfRef.a >> 3U));
    vlSelfRef.cla__DOT__gp1_loop__BRA__3__KET____DOT__gp_inst__DOT__b 
        = (1U & (vlSelfRef.b >> 3U));
    vlSelfRef.cla__DOT__gp1_loop__BRA__4__KET____DOT__gp_inst__DOT__a 
        = (1U & (vlSelfRef.a >> 4U));
    vlSelfRef.cla__DOT__gp1_loop__BRA__4__KET____DOT__gp_inst__DOT__b 
        = (1U & (vlSelfRef.b >> 4U));
    vlSelfRef.cla__DOT__gp1_loop__BRA__5__KET____DOT__gp_inst__DOT__a 
        = (1U & (vlSelfRef.a >> 5U));
    vlSelfRef.cla__DOT__gp1_loop__BRA__5__KET____DOT__gp_inst__DOT__b 
        = (1U & (vlSelfRef.b >> 5U));
    vlSelfRef.cla__DOT__gp1_loop__BRA__6__KET____DOT__gp_inst__DOT__a 
        = (1U & (vlSelfRef.a >> 6U));
    vlSelfRef.cla__DOT__gp1_loop__BRA__6__KET____DOT__gp_inst__DOT__b 
        = (1U & (vlSelfRef.b >> 6U));
    vlSelfRef.cla__DOT__gp1_loop__BRA__7__KET____DOT__gp_inst__DOT__a 
        = (1U & (vlSelfRef.a >> 7U));
    vlSelfRef.cla__DOT__gp1_loop__BRA__7__KET____DOT__gp_inst__DOT__b 
        = (1U & (vlSelfRef.b >> 7U));
    vlSelfRef.cla__DOT__gp1_loop__BRA__8__KET____DOT__gp_inst__DOT__a 
        = (1U & (vlSelfRef.a >> 8U));
    vlSelfRef.cla__DOT__gp1_loop__BRA__8__KET____DOT__gp_inst__DOT__b 
        = (1U & (vlSelfRef.b >> 8U));
    vlSelfRef.cla__DOT__gp1_loop__BRA__9__KET____DOT__gp_inst__DOT__a 
        = (1U & (vlSelfRef.a >> 9U));
    vlSelfRef.cla__DOT__gp1_loop__BRA__9__KET____DOT__gp_inst__DOT__b 
        = (1U & (vlSelfRef.b >> 9U));
    vlSelfRef.cla__DOT__gp1_loop__BRA__10__KET____DOT__gp_inst__DOT__a 
        = (1U & (vlSelfRef.a >> 0xaU));
    vlSelfRef.cla__DOT__gp1_loop__BRA__10__KET____DOT__gp_inst__DOT__b 
        = (1U & (vlSelfRef.b >> 0xaU));
    vlSelfRef.cla__DOT__gp1_loop__BRA__11__KET____DOT__gp_inst__DOT__a 
        = (1U & (vlSelfRef.a >> 0xbU));
    vlSelfRef.cla__DOT__gp1_loop__BRA__11__KET____DOT__gp_inst__DOT__b 
        = (1U & (vlSelfRef.b >> 0xbU));
    vlSelfRef.cla__DOT__gp1_loop__BRA__12__KET____DOT__gp_inst__DOT__a 
        = (1U & (vlSelfRef.a >> 0xcU));
    vlSelfRef.cla__DOT__gp1_loop__BRA__12__KET____DOT__gp_inst__DOT__b 
        = (1U & (vlSelfRef.b >> 0xcU));
    vlSelfRef.cla__DOT__gp1_loop__BRA__13__KET____DOT__gp_inst__DOT__a 
        = (1U & (vlSelfRef.a >> 0xdU));
    vlSelfRef.cla__DOT__gp1_loop__BRA__13__KET____DOT__gp_inst__DOT__b 
        = (1U & (vlSelfRef.b >> 0xdU));
    vlSelfRef.cla__DOT__gp1_loop__BRA__14__KET____DOT__gp_inst__DOT__a 
        = (1U & (vlSelfRef.a >> 0xeU));
    vlSelfRef.cla__DOT__gp1_loop__BRA__14__KET____DOT__gp_inst__DOT__b 
        = (1U & (vlSelfRef.b >> 0xeU));
    vlSelfRef.cla__DOT__gp1_loop__BRA__15__KET____DOT__gp_inst__DOT__a 
        = (1U & (vlSelfRef.a >> 0xfU));
    vlSelfRef.cla__DOT__gp1_loop__BRA__15__KET____DOT__gp_inst__DOT__b 
        = (1U & (vlSelfRef.b >> 0xfU));
    vlSelfRef.cla__DOT__gp1_loop__BRA__16__KET____DOT__gp_inst__DOT__a 
        = (1U & (vlSelfRef.a >> 0x10U));
    vlSelfRef.cla__DOT__gp1_loop__BRA__16__KET____DOT__gp_inst__DOT__b 
        = (1U & (vlSelfRef.b >> 0x10U));
    vlSelfRef.cla__DOT__gp1_loop__BRA__17__KET____DOT__gp_inst__DOT__a 
        = (1U & (vlSelfRef.a >> 0x11U));
    vlSelfRef.cla__DOT__gp1_loop__BRA__17__KET____DOT__gp_inst__DOT__b 
        = (1U & (vlSelfRef.b >> 0x11U));
    vlSelfRef.cla__DOT__gp1_loop__BRA__18__KET____DOT__gp_inst__DOT__a 
        = (1U & (vlSelfRef.a >> 0x12U));
    vlSelfRef.cla__DOT__gp1_loop__BRA__18__KET____DOT__gp_inst__DOT__b 
        = (1U & (vlSelfRef.b >> 0x12U));
    vlSelfRef.cla__DOT__gp1_loop__BRA__19__KET____DOT__gp_inst__DOT__a 
        = (1U & (vlSelfRef.a >> 0x13U));
    vlSelfRef.cla__DOT__gp1_loop__BRA__19__KET____DOT__gp_inst__DOT__b 
        = (1U & (vlSelfRef.b >> 0x13U));
    vlSelfRef.cla__DOT__gp1_loop__BRA__20__KET____DOT__gp_inst__DOT__a 
        = (1U & (vlSelfRef.a >> 0x14U));
    vlSelfRef.cla__DOT__gp1_loop__BRA__20__KET____DOT__gp_inst__DOT__b 
        = (1U & (vlSelfRef.b >> 0x14U));
    vlSelfRef.cla__DOT__gp1_loop__BRA__21__KET____DOT__gp_inst__DOT__a 
        = (1U & (vlSelfRef.a >> 0x15U));
    vlSelfRef.cla__DOT__gp1_loop__BRA__21__KET____DOT__gp_inst__DOT__b 
        = (1U & (vlSelfRef.b >> 0x15U));
    vlSelfRef.cla__DOT__gp1_loop__BRA__22__KET____DOT__gp_inst__DOT__a 
        = (1U & (vlSelfRef.a >> 0x16U));
    vlSelfRef.cla__DOT__gp1_loop__BRA__22__KET____DOT__gp_inst__DOT__b 
        = (1U & (vlSelfRef.b >> 0x16U));
    vlSelfRef.cla__DOT__gp1_loop__BRA__23__KET____DOT__gp_inst__DOT__a 
        = (1U & (vlSelfRef.a >> 0x17U));
    vlSelfRef.cla__DOT__gp1_loop__BRA__23__KET____DOT__gp_inst__DOT__b 
        = (1U & (vlSelfRef.b >> 0x17U));
    vlSelfRef.cla__DOT__gp1_loop__BRA__24__KET____DOT__gp_inst__DOT__a 
        = (1U & (vlSelfRef.a >> 0x18U));
    vlSelfRef.cla__DOT__gp1_loop__BRA__24__KET____DOT__gp_inst__DOT__b 
        = (1U & (vlSelfRef.b >> 0x18U));
    vlSelfRef.cla__DOT__gp1_loop__BRA__25__KET____DOT__gp_inst__DOT__a 
        = (1U & (vlSelfRef.a >> 0x19U));
    vlSelfRef.cla__DOT__gp1_loop__BRA__25__KET____DOT__gp_inst__DOT__b 
        = (1U & (vlSelfRef.b >> 0x19U));
    vlSelfRef.cla__DOT__gp1_loop__BRA__26__KET____DOT__gp_inst__DOT__a 
        = (1U & (vlSelfRef.a >> 0x1aU));
    vlSelfRef.cla__DOT__gp1_loop__BRA__26__KET____DOT__gp_inst__DOT__b 
        = (1U & (vlSelfRef.b >> 0x1aU));
    vlSelfRef.cla__DOT__gp1_loop__BRA__27__KET____DOT__gp_inst__DOT__a 
        = (1U & (vlSelfRef.a >> 0x1bU));
    vlSelfRef.cla__DOT__gp1_loop__BRA__27__KET____DOT__gp_inst__DOT__b 
        = (1U & (vlSelfRef.b >> 0x1bU));
    vlSelfRef.cla__DOT__gp1_loop__BRA__28__KET____DOT__gp_inst__DOT__a 
        = (1U & (vlSelfRef.a >> 0x1cU));
    vlSelfRef.cla__DOT__gp1_loop__BRA__28__KET____DOT__gp_inst__DOT__b 
        = (1U & (vlSelfRef.b >> 0x1cU));
    vlSelfRef.cla__DOT__gp1_loop__BRA__29__KET____DOT__gp_inst__DOT__a 
        = (1U & (vlSelfRef.a >> 0x1dU));
    vlSelfRef.cla__DOT__gp1_loop__BRA__29__KET____DOT__gp_inst__DOT__b 
        = (1U & (vlSelfRef.b >> 0x1dU));
    vlSelfRef.cla__DOT__gp1_loop__BRA__30__KET____DOT__gp_inst__DOT__a 
        = (1U & (vlSelfRef.a >> 0x1eU));
    vlSelfRef.cla__DOT__gp1_loop__BRA__30__KET____DOT__gp_inst__DOT__b 
        = (1U & (vlSelfRef.b >> 0x1eU));
    vlSelfRef.cla__DOT__gp1_loop__BRA__31__KET____DOT__gp_inst__DOT__a 
        = (1U & (vlSelfRef.a >> 0x1fU));
    vlSelfRef.cla__DOT__gp1_loop__BRA__31__KET____DOT__gp_inst__DOT__b 
        = (1U & (vlSelfRef.b >> 0x1fU));
    vlSelfRef.cla__DOT__cin = vlSelfRef.cin;
    vlSelfRef.cla__DOT__gp1_loop__BRA__31__KET____DOT__gp_inst__DOT__g 
        = ((vlSelfRef.a & vlSelfRef.b) >> 0x1fU);
    vlSelfRef.cla__DOT__gp1_loop__BRA__31__KET____DOT__gp_inst__DOT__p 
        = ((vlSelfRef.a | vlSelfRef.b) >> 0x1fU);
    vlSelfRef.cla__DOT__gp1_loop__BRA__30__KET____DOT__gp_inst__DOT__g 
        = (1U & ((vlSelfRef.a & vlSelfRef.b) >> 0x1eU));
    vlSelfRef.cla__DOT__gp1_loop__BRA__30__KET____DOT__gp_inst__DOT__p 
        = (1U & ((vlSelfRef.a | vlSelfRef.b) >> 0x1eU));
    vlSelfRef.cla__DOT__gp1_loop__BRA__29__KET____DOT__gp_inst__DOT__g 
        = (1U & ((vlSelfRef.a & vlSelfRef.b) >> 0x1dU));
    vlSelfRef.cla__DOT__gp1_loop__BRA__28__KET____DOT__gp_inst__DOT__g 
        = (1U & ((vlSelfRef.a & vlSelfRef.b) >> 0x1cU));
    vlSelfRef.cla__DOT__gp1_loop__BRA__28__KET____DOT__gp_inst__DOT__p 
        = (1U & ((vlSelfRef.a | vlSelfRef.b) >> 0x1cU));
    vlSelfRef.cla__DOT__gp1_loop__BRA__29__KET____DOT__gp_inst__DOT__p 
        = (1U & ((vlSelfRef.a | vlSelfRef.b) >> 0x1dU));
    vlSelfRef.cla__DOT__gp1_loop__BRA__27__KET____DOT__gp_inst__DOT__g 
        = (1U & ((vlSelfRef.a & vlSelfRef.b) >> 0x1bU));
    vlSelfRef.cla__DOT__gp1_loop__BRA__26__KET____DOT__gp_inst__DOT__g 
        = (1U & ((vlSelfRef.a & vlSelfRef.b) >> 0x1aU));
    vlSelfRef.cla__DOT__gp1_loop__BRA__25__KET____DOT__gp_inst__DOT__g 
        = (1U & ((vlSelfRef.a & vlSelfRef.b) >> 0x19U));
    vlSelfRef.cla__DOT__gp1_loop__BRA__24__KET____DOT__gp_inst__DOT__p 
        = (1U & ((vlSelfRef.a | vlSelfRef.b) >> 0x18U));
    vlSelfRef.cla__DOT__gp1_loop__BRA__24__KET____DOT__gp_inst__DOT__g 
        = (1U & ((vlSelfRef.a & vlSelfRef.b) >> 0x18U));
    vlSelfRef.cla__DOT__gp1_loop__BRA__23__KET____DOT__gp_inst__DOT__g 
        = (1U & ((vlSelfRef.a & vlSelfRef.b) >> 0x17U));
    vlSelfRef.cla__DOT__gp1_loop__BRA__27__KET____DOT__gp_inst__DOT__p 
        = (1U & ((vlSelfRef.a | vlSelfRef.b) >> 0x1bU));
    vlSelfRef.cla__DOT__gp1_loop__BRA__22__KET____DOT__gp_inst__DOT__g 
        = (1U & ((vlSelfRef.a & vlSelfRef.b) >> 0x16U));
    vlSelfRef.cla__DOT__gp1_loop__BRA__26__KET____DOT__gp_inst__DOT__p 
        = (1U & ((vlSelfRef.a | vlSelfRef.b) >> 0x1aU));
    vlSelfRef.cla__DOT__gp1_loop__BRA__21__KET____DOT__gp_inst__DOT__g 
        = (1U & ((vlSelfRef.a & vlSelfRef.b) >> 0x15U));
    vlSelfRef.cla__DOT__gp1_loop__BRA__20__KET____DOT__gp_inst__DOT__g 
        = (1U & ((vlSelfRef.a & vlSelfRef.b) >> 0x14U));
    vlSelfRef.cla__DOT__gp1_loop__BRA__25__KET____DOT__gp_inst__DOT__p 
        = (1U & ((vlSelfRef.a | vlSelfRef.b) >> 0x19U));
    vlSelfRef.cla__DOT__gp1_loop__BRA__19__KET____DOT__gp_inst__DOT__g 
        = (1U & ((vlSelfRef.a & vlSelfRef.b) >> 0x13U));
    vlSelfRef.cla__DOT__gp1_loop__BRA__18__KET____DOT__gp_inst__DOT__g 
        = (1U & ((vlSelfRef.a & vlSelfRef.b) >> 0x12U));
    vlSelfRef.cla__DOT__gp1_loop__BRA__17__KET____DOT__gp_inst__DOT__g 
        = (1U & ((vlSelfRef.a & vlSelfRef.b) >> 0x11U));
    vlSelfRef.cla__DOT__gp1_loop__BRA__16__KET____DOT__gp_inst__DOT__p 
        = (1U & ((vlSelfRef.a | vlSelfRef.b) >> 0x10U));
    vlSelfRef.cla__DOT__gp1_loop__BRA__16__KET____DOT__gp_inst__DOT__g 
        = (1U & ((vlSelfRef.a & vlSelfRef.b) >> 0x10U));
    vlSelfRef.cla__DOT__gp1_loop__BRA__15__KET____DOT__gp_inst__DOT__g 
        = (1U & ((vlSelfRef.a & vlSelfRef.b) >> 0xfU));
    vlSelfRef.cla__DOT__gp1_loop__BRA__14__KET____DOT__gp_inst__DOT__g 
        = (1U & ((vlSelfRef.a & vlSelfRef.b) >> 0xeU));
    vlSelfRef.cla__DOT__gp1_loop__BRA__13__KET____DOT__gp_inst__DOT__g 
        = (1U & ((vlSelfRef.a & vlSelfRef.b) >> 0xdU));
    vlSelfRef.cla__DOT__gp1_loop__BRA__12__KET____DOT__gp_inst__DOT__g 
        = (1U & ((vlSelfRef.a & vlSelfRef.b) >> 0xcU));
    vlSelfRef.cla__DOT__gp1_loop__BRA__20__KET____DOT__gp_inst__DOT__p 
        = (1U & ((vlSelfRef.a | vlSelfRef.b) >> 0x14U));
    vlSelfRef.cla__DOT__gp1_loop__BRA__11__KET____DOT__gp_inst__DOT__g 
        = (1U & ((vlSelfRef.a & vlSelfRef.b) >> 0xbU));
    vlSelfRef.cla__DOT__gp1_loop__BRA__10__KET____DOT__gp_inst__DOT__g 
        = (1U & ((vlSelfRef.a & vlSelfRef.b) >> 0xaU));
    vlSelfRef.cla__DOT__gp1_loop__BRA__9__KET____DOT__gp_inst__DOT__g 
        = (1U & ((vlSelfRef.a & vlSelfRef.b) >> 9U));
    vlSelfRef.cla__DOT__gp1_loop__BRA__8__KET____DOT__gp_inst__DOT__p 
        = (1U & ((vlSelfRef.a | vlSelfRef.b) >> 8U));
    vlSelfRef.cla__DOT__gp1_loop__BRA__8__KET____DOT__gp_inst__DOT__g 
        = (1U & ((vlSelfRef.a & vlSelfRef.b) >> 8U));
    vlSelfRef.cla__DOT__gp1_loop__BRA__7__KET____DOT__gp_inst__DOT__g 
        = (1U & ((vlSelfRef.a & vlSelfRef.b) >> 7U));
    vlSelfRef.cla__DOT__gp1_loop__BRA__19__KET____DOT__gp_inst__DOT__p 
        = (1U & ((vlSelfRef.a | vlSelfRef.b) >> 0x13U));
    vlSelfRef.cla__DOT__gp1_loop__BRA__23__KET____DOT__gp_inst__DOT__p 
        = (1U & ((vlSelfRef.a | vlSelfRef.b) >> 0x17U));
    vlSelfRef.cla__DOT__gp1_loop__BRA__6__KET____DOT__gp_inst__DOT__g 
        = (1U & ((vlSelfRef.a & vlSelfRef.b) >> 6U));
    vlSelfRef.cla__DOT__gp1_loop__BRA__18__KET____DOT__gp_inst__DOT__p 
        = (1U & ((vlSelfRef.a | vlSelfRef.b) >> 0x12U));
    vlSelfRef.cla__DOT__gp1_loop__BRA__22__KET____DOT__gp_inst__DOT__p 
        = (1U & ((vlSelfRef.a | vlSelfRef.b) >> 0x16U));
    vlSelfRef.cla__DOT__gp1_loop__BRA__5__KET____DOT__gp_inst__DOT__g 
        = (1U & ((vlSelfRef.a & vlSelfRef.b) >> 5U));
    vlSelfRef.cla__DOT__gp1_loop__BRA__4__KET____DOT__gp_inst__DOT__g 
        = (1U & ((vlSelfRef.a & vlSelfRef.b) >> 4U));
    vlSelfRef.cla__DOT__gp1_loop__BRA__17__KET____DOT__gp_inst__DOT__p 
        = (1U & ((vlSelfRef.a | vlSelfRef.b) >> 0x11U));
    vlSelfRef.cla__DOT__gp1_loop__BRA__21__KET____DOT__gp_inst__DOT__p 
        = (1U & ((vlSelfRef.a | vlSelfRef.b) >> 0x15U));
    vlSelfRef.cla__DOT__gp1_loop__BRA__3__KET____DOT__gp_inst__DOT__g 
        = (1U & ((vlSelfRef.a & vlSelfRef.b) >> 3U));
    vlSelfRef.cla__DOT__gp1_loop__BRA__2__KET____DOT__gp_inst__DOT__g 
        = (1U & ((vlSelfRef.a & vlSelfRef.b) >> 2U));
    vlSelfRef.cla__DOT__gp1_loop__BRA__1__KET____DOT__gp_inst__DOT__g 
        = (1U & ((vlSelfRef.a & vlSelfRef.b) >> 1U));
    vlSelfRef.cla__DOT__gp1_loop__BRA__0__KET____DOT__gp_inst__DOT__p 
        = (1U & (vlSelfRef.a | vlSelfRef.b));
    vlSelfRef.cla__DOT__gp1_loop__BRA__0__KET____DOT__gp_inst__DOT__g 
        = (1U & (vlSelfRef.a & vlSelfRef.b));
    vlSelfRef.cla__DOT__gp1_loop__BRA__12__KET____DOT__gp_inst__DOT__p 
        = (1U & ((vlSelfRef.a | vlSelfRef.b) >> 0xcU));
    vlSelfRef.cla__DOT__gp1_loop__BRA__11__KET____DOT__gp_inst__DOT__p 
        = (1U & ((vlSelfRef.a | vlSelfRef.b) >> 0xbU));
    vlSelfRef.cla__DOT__gp1_loop__BRA__10__KET____DOT__gp_inst__DOT__p 
        = (1U & ((vlSelfRef.a | vlSelfRef.b) >> 0xaU));
    vlSelfRef.cla__DOT__gp1_loop__BRA__9__KET____DOT__gp_inst__DOT__p 
        = (1U & ((vlSelfRef.a | vlSelfRef.b) >> 9U));
    vlSelfRef.cla__DOT__gp1_loop__BRA__15__KET____DOT__gp_inst__DOT__p 
        = (1U & ((vlSelfRef.a | vlSelfRef.b) >> 0xfU));
    vlSelfRef.cla__DOT__gp1_loop__BRA__14__KET____DOT__gp_inst__DOT__p 
        = (1U & ((vlSelfRef.a | vlSelfRef.b) >> 0xeU));
    vlSelfRef.cla__DOT__gp1_loop__BRA__4__KET____DOT__gp_inst__DOT__p 
        = (1U & ((vlSelfRef.a | vlSelfRef.b) >> 4U));
    vlSelfRef.cla__DOT__gp1_loop__BRA__13__KET____DOT__gp_inst__DOT__p 
        = (1U & ((vlSelfRef.a | vlSelfRef.b) >> 0xdU));
    vlSelfRef.cla__DOT__gp1_loop__BRA__3__KET____DOT__gp_inst__DOT__p 
        = (1U & ((vlSelfRef.a | vlSelfRef.b) >> 3U));
    vlSelfRef.cla__DOT__gp1_loop__BRA__2__KET____DOT__gp_inst__DOT__p 
        = (1U & ((vlSelfRef.a | vlSelfRef.b) >> 2U));
    vlSelfRef.cla__DOT__gp1_loop__BRA__1__KET____DOT__gp_inst__DOT__p 
        = (1U & ((vlSelfRef.a | vlSelfRef.b) >> 1U));
    vlSelfRef.cla__DOT__gp1_loop__BRA__7__KET____DOT__gp_inst__DOT__p 
        = (1U & ((vlSelfRef.a | vlSelfRef.b) >> 7U));
    vlSelfRef.cla__DOT__gp1_loop__BRA__6__KET____DOT__gp_inst__DOT__p 
        = (1U & ((vlSelfRef.a | vlSelfRef.b) >> 6U));
    vlSelfRef.cla__DOT__gp1_loop__BRA__5__KET____DOT__gp_inst__DOT__p 
        = (1U & ((vlSelfRef.a | vlSelfRef.b) >> 5U));
    vlSelfRef.cla__DOT__gp8_low__DOT__cin = vlSelfRef.cla__DOT__cin;
    vlSelfRef.cla__DOT__gp8_high__DOT__gp_segment_high__DOT__gin 
        = (((((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__31__KET____DOT__gp_inst__DOT__g) 
              << 1U) | (IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__30__KET____DOT__gp_inst__DOT__g)) 
            << 2U) | (((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__29__KET____DOT__gp_inst__DOT__g) 
                       << 1U) | (IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__28__KET____DOT__gp_inst__DOT__g)));
    cla__DOT__gp8_high__DOT____Vcellinp__gp_segment_high__pin 
        = ((((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__31__KET____DOT__gp_inst__DOT__p) 
             << 3U) | ((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__30__KET____DOT__gp_inst__DOT__p) 
                       << 2U)) | (((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__29__KET____DOT__gp_inst__DOT__p) 
                                   << 1U) | (IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__28__KET____DOT__gp_inst__DOT__p)));
    cla__DOT__gp8_high__DOT__gp_segment_high__DOT____VdfgRegularize_h7103d123_0_4 
        = ((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__29__KET____DOT__gp_inst__DOT__p) 
           & (IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__28__KET____DOT__gp_inst__DOT__g));
    cla__DOT__gp8_high__DOT____Vcellinp__gp_segment_low__gin 
        = ((((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__27__KET____DOT__gp_inst__DOT__g) 
             << 3U) | ((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__26__KET____DOT__gp_inst__DOT__g) 
                       << 2U)) | (((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__25__KET____DOT__gp_inst__DOT__g) 
                                   << 1U) | (IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__24__KET____DOT__gp_inst__DOT__g)));
    vlSelfRef.cla__DOT__gp8_mid2__DOT__gp_segment_high__DOT__gin 
        = (((((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__23__KET____DOT__gp_inst__DOT__g) 
              << 1U) | (IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__22__KET____DOT__gp_inst__DOT__g)) 
            << 2U) | (((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__21__KET____DOT__gp_inst__DOT__g) 
                       << 1U) | (IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__20__KET____DOT__gp_inst__DOT__g)));
    cla__DOT__gp8_high__DOT____Vcellinp__gp_segment_low__pin 
        = ((((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__27__KET____DOT__gp_inst__DOT__p) 
             << 3U) | ((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__26__KET____DOT__gp_inst__DOT__p) 
                       << 2U)) | (((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__25__KET____DOT__gp_inst__DOT__p) 
                                   << 1U) | (IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__24__KET____DOT__gp_inst__DOT__p)));
    cla__DOT__gp8_high__DOT__gp_segment_low__DOT____VdfgRegularize_h7103d123_0_4 
        = ((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__25__KET____DOT__gp_inst__DOT__p) 
           & (IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__24__KET____DOT__gp_inst__DOT__g));
    cla__DOT__gp8_mid2__DOT____Vcellinp__gp_segment_low__gin 
        = ((((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__19__KET____DOT__gp_inst__DOT__g) 
             << 3U) | ((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__18__KET____DOT__gp_inst__DOT__g) 
                       << 2U)) | (((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__17__KET____DOT__gp_inst__DOT__g) 
                                   << 1U) | (IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__16__KET____DOT__gp_inst__DOT__g)));
    vlSelfRef.cla__DOT__gp8_mid1__DOT__gp_segment_high__DOT__gin 
        = (((((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__15__KET____DOT__gp_inst__DOT__g) 
              << 1U) | (IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__14__KET____DOT__gp_inst__DOT__g)) 
            << 2U) | (((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__13__KET____DOT__gp_inst__DOT__g) 
                       << 1U) | (IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__12__KET____DOT__gp_inst__DOT__g)));
    cla__DOT__gp8_mid1__DOT____Vcellinp__gp_segment_low__gin 
        = ((((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__11__KET____DOT__gp_inst__DOT__g) 
             << 3U) | ((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__10__KET____DOT__gp_inst__DOT__g) 
                       << 2U)) | (((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__9__KET____DOT__gp_inst__DOT__g) 
                                   << 1U) | (IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__8__KET____DOT__gp_inst__DOT__g)));
    vlSelfRef.cla__DOT__gp8_low__DOT__gp_segment_high__DOT__gin 
        = (((((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__7__KET____DOT__gp_inst__DOT__g) 
              << 1U) | (IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__6__KET____DOT__gp_inst__DOT__g)) 
            << 2U) | (((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__5__KET____DOT__gp_inst__DOT__g) 
                       << 1U) | (IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__4__KET____DOT__gp_inst__DOT__g)));
    cla__DOT__gp8_mid2__DOT____Vcellinp__gp_segment_low__pin 
        = ((((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__19__KET____DOT__gp_inst__DOT__p) 
             << 3U) | ((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__18__KET____DOT__gp_inst__DOT__p) 
                       << 2U)) | (((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__17__KET____DOT__gp_inst__DOT__p) 
                                   << 1U) | (IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__16__KET____DOT__gp_inst__DOT__p)));
    cla__DOT__gp8_mid2__DOT__gp_segment_low__DOT____VdfgRegularize_h7103d123_0_4 
        = ((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__17__KET____DOT__gp_inst__DOT__p) 
           & (IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__16__KET____DOT__gp_inst__DOT__g));
    cla__DOT__gp8_mid2__DOT__gp_segment_high__DOT____VdfgRegularize_h7103d123_0_4 
        = ((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__21__KET____DOT__gp_inst__DOT__p) 
           & (IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__20__KET____DOT__gp_inst__DOT__g));
    cla__DOT__gp8_mid2__DOT____Vcellinp__gp_segment_high__pin 
        = ((((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__23__KET____DOT__gp_inst__DOT__p) 
             << 3U) | ((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__22__KET____DOT__gp_inst__DOT__p) 
                       << 2U)) | (((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__21__KET____DOT__gp_inst__DOT__p) 
                                   << 1U) | (IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__20__KET____DOT__gp_inst__DOT__p)));
    cla__DOT__gp8_low__DOT__gp_segment_low__DOT____VdfgRegularize_h7103d123_0_1 
        = ((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__0__KET____DOT__gp_inst__DOT__p) 
           & (IData)(vlSelfRef.cin));
    cla__DOT__gp8_low__DOT____Vcellinp__gp_segment_low__gin 
        = ((((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__3__KET____DOT__gp_inst__DOT__g) 
             << 3U) | ((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__2__KET____DOT__gp_inst__DOT__g) 
                       << 2U)) | (((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__1__KET____DOT__gp_inst__DOT__g) 
                                   << 1U) | (IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__0__KET____DOT__gp_inst__DOT__g)));
    cla__DOT__gp8_mid1__DOT____Vcellinp__gp_segment_low__pin 
        = ((((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__11__KET____DOT__gp_inst__DOT__p) 
             << 3U) | ((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__10__KET____DOT__gp_inst__DOT__p) 
                       << 2U)) | (((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__9__KET____DOT__gp_inst__DOT__p) 
                                   << 1U) | (IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__8__KET____DOT__gp_inst__DOT__p)));
    cla__DOT__gp8_mid1__DOT__gp_segment_low__DOT____VdfgRegularize_h7103d123_0_4 
        = ((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__9__KET____DOT__gp_inst__DOT__p) 
           & (IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__8__KET____DOT__gp_inst__DOT__g));
    cla__DOT__gp8_mid1__DOT__gp_segment_high__DOT____VdfgRegularize_h7103d123_0_4 
        = ((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__13__KET____DOT__gp_inst__DOT__p) 
           & (IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__12__KET____DOT__gp_inst__DOT__g));
    cla__DOT__gp8_mid1__DOT____Vcellinp__gp_segment_high__pin 
        = ((((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__15__KET____DOT__gp_inst__DOT__p) 
             << 3U) | ((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__14__KET____DOT__gp_inst__DOT__p) 
                       << 2U)) | (((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__13__KET____DOT__gp_inst__DOT__p) 
                                   << 1U) | (IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__12__KET____DOT__gp_inst__DOT__p)));
    cla__DOT__gp8_low__DOT____Vcellinp__gp_segment_low__pin 
        = ((((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__3__KET____DOT__gp_inst__DOT__p) 
             << 3U) | ((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__2__KET____DOT__gp_inst__DOT__p) 
                       << 2U)) | (((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__1__KET____DOT__gp_inst__DOT__p) 
                                   << 1U) | (IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__0__KET____DOT__gp_inst__DOT__p)));
    cla__DOT__gp8_low__DOT__gp_segment_low__DOT____VdfgRegularize_h7103d123_0_4 
        = ((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__1__KET____DOT__gp_inst__DOT__p) 
           & (IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__0__KET____DOT__gp_inst__DOT__g));
    cla__DOT__gp8_low__DOT__gp_segment_high__DOT____VdfgRegularize_h7103d123_0_4 
        = ((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__5__KET____DOT__gp_inst__DOT__p) 
           & (IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__4__KET____DOT__gp_inst__DOT__g));
    cla__DOT__gp8_low__DOT____Vcellinp__gp_segment_high__pin 
        = ((((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__7__KET____DOT__gp_inst__DOT__p) 
             << 3U) | ((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__6__KET____DOT__gp_inst__DOT__p) 
                       << 2U)) | (((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__5__KET____DOT__gp_inst__DOT__p) 
                                   << 1U) | (IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__4__KET____DOT__gp_inst__DOT__p)));
    vlSelfRef.cla__DOT__gp8_low__DOT__gp_segment_low__DOT__cin 
        = vlSelfRef.cla__DOT__gp8_low__DOT__cin;
    vlSelfRef.cla__DOT__gp8_high__DOT__gp_segment_high__DOT__pin 
        = cla__DOT__gp8_high__DOT____Vcellinp__gp_segment_high__pin;
    vlSelfRef.cla__DOT__gp8_high__DOT__gp_segment_high__DOT__pout 
        = (0xfU == (IData)(cla__DOT__gp8_high__DOT____Vcellinp__gp_segment_high__pin));
    vlSelfRef.cla__DOT__gp8_high__DOT__gp_segment_high__DOT__gout 
        = ((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__31__KET____DOT__gp_inst__DOT__g) 
           | (((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__31__KET____DOT__gp_inst__DOT__p) 
               & (IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__30__KET____DOT__gp_inst__DOT__g)) 
              | (((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__31__KET____DOT__gp_inst__DOT__p) 
                  & (IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__30__KET____DOT__gp_inst__DOT__p)) 
                 & ((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__29__KET____DOT__gp_inst__DOT__g) 
                    | (IData)(cla__DOT__gp8_high__DOT__gp_segment_high__DOT____VdfgRegularize_h7103d123_0_4)))));
    vlSelfRef.cla__DOT__gp8_high__DOT__gp_segment_low__DOT__gin 
        = cla__DOT__gp8_high__DOT____Vcellinp__gp_segment_low__gin;
    vlSelfRef.cla__DOT__gp8_high__DOT__gin = (((((((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__31__KET____DOT__gp_inst__DOT__g) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__30__KET____DOT__gp_inst__DOT__g)) 
                                                 << 2U) 
                                                | (((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__29__KET____DOT__gp_inst__DOT__g) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__28__KET____DOT__gp_inst__DOT__g))) 
                                               << 4U) 
                                              | (IData)(cla__DOT__gp8_high__DOT____Vcellinp__gp_segment_low__gin));
    vlSelfRef.cla__DOT__gp8_high__DOT__gp_segment_low__DOT__pin 
        = cla__DOT__gp8_high__DOT____Vcellinp__gp_segment_low__pin;
    vlSelfRef.cla__DOT__gp8_high__DOT__pin = (((((((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__31__KET____DOT__gp_inst__DOT__p) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__30__KET____DOT__gp_inst__DOT__p)) 
                                                 << 2U) 
                                                | (((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__29__KET____DOT__gp_inst__DOT__p) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__28__KET____DOT__gp_inst__DOT__p))) 
                                               << 4U) 
                                              | (IData)(cla__DOT__gp8_high__DOT____Vcellinp__gp_segment_low__pin));
    vlSelfRef.cla__DOT__gp8_high__DOT__gp_segment_low__DOT__pout 
        = (0xfU == (IData)(cla__DOT__gp8_high__DOT____Vcellinp__gp_segment_low__pin));
    vlSelfRef.cla__DOT__gp8_high__DOT__gp_segment_low__DOT__gout 
        = ((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__27__KET____DOT__gp_inst__DOT__g) 
           | (((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__27__KET____DOT__gp_inst__DOT__p) 
               & (IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__26__KET____DOT__gp_inst__DOT__g)) 
              | (((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__27__KET____DOT__gp_inst__DOT__p) 
                  & (IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__26__KET____DOT__gp_inst__DOT__p)) 
                 & ((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__25__KET____DOT__gp_inst__DOT__g) 
                    | (IData)(cla__DOT__gp8_high__DOT__gp_segment_low__DOT____VdfgRegularize_h7103d123_0_4)))));
    vlSelfRef.cla__DOT__gp8_mid2__DOT__gp_segment_low__DOT__gin 
        = cla__DOT__gp8_mid2__DOT____Vcellinp__gp_segment_low__gin;
    vlSelfRef.cla__DOT__gp8_mid2__DOT__gin = (((((((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__23__KET____DOT__gp_inst__DOT__g) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__22__KET____DOT__gp_inst__DOT__g)) 
                                                 << 2U) 
                                                | (((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__21__KET____DOT__gp_inst__DOT__g) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__20__KET____DOT__gp_inst__DOT__g))) 
                                               << 4U) 
                                              | (IData)(cla__DOT__gp8_mid2__DOT____Vcellinp__gp_segment_low__gin));
    vlSelfRef.cla__DOT__gp8_mid1__DOT__gp_segment_low__DOT__gin 
        = cla__DOT__gp8_mid1__DOT____Vcellinp__gp_segment_low__gin;
    vlSelfRef.cla__DOT__gp8_mid1__DOT__gin = (((((((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__15__KET____DOT__gp_inst__DOT__g) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__14__KET____DOT__gp_inst__DOT__g)) 
                                                 << 2U) 
                                                | (((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__13__KET____DOT__gp_inst__DOT__g) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__12__KET____DOT__gp_inst__DOT__g))) 
                                               << 4U) 
                                              | (IData)(cla__DOT__gp8_mid1__DOT____Vcellinp__gp_segment_low__gin));
    vlSelfRef.cla__DOT__gp8_mid2__DOT__gp_segment_low__DOT__pin 
        = cla__DOT__gp8_mid2__DOT____Vcellinp__gp_segment_low__pin;
    vlSelfRef.cla__DOT__gp8_mid2__DOT__pin = (((((((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__23__KET____DOT__gp_inst__DOT__p) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__22__KET____DOT__gp_inst__DOT__p)) 
                                                 << 2U) 
                                                | (((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__21__KET____DOT__gp_inst__DOT__p) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__20__KET____DOT__gp_inst__DOT__p))) 
                                               << 4U) 
                                              | (IData)(cla__DOT__gp8_mid2__DOT____Vcellinp__gp_segment_low__pin));
    vlSelfRef.cla__DOT__gp8_mid2__DOT__gp_segment_low__DOT__pout 
        = (0xfU == (IData)(cla__DOT__gp8_mid2__DOT____Vcellinp__gp_segment_low__pin));
    vlSelfRef.cla__DOT__gp8_mid2__DOT__gp_segment_low__DOT__gout 
        = ((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__19__KET____DOT__gp_inst__DOT__g) 
           | (((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__19__KET____DOT__gp_inst__DOT__p) 
               & (IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__18__KET____DOT__gp_inst__DOT__g)) 
              | (((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__19__KET____DOT__gp_inst__DOT__p) 
                  & (IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__18__KET____DOT__gp_inst__DOT__p)) 
                 & ((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__17__KET____DOT__gp_inst__DOT__g) 
                    | (IData)(cla__DOT__gp8_mid2__DOT__gp_segment_low__DOT____VdfgRegularize_h7103d123_0_4)))));
    vlSelfRef.cla__DOT__gp8_mid2__DOT__gp_segment_high__DOT__gout 
        = ((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__23__KET____DOT__gp_inst__DOT__g) 
           | (((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__23__KET____DOT__gp_inst__DOT__p) 
               & (IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__22__KET____DOT__gp_inst__DOT__g)) 
              | (((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__23__KET____DOT__gp_inst__DOT__p) 
                  & (IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__22__KET____DOT__gp_inst__DOT__p)) 
                 & ((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__21__KET____DOT__gp_inst__DOT__g) 
                    | (IData)(cla__DOT__gp8_mid2__DOT__gp_segment_high__DOT____VdfgRegularize_h7103d123_0_4)))));
    vlSelfRef.cla__DOT__gp8_mid2__DOT__gp_segment_high__DOT__pin 
        = cla__DOT__gp8_mid2__DOT____Vcellinp__gp_segment_high__pin;
    vlSelfRef.cla__DOT__gp8_mid2__DOT__gp_segment_high__DOT__pout 
        = (0xfU == (IData)(cla__DOT__gp8_mid2__DOT____Vcellinp__gp_segment_high__pin));
    __VdfgRegularize_hd87f99a1_0_1 = ((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__0__KET____DOT__gp_inst__DOT__g) 
                                      | (IData)(cla__DOT__gp8_low__DOT__gp_segment_low__DOT____VdfgRegularize_h7103d123_0_1));
    __VdfgRegularize_hd87f99a1_0_23 = ((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__2__KET____DOT__gp_inst__DOT__g) 
                                       | (((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__2__KET____DOT__gp_inst__DOT__p) 
                                           & (IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__1__KET____DOT__gp_inst__DOT__g)) 
                                          | (((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__2__KET____DOT__gp_inst__DOT__p) 
                                              & (IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__1__KET____DOT__gp_inst__DOT__p)) 
                                             & ((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__0__KET____DOT__gp_inst__DOT__g) 
                                                | (IData)(cla__DOT__gp8_low__DOT__gp_segment_low__DOT____VdfgRegularize_h7103d123_0_1)))));
    vlSelfRef.cla__DOT__gp8_low__DOT__gp_segment_low__DOT__gin 
        = cla__DOT__gp8_low__DOT____Vcellinp__gp_segment_low__gin;
    cla__DOT____Vcellinp__gp8_low__gin = ((((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__7__KET____DOT__gp_inst__DOT__g) 
                                            << 7U) 
                                           | ((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__6__KET____DOT__gp_inst__DOT__g) 
                                              << 6U)) 
                                          | (((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__5__KET____DOT__gp_inst__DOT__g) 
                                              << 5U) 
                                             | (((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__4__KET____DOT__gp_inst__DOT__g) 
                                                 << 4U) 
                                                | (IData)(cla__DOT__gp8_low__DOT____Vcellinp__gp_segment_low__gin))));
    vlSelfRef.cla__DOT__gp8_mid1__DOT__gp_segment_low__DOT__pin 
        = cla__DOT__gp8_mid1__DOT____Vcellinp__gp_segment_low__pin;
    vlSelfRef.cla__DOT__gp8_mid1__DOT__pin = (((((((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__15__KET____DOT__gp_inst__DOT__p) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__14__KET____DOT__gp_inst__DOT__p)) 
                                                 << 2U) 
                                                | (((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__13__KET____DOT__gp_inst__DOT__p) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__12__KET____DOT__gp_inst__DOT__p))) 
                                               << 4U) 
                                              | (IData)(cla__DOT__gp8_mid1__DOT____Vcellinp__gp_segment_low__pin));
    vlSelfRef.cla__DOT__gp8_mid1__DOT__gp_segment_low__DOT__pout 
        = (0xfU == (IData)(cla__DOT__gp8_mid1__DOT____Vcellinp__gp_segment_low__pin));
    vlSelfRef.cla__DOT__gp8_mid1__DOT__gp_segment_low__DOT__gout 
        = ((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__11__KET____DOT__gp_inst__DOT__g) 
           | (((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__11__KET____DOT__gp_inst__DOT__p) 
               & (IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__10__KET____DOT__gp_inst__DOT__g)) 
              | (((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__11__KET____DOT__gp_inst__DOT__p) 
                  & (IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__10__KET____DOT__gp_inst__DOT__p)) 
                 & ((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__9__KET____DOT__gp_inst__DOT__g) 
                    | (IData)(cla__DOT__gp8_mid1__DOT__gp_segment_low__DOT____VdfgRegularize_h7103d123_0_4)))));
    vlSelfRef.cla__DOT__gp8_mid1__DOT__gp_segment_high__DOT__gout 
        = ((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__15__KET____DOT__gp_inst__DOT__g) 
           | (((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__15__KET____DOT__gp_inst__DOT__p) 
               & (IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__14__KET____DOT__gp_inst__DOT__g)) 
              | (((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__15__KET____DOT__gp_inst__DOT__p) 
                  & (IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__14__KET____DOT__gp_inst__DOT__p)) 
                 & ((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__13__KET____DOT__gp_inst__DOT__g) 
                    | (IData)(cla__DOT__gp8_mid1__DOT__gp_segment_high__DOT____VdfgRegularize_h7103d123_0_4)))));
    vlSelfRef.cla__DOT__gp8_mid1__DOT__gp_segment_high__DOT__pin 
        = cla__DOT__gp8_mid1__DOT____Vcellinp__gp_segment_high__pin;
    vlSelfRef.cla__DOT__gp8_mid1__DOT__gp_segment_high__DOT__pout 
        = (0xfU == (IData)(cla__DOT__gp8_mid1__DOT____Vcellinp__gp_segment_high__pin));
    vlSelfRef.cla__DOT__gp8_low__DOT__gp_segment_low__DOT__pin 
        = cla__DOT__gp8_low__DOT____Vcellinp__gp_segment_low__pin;
    cla__DOT____Vcellinp__gp8_low__pin = ((((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__7__KET____DOT__gp_inst__DOT__p) 
                                            << 7U) 
                                           | ((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__6__KET____DOT__gp_inst__DOT__p) 
                                              << 6U)) 
                                          | (((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__5__KET____DOT__gp_inst__DOT__p) 
                                              << 5U) 
                                             | (((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__4__KET____DOT__gp_inst__DOT__p) 
                                                 << 4U) 
                                                | (IData)(cla__DOT__gp8_low__DOT____Vcellinp__gp_segment_low__pin))));
    vlSelfRef.cla__DOT__gp8_low__DOT__gp_segment_low__DOT__pout 
        = (0xfU == (IData)(cla__DOT__gp8_low__DOT____Vcellinp__gp_segment_low__pin));
    __VdfgRegularize_hd87f99a1_0_0 = ((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__1__KET____DOT__gp_inst__DOT__g) 
                                      | ((IData)(cla__DOT__gp8_low__DOT__gp_segment_low__DOT____VdfgRegularize_h7103d123_0_4) 
                                         | ((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__1__KET____DOT__gp_inst__DOT__p) 
                                            & (IData)(cla__DOT__gp8_low__DOT__gp_segment_low__DOT____VdfgRegularize_h7103d123_0_1))));
    vlSelfRef.cla__DOT__gp8_low__DOT__gp_segment_low__DOT__gout 
        = ((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__3__KET____DOT__gp_inst__DOT__g) 
           | (((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__3__KET____DOT__gp_inst__DOT__p) 
               & (IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__2__KET____DOT__gp_inst__DOT__g)) 
              | (((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__3__KET____DOT__gp_inst__DOT__p) 
                  & (IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__2__KET____DOT__gp_inst__DOT__p)) 
                 & ((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__1__KET____DOT__gp_inst__DOT__g) 
                    | (IData)(cla__DOT__gp8_low__DOT__gp_segment_low__DOT____VdfgRegularize_h7103d123_0_4)))));
    vlSelfRef.cla__DOT__gp8_low__DOT__gp_segment_high__DOT__gout 
        = ((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__7__KET____DOT__gp_inst__DOT__g) 
           | (((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__7__KET____DOT__gp_inst__DOT__p) 
               & (IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__6__KET____DOT__gp_inst__DOT__g)) 
              | (((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__7__KET____DOT__gp_inst__DOT__p) 
                  & (IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__6__KET____DOT__gp_inst__DOT__p)) 
                 & ((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__5__KET____DOT__gp_inst__DOT__g) 
                    | (IData)(cla__DOT__gp8_low__DOT__gp_segment_high__DOT____VdfgRegularize_h7103d123_0_4)))));
    vlSelfRef.cla__DOT__gp8_low__DOT__gp_segment_high__DOT__pin 
        = cla__DOT__gp8_low__DOT____Vcellinp__gp_segment_high__pin;
    vlSelfRef.cla__DOT__gp8_low__DOT__gp_segment_high__DOT__pout 
        = (0xfU == (IData)(cla__DOT__gp8_low__DOT____Vcellinp__gp_segment_high__pin));
    vlSelfRef.cla__DOT__gp8_high__DOT__p_upper = vlSelfRef.cla__DOT__gp8_high__DOT__gp_segment_high__DOT__pout;
    vlSelfRef.cla__DOT__gp8_high__DOT__g_upper = vlSelfRef.cla__DOT__gp8_high__DOT__gp_segment_high__DOT__gout;
    vlSelfRef.cla__DOT__gp8_high__DOT__p_lower = vlSelfRef.cla__DOT__gp8_high__DOT__gp_segment_low__DOT__pout;
    vlSelfRef.cla__DOT__gp8_high__DOT__pout = ((IData)(vlSelfRef.cla__DOT__gp8_high__DOT__gp_segment_low__DOT__pout) 
                                               & (IData)(vlSelfRef.cla__DOT__gp8_high__DOT__gp_segment_high__DOT__pout));
    vlSelfRef.cla__DOT__gp8_high__DOT__g_lower = vlSelfRef.cla__DOT__gp8_high__DOT__gp_segment_low__DOT__gout;
    vlSelfRef.cla__DOT__gp8_high__DOT__gout = ((IData)(vlSelfRef.cla__DOT__gp8_high__DOT__gp_segment_high__DOT__gout) 
                                               | ((IData)(vlSelfRef.cla__DOT__gp8_high__DOT__gp_segment_low__DOT__gout) 
                                                  & (IData)(vlSelfRef.cla__DOT__gp8_high__DOT__gp_segment_high__DOT__pout)));
    vlSelfRef.cla__DOT__gp8_mid2__DOT__p_lower = vlSelfRef.cla__DOT__gp8_mid2__DOT__gp_segment_low__DOT__pout;
    vlSelfRef.cla__DOT__gp8_mid2__DOT__g_lower = vlSelfRef.cla__DOT__gp8_mid2__DOT__gp_segment_low__DOT__gout;
    vlSelfRef.cla__DOT__gp8_mid2__DOT__g_upper = vlSelfRef.cla__DOT__gp8_mid2__DOT__gp_segment_high__DOT__gout;
    vlSelfRef.cla__DOT__gp8_mid2__DOT__p_upper = vlSelfRef.cla__DOT__gp8_mid2__DOT__gp_segment_high__DOT__pout;
    vlSelfRef.cla__DOT__gp8_mid2__DOT__pout = ((IData)(vlSelfRef.cla__DOT__gp8_mid2__DOT__gp_segment_low__DOT__pout) 
                                               & (IData)(vlSelfRef.cla__DOT__gp8_mid2__DOT__gp_segment_high__DOT__pout));
    vlSelfRef.cla__DOT__gp8_mid2__DOT__gout = ((IData)(vlSelfRef.cla__DOT__gp8_mid2__DOT__gp_segment_high__DOT__gout) 
                                               | ((IData)(vlSelfRef.cla__DOT__gp8_mid2__DOT__gp_segment_low__DOT__gout) 
                                                  & (IData)(vlSelfRef.cla__DOT__gp8_mid2__DOT__gp_segment_high__DOT__pout)));
    vlSelfRef.cla__DOT__gp8_low__DOT__gin = cla__DOT____Vcellinp__gp8_low__gin;
    vlSelfRef.cla__DOT__g = (((((((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__31__KET____DOT__gp_inst__DOT__g) 
                                  << 0x1fU) | ((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__30__KET____DOT__gp_inst__DOT__g) 
                                               << 0x1eU)) 
                                | (((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__29__KET____DOT__gp_inst__DOT__g) 
                                    << 0x1dU) | ((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__28__KET____DOT__gp_inst__DOT__g) 
                                                 << 0x1cU))) 
                               | ((((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__27__KET____DOT__gp_inst__DOT__g) 
                                    << 0x1bU) | ((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__26__KET____DOT__gp_inst__DOT__g) 
                                                 << 0x1aU)) 
                                  | (((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__25__KET____DOT__gp_inst__DOT__g) 
                                      << 0x19U) | ((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__24__KET____DOT__gp_inst__DOT__g) 
                                                   << 0x18U)))) 
                              | (((((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__23__KET____DOT__gp_inst__DOT__g) 
                                    << 0x17U) | ((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__22__KET____DOT__gp_inst__DOT__g) 
                                                 << 0x16U)) 
                                  | (((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__21__KET____DOT__gp_inst__DOT__g) 
                                      << 0x15U) | ((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__20__KET____DOT__gp_inst__DOT__g) 
                                                   << 0x14U))) 
                                 | ((((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__19__KET____DOT__gp_inst__DOT__g) 
                                      << 0x13U) | ((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__18__KET____DOT__gp_inst__DOT__g) 
                                                   << 0x12U)) 
                                    | (((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__17__KET____DOT__gp_inst__DOT__g) 
                                        << 0x11U) | 
                                       ((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__16__KET____DOT__gp_inst__DOT__g) 
                                        << 0x10U))))) 
                             | (((((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__15__KET____DOT__gp_inst__DOT__g) 
                                   << 0xfU) | ((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__14__KET____DOT__gp_inst__DOT__g) 
                                               << 0xeU)) 
                                 | (((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__13__KET____DOT__gp_inst__DOT__g) 
                                     << 0xdU) | ((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__12__KET____DOT__gp_inst__DOT__g) 
                                                 << 0xcU))) 
                                | ((((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__11__KET____DOT__gp_inst__DOT__g) 
                                     << 0xbU) | ((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__10__KET____DOT__gp_inst__DOT__g) 
                                                 << 0xaU)) 
                                   | (((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__9__KET____DOT__gp_inst__DOT__g) 
                                       << 9U) | (((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__8__KET____DOT__gp_inst__DOT__g) 
                                                  << 8U) 
                                                 | (IData)(cla__DOT____Vcellinp__gp8_low__gin))))));
    vlSelfRef.cla__DOT__gp8_mid1__DOT__p_lower = vlSelfRef.cla__DOT__gp8_mid1__DOT__gp_segment_low__DOT__pout;
    vlSelfRef.cla__DOT__gp8_mid1__DOT__g_lower = vlSelfRef.cla__DOT__gp8_mid1__DOT__gp_segment_low__DOT__gout;
    vlSelfRef.cla__DOT__gp8_mid1__DOT__g_upper = vlSelfRef.cla__DOT__gp8_mid1__DOT__gp_segment_high__DOT__gout;
    vlSelfRef.cla__DOT__gp8_mid1__DOT__p_upper = vlSelfRef.cla__DOT__gp8_mid1__DOT__gp_segment_high__DOT__pout;
    vlSelfRef.cla__DOT__gp8_mid1__DOT__pout = ((IData)(vlSelfRef.cla__DOT__gp8_mid1__DOT__gp_segment_low__DOT__pout) 
                                               & (IData)(vlSelfRef.cla__DOT__gp8_mid1__DOT__gp_segment_high__DOT__pout));
    vlSelfRef.cla__DOT__gp8_mid1__DOT__gout = ((IData)(vlSelfRef.cla__DOT__gp8_mid1__DOT__gp_segment_high__DOT__gout) 
                                               | ((IData)(vlSelfRef.cla__DOT__gp8_mid1__DOT__gp_segment_low__DOT__gout) 
                                                  & (IData)(vlSelfRef.cla__DOT__gp8_mid1__DOT__gp_segment_high__DOT__pout)));
    vlSelfRef.cla__DOT__gp8_low__DOT__pin = cla__DOT____Vcellinp__gp8_low__pin;
    vlSelfRef.cla__DOT__p = (((((((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__31__KET____DOT__gp_inst__DOT__p) 
                                  << 0x1fU) | ((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__30__KET____DOT__gp_inst__DOT__p) 
                                               << 0x1eU)) 
                                | (((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__29__KET____DOT__gp_inst__DOT__p) 
                                    << 0x1dU) | ((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__28__KET____DOT__gp_inst__DOT__p) 
                                                 << 0x1cU))) 
                               | ((((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__27__KET____DOT__gp_inst__DOT__p) 
                                    << 0x1bU) | ((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__26__KET____DOT__gp_inst__DOT__p) 
                                                 << 0x1aU)) 
                                  | (((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__25__KET____DOT__gp_inst__DOT__p) 
                                      << 0x19U) | ((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__24__KET____DOT__gp_inst__DOT__p) 
                                                   << 0x18U)))) 
                              | (((((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__23__KET____DOT__gp_inst__DOT__p) 
                                    << 0x17U) | ((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__22__KET____DOT__gp_inst__DOT__p) 
                                                 << 0x16U)) 
                                  | (((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__21__KET____DOT__gp_inst__DOT__p) 
                                      << 0x15U) | ((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__20__KET____DOT__gp_inst__DOT__p) 
                                                   << 0x14U))) 
                                 | ((((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__19__KET____DOT__gp_inst__DOT__p) 
                                      << 0x13U) | ((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__18__KET____DOT__gp_inst__DOT__p) 
                                                   << 0x12U)) 
                                    | (((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__17__KET____DOT__gp_inst__DOT__p) 
                                        << 0x11U) | 
                                       ((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__16__KET____DOT__gp_inst__DOT__p) 
                                        << 0x10U))))) 
                             | (((((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__15__KET____DOT__gp_inst__DOT__p) 
                                   << 0xfU) | ((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__14__KET____DOT__gp_inst__DOT__p) 
                                               << 0xeU)) 
                                 | (((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__13__KET____DOT__gp_inst__DOT__p) 
                                     << 0xdU) | ((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__12__KET____DOT__gp_inst__DOT__p) 
                                                 << 0xcU))) 
                                | ((((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__11__KET____DOT__gp_inst__DOT__p) 
                                     << 0xbU) | ((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__10__KET____DOT__gp_inst__DOT__p) 
                                                 << 0xaU)) 
                                   | (((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__9__KET____DOT__gp_inst__DOT__p) 
                                       << 9U) | (((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__8__KET____DOT__gp_inst__DOT__p) 
                                                  << 8U) 
                                                 | (IData)(cla__DOT____Vcellinp__gp8_low__pin))))));
    vlSelfRef.cla__DOT__gp8_low__DOT__p_lower = vlSelfRef.cla__DOT__gp8_low__DOT__gp_segment_low__DOT__pout;
    vlSelfRef.cla__DOT__gp8_low__DOT__gp_segment_low__DOT__cout 
        = (((IData)(__VdfgRegularize_hd87f99a1_0_23) 
            << 2U) | (((IData)(__VdfgRegularize_hd87f99a1_0_0) 
                       << 1U) | (IData)(__VdfgRegularize_hd87f99a1_0_1)));
    vlSelfRef.cla__DOT__gp8_low__DOT__g_lower = vlSelfRef.cla__DOT__gp8_low__DOT__gp_segment_low__DOT__gout;
    vlSelfRef.cla__DOT__gp8_low__DOT__c_mid = ((IData)(vlSelfRef.cla__DOT__gp8_low__DOT__gp_segment_low__DOT__gout) 
                                               | ((IData)(vlSelfRef.cin) 
                                                  & (IData)(vlSelfRef.cla__DOT__gp8_low__DOT__gp_segment_low__DOT__pout)));
    vlSelfRef.cla__DOT__gp8_low__DOT__g_upper = vlSelfRef.cla__DOT__gp8_low__DOT__gp_segment_high__DOT__gout;
    vlSelfRef.cla__DOT__gp8_low__DOT__p_upper = vlSelfRef.cla__DOT__gp8_low__DOT__gp_segment_high__DOT__pout;
    vlSelfRef.cla__DOT__gp8_low__DOT__pout = ((IData)(vlSelfRef.cla__DOT__gp8_low__DOT__gp_segment_low__DOT__pout) 
                                              & (IData)(vlSelfRef.cla__DOT__gp8_low__DOT__gp_segment_high__DOT__pout));
    vlSelfRef.cla__DOT__gp8_low__DOT__gout = ((IData)(vlSelfRef.cla__DOT__gp8_low__DOT__gp_segment_high__DOT__gout) 
                                              | ((IData)(vlSelfRef.cla__DOT__gp8_low__DOT__gp_segment_low__DOT__gout) 
                                                 & (IData)(vlSelfRef.cla__DOT__gp8_low__DOT__gp_segment_high__DOT__pout)));
    vlSelfRef.cla__DOT__gp8_low__DOT__gp_segment_high__DOT__cin 
        = vlSelfRef.cla__DOT__gp8_low__DOT__c_mid;
    cla__DOT__gp8_low__DOT__gp_segment_high__DOT____VdfgRegularize_h7103d123_0_1 
        = ((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__4__KET____DOT__gp_inst__DOT__p) 
           & (IData)(vlSelfRef.cla__DOT__gp8_low__DOT__c_mid));
    vlSelfRef.cla__DOT__pout = ((((IData)(vlSelfRef.cla__DOT__gp8_high__DOT__pout) 
                                  << 3U) | ((IData)(vlSelfRef.cla__DOT__gp8_mid2__DOT__pout) 
                                            << 2U)) 
                                | (((IData)(vlSelfRef.cla__DOT__gp8_mid1__DOT__pout) 
                                    << 1U) | (IData)(vlSelfRef.cla__DOT__gp8_low__DOT__pout)));
    vlSelfRef.cla__DOT__gout = ((((IData)(vlSelfRef.cla__DOT__gp8_high__DOT__gout) 
                                  << 3U) | ((IData)(vlSelfRef.cla__DOT__gp8_mid2__DOT__gout) 
                                            << 2U)) 
                                | (((IData)(vlSelfRef.cla__DOT__gp8_mid1__DOT__gout) 
                                    << 1U) | (IData)(vlSelfRef.cla__DOT__gp8_low__DOT__gout)));
    vlSelfRef.cla__DOT__c8 = ((IData)(vlSelfRef.cla__DOT__gp8_low__DOT__gout) 
                              | ((IData)(vlSelfRef.cla__DOT__gp8_low__DOT__pout) 
                                 & (IData)(vlSelfRef.cin)));
    __VdfgRegularize_hd87f99a1_0_3 = ((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__4__KET____DOT__gp_inst__DOT__g) 
                                      | (IData)(cla__DOT__gp8_low__DOT__gp_segment_high__DOT____VdfgRegularize_h7103d123_0_1));
    __VdfgRegularize_hd87f99a1_0_2 = ((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__5__KET____DOT__gp_inst__DOT__g) 
                                      | ((IData)(cla__DOT__gp8_low__DOT__gp_segment_high__DOT____VdfgRegularize_h7103d123_0_4) 
                                         | ((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__5__KET____DOT__gp_inst__DOT__p) 
                                            & (IData)(cla__DOT__gp8_low__DOT__gp_segment_high__DOT____VdfgRegularize_h7103d123_0_1))));
    __VdfgRegularize_hd87f99a1_0_22 = ((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__6__KET____DOT__gp_inst__DOT__g) 
                                       | (((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__6__KET____DOT__gp_inst__DOT__p) 
                                           & (IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__5__KET____DOT__gp_inst__DOT__g)) 
                                          | (((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__6__KET____DOT__gp_inst__DOT__p) 
                                              & (IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__5__KET____DOT__gp_inst__DOT__p)) 
                                             & ((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__4__KET____DOT__gp_inst__DOT__g) 
                                                | (IData)(cla__DOT__gp8_low__DOT__gp_segment_high__DOT____VdfgRegularize_h7103d123_0_1)))));
    vlSelfRef.cla__DOT__gp8_mid1__DOT__cin = vlSelfRef.cla__DOT__c8;
    cla__DOT__gp8_mid1__DOT__gp_segment_low__DOT____VdfgRegularize_h7103d123_0_1 
        = ((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__8__KET____DOT__gp_inst__DOT__p) 
           & (IData)(vlSelfRef.cla__DOT__c8));
    vlSelfRef.cla__DOT__gp8_mid1__DOT__c_mid = ((IData)(vlSelfRef.cla__DOT__gp8_mid1__DOT__gp_segment_low__DOT__gout) 
                                                | ((IData)(vlSelfRef.cla__DOT__c8) 
                                                   & (IData)(vlSelfRef.cla__DOT__gp8_mid1__DOT__gp_segment_low__DOT__pout)));
    vlSelfRef.cla__DOT__c16 = ((IData)(vlSelfRef.cla__DOT__gp8_mid1__DOT__gout) 
                               | ((IData)(vlSelfRef.cla__DOT__gp8_mid1__DOT__pout) 
                                  & (IData)(vlSelfRef.cla__DOT__c8)));
    vlSelfRef.cla__DOT__gp8_low__DOT__gp_segment_high__DOT__cout 
        = (((IData)(__VdfgRegularize_hd87f99a1_0_22) 
            << 2U) | (((IData)(__VdfgRegularize_hd87f99a1_0_2) 
                       << 1U) | (IData)(__VdfgRegularize_hd87f99a1_0_3)));
    vlSelfRef.cla__DOT__gp8_mid1__DOT__gp_segment_low__DOT__cin 
        = vlSelfRef.cla__DOT__gp8_mid1__DOT__cin;
    __VdfgRegularize_hd87f99a1_0_5 = ((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__8__KET____DOT__gp_inst__DOT__g) 
                                      | (IData)(cla__DOT__gp8_mid1__DOT__gp_segment_low__DOT____VdfgRegularize_h7103d123_0_1));
    __VdfgRegularize_hd87f99a1_0_4 = ((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__9__KET____DOT__gp_inst__DOT__g) 
                                      | ((IData)(cla__DOT__gp8_mid1__DOT__gp_segment_low__DOT____VdfgRegularize_h7103d123_0_4) 
                                         | ((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__9__KET____DOT__gp_inst__DOT__p) 
                                            & (IData)(cla__DOT__gp8_mid1__DOT__gp_segment_low__DOT____VdfgRegularize_h7103d123_0_1))));
    __VdfgRegularize_hd87f99a1_0_21 = ((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__10__KET____DOT__gp_inst__DOT__g) 
                                       | (((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__10__KET____DOT__gp_inst__DOT__p) 
                                           & (IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__9__KET____DOT__gp_inst__DOT__g)) 
                                          | (((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__10__KET____DOT__gp_inst__DOT__p) 
                                              & (IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__9__KET____DOT__gp_inst__DOT__p)) 
                                             & ((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__8__KET____DOT__gp_inst__DOT__g) 
                                                | (IData)(cla__DOT__gp8_mid1__DOT__gp_segment_low__DOT____VdfgRegularize_h7103d123_0_1)))));
    vlSelfRef.cla__DOT__gp8_mid1__DOT__gp_segment_high__DOT__cin 
        = vlSelfRef.cla__DOT__gp8_mid1__DOT__c_mid;
    cla__DOT__gp8_mid1__DOT__gp_segment_high__DOT____VdfgRegularize_h7103d123_0_1 
        = ((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__12__KET____DOT__gp_inst__DOT__p) 
           & (IData)(vlSelfRef.cla__DOT__gp8_mid1__DOT__c_mid));
    vlSelfRef.cla__DOT__gp8_mid2__DOT__cin = vlSelfRef.cla__DOT__c16;
    cla__DOT__gp8_mid2__DOT__gp_segment_low__DOT____VdfgRegularize_h7103d123_0_1 
        = ((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__16__KET____DOT__gp_inst__DOT__p) 
           & (IData)(vlSelfRef.cla__DOT__c16));
    vlSelfRef.cla__DOT__gp8_mid2__DOT__c_mid = ((IData)(vlSelfRef.cla__DOT__gp8_mid2__DOT__gp_segment_low__DOT__gout) 
                                                | ((IData)(vlSelfRef.cla__DOT__c16) 
                                                   & (IData)(vlSelfRef.cla__DOT__gp8_mid2__DOT__gp_segment_low__DOT__pout)));
    vlSelfRef.cla__DOT__c24 = ((IData)(vlSelfRef.cla__DOT__gp8_mid2__DOT__gout) 
                               | ((IData)(vlSelfRef.cla__DOT__gp8_mid2__DOT__pout) 
                                  & (IData)(vlSelfRef.cla__DOT__c16)));
    vlSelfRef.cla__DOT__gp8_low__DOT__cout = (((IData)(vlSelfRef.cla__DOT__gp8_low__DOT__gp_segment_high__DOT__cout) 
                                               << 4U) 
                                              | (((IData)(vlSelfRef.cla__DOT__gp8_low__DOT__c_mid) 
                                                  << 3U) 
                                                 | (IData)(vlSelfRef.cla__DOT__gp8_low__DOT__gp_segment_low__DOT__cout)));
    vlSelfRef.cla__DOT__gp8_mid1__DOT__gp_segment_low__DOT__cout 
        = (((IData)(__VdfgRegularize_hd87f99a1_0_21) 
            << 2U) | (((IData)(__VdfgRegularize_hd87f99a1_0_4) 
                       << 1U) | (IData)(__VdfgRegularize_hd87f99a1_0_5)));
    __VdfgRegularize_hd87f99a1_0_7 = ((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__12__KET____DOT__gp_inst__DOT__g) 
                                      | (IData)(cla__DOT__gp8_mid1__DOT__gp_segment_high__DOT____VdfgRegularize_h7103d123_0_1));
    __VdfgRegularize_hd87f99a1_0_6 = ((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__13__KET____DOT__gp_inst__DOT__g) 
                                      | ((IData)(cla__DOT__gp8_mid1__DOT__gp_segment_high__DOT____VdfgRegularize_h7103d123_0_4) 
                                         | ((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__13__KET____DOT__gp_inst__DOT__p) 
                                            & (IData)(cla__DOT__gp8_mid1__DOT__gp_segment_high__DOT____VdfgRegularize_h7103d123_0_1))));
    __VdfgRegularize_hd87f99a1_0_20 = ((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__14__KET____DOT__gp_inst__DOT__g) 
                                       | (((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__14__KET____DOT__gp_inst__DOT__p) 
                                           & (IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__13__KET____DOT__gp_inst__DOT__g)) 
                                          | (((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__14__KET____DOT__gp_inst__DOT__p) 
                                              & (IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__13__KET____DOT__gp_inst__DOT__p)) 
                                             & ((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__12__KET____DOT__gp_inst__DOT__g) 
                                                | (IData)(cla__DOT__gp8_mid1__DOT__gp_segment_high__DOT____VdfgRegularize_h7103d123_0_1)))));
    vlSelfRef.cla__DOT__gp8_mid2__DOT__gp_segment_low__DOT__cin 
        = vlSelfRef.cla__DOT__gp8_mid2__DOT__cin;
    __VdfgRegularize_hd87f99a1_0_9 = ((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__16__KET____DOT__gp_inst__DOT__g) 
                                      | (IData)(cla__DOT__gp8_mid2__DOT__gp_segment_low__DOT____VdfgRegularize_h7103d123_0_1));
    __VdfgRegularize_hd87f99a1_0_8 = ((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__17__KET____DOT__gp_inst__DOT__g) 
                                      | ((IData)(cla__DOT__gp8_mid2__DOT__gp_segment_low__DOT____VdfgRegularize_h7103d123_0_4) 
                                         | ((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__17__KET____DOT__gp_inst__DOT__p) 
                                            & (IData)(cla__DOT__gp8_mid2__DOT__gp_segment_low__DOT____VdfgRegularize_h7103d123_0_1))));
    __VdfgRegularize_hd87f99a1_0_19 = ((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__18__KET____DOT__gp_inst__DOT__g) 
                                       | (((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__18__KET____DOT__gp_inst__DOT__p) 
                                           & (IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__17__KET____DOT__gp_inst__DOT__g)) 
                                          | (((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__18__KET____DOT__gp_inst__DOT__p) 
                                              & (IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__17__KET____DOT__gp_inst__DOT__p)) 
                                             & ((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__16__KET____DOT__gp_inst__DOT__g) 
                                                | (IData)(cla__DOT__gp8_mid2__DOT__gp_segment_low__DOT____VdfgRegularize_h7103d123_0_1)))));
    vlSelfRef.cla__DOT__gp8_mid2__DOT__gp_segment_high__DOT__cin 
        = vlSelfRef.cla__DOT__gp8_mid2__DOT__c_mid;
    cla__DOT__gp8_mid2__DOT__gp_segment_high__DOT____VdfgRegularize_h7103d123_0_1 
        = ((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__20__KET____DOT__gp_inst__DOT__p) 
           & (IData)(vlSelfRef.cla__DOT__gp8_mid2__DOT__c_mid));
    vlSelfRef.cla__DOT__gp8_high__DOT__cin = vlSelfRef.cla__DOT__c24;
    cla__DOT__gp8_high__DOT__gp_segment_low__DOT____VdfgRegularize_h7103d123_0_1 
        = ((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__24__KET____DOT__gp_inst__DOT__p) 
           & (IData)(vlSelfRef.cla__DOT__c24));
    vlSelfRef.cla__DOT__gp8_high__DOT__c_mid = ((IData)(vlSelfRef.cla__DOT__gp8_high__DOT__gp_segment_low__DOT__gout) 
                                                | ((IData)(vlSelfRef.cla__DOT__c24) 
                                                   & (IData)(vlSelfRef.cla__DOT__gp8_high__DOT__gp_segment_low__DOT__pout)));
    vlSelfRef.cla__DOT__gp8_mid1__DOT__gp_segment_high__DOT__cout 
        = (((IData)(__VdfgRegularize_hd87f99a1_0_20) 
            << 2U) | (((IData)(__VdfgRegularize_hd87f99a1_0_6) 
                       << 1U) | (IData)(__VdfgRegularize_hd87f99a1_0_7)));
    vlSelfRef.cla__DOT__gp8_mid2__DOT__gp_segment_low__DOT__cout 
        = (((IData)(__VdfgRegularize_hd87f99a1_0_19) 
            << 2U) | (((IData)(__VdfgRegularize_hd87f99a1_0_8) 
                       << 1U) | (IData)(__VdfgRegularize_hd87f99a1_0_9)));
    __VdfgRegularize_hd87f99a1_0_11 = ((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__20__KET____DOT__gp_inst__DOT__g) 
                                       | (IData)(cla__DOT__gp8_mid2__DOT__gp_segment_high__DOT____VdfgRegularize_h7103d123_0_1));
    __VdfgRegularize_hd87f99a1_0_10 = ((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__21__KET____DOT__gp_inst__DOT__g) 
                                       | ((IData)(cla__DOT__gp8_mid2__DOT__gp_segment_high__DOT____VdfgRegularize_h7103d123_0_4) 
                                          | ((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__21__KET____DOT__gp_inst__DOT__p) 
                                             & (IData)(cla__DOT__gp8_mid2__DOT__gp_segment_high__DOT____VdfgRegularize_h7103d123_0_1))));
    __VdfgRegularize_hd87f99a1_0_18 = ((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__22__KET____DOT__gp_inst__DOT__g) 
                                       | (((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__22__KET____DOT__gp_inst__DOT__p) 
                                           & (IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__21__KET____DOT__gp_inst__DOT__g)) 
                                          | (((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__22__KET____DOT__gp_inst__DOT__p) 
                                              & (IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__21__KET____DOT__gp_inst__DOT__p)) 
                                             & ((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__20__KET____DOT__gp_inst__DOT__g) 
                                                | (IData)(cla__DOT__gp8_mid2__DOT__gp_segment_high__DOT____VdfgRegularize_h7103d123_0_1)))));
    vlSelfRef.cla__DOT__gp8_high__DOT__gp_segment_low__DOT__cin 
        = vlSelfRef.cla__DOT__gp8_high__DOT__cin;
    __VdfgRegularize_hd87f99a1_0_13 = ((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__24__KET____DOT__gp_inst__DOT__g) 
                                       | (IData)(cla__DOT__gp8_high__DOT__gp_segment_low__DOT____VdfgRegularize_h7103d123_0_1));
    __VdfgRegularize_hd87f99a1_0_12 = ((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__25__KET____DOT__gp_inst__DOT__g) 
                                       | ((IData)(cla__DOT__gp8_high__DOT__gp_segment_low__DOT____VdfgRegularize_h7103d123_0_4) 
                                          | ((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__25__KET____DOT__gp_inst__DOT__p) 
                                             & (IData)(cla__DOT__gp8_high__DOT__gp_segment_low__DOT____VdfgRegularize_h7103d123_0_1))));
    __VdfgRegularize_hd87f99a1_0_17 = ((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__26__KET____DOT__gp_inst__DOT__g) 
                                       | (((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__26__KET____DOT__gp_inst__DOT__p) 
                                           & (IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__25__KET____DOT__gp_inst__DOT__g)) 
                                          | (((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__26__KET____DOT__gp_inst__DOT__p) 
                                              & (IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__25__KET____DOT__gp_inst__DOT__p)) 
                                             & ((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__24__KET____DOT__gp_inst__DOT__g) 
                                                | (IData)(cla__DOT__gp8_high__DOT__gp_segment_low__DOT____VdfgRegularize_h7103d123_0_1)))));
    vlSelfRef.cla__DOT__gp8_high__DOT__gp_segment_high__DOT__cin 
        = vlSelfRef.cla__DOT__gp8_high__DOT__c_mid;
    cla__DOT__gp8_high__DOT__gp_segment_high__DOT____VdfgRegularize_h7103d123_0_1 
        = ((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__28__KET____DOT__gp_inst__DOT__p) 
           & (IData)(vlSelfRef.cla__DOT__gp8_high__DOT__c_mid));
    vlSelfRef.cla__DOT__gp8_mid1__DOT__cout = (((IData)(vlSelfRef.cla__DOT__gp8_mid1__DOT__gp_segment_high__DOT__cout) 
                                                << 4U) 
                                               | (((IData)(vlSelfRef.cla__DOT__gp8_mid1__DOT__c_mid) 
                                                   << 3U) 
                                                  | (IData)(vlSelfRef.cla__DOT__gp8_mid1__DOT__gp_segment_low__DOT__cout)));
    vlSelfRef.cla__DOT__gp8_mid2__DOT__gp_segment_high__DOT__cout 
        = (((IData)(__VdfgRegularize_hd87f99a1_0_18) 
            << 2U) | (((IData)(__VdfgRegularize_hd87f99a1_0_10) 
                       << 1U) | (IData)(__VdfgRegularize_hd87f99a1_0_11)));
    vlSelfRef.cla__DOT__gp8_high__DOT__gp_segment_low__DOT__cout 
        = (((IData)(__VdfgRegularize_hd87f99a1_0_17) 
            << 2U) | (((IData)(__VdfgRegularize_hd87f99a1_0_12) 
                       << 1U) | (IData)(__VdfgRegularize_hd87f99a1_0_13)));
    __VdfgRegularize_hd87f99a1_0_15 = ((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__28__KET____DOT__gp_inst__DOT__g) 
                                       | (IData)(cla__DOT__gp8_high__DOT__gp_segment_high__DOT____VdfgRegularize_h7103d123_0_1));
    __VdfgRegularize_hd87f99a1_0_14 = ((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__29__KET____DOT__gp_inst__DOT__g) 
                                       | ((IData)(cla__DOT__gp8_high__DOT__gp_segment_high__DOT____VdfgRegularize_h7103d123_0_4) 
                                          | ((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__29__KET____DOT__gp_inst__DOT__p) 
                                             & (IData)(cla__DOT__gp8_high__DOT__gp_segment_high__DOT____VdfgRegularize_h7103d123_0_1))));
    __VdfgRegularize_hd87f99a1_0_16 = ((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__30__KET____DOT__gp_inst__DOT__g) 
                                       | (((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__30__KET____DOT__gp_inst__DOT__p) 
                                           & (IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__29__KET____DOT__gp_inst__DOT__g)) 
                                          | (((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__30__KET____DOT__gp_inst__DOT__p) 
                                              & (IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__29__KET____DOT__gp_inst__DOT__p)) 
                                             & ((IData)(vlSelfRef.cla__DOT__gp1_loop__BRA__28__KET____DOT__gp_inst__DOT__g) 
                                                | (IData)(cla__DOT__gp8_high__DOT__gp_segment_high__DOT____VdfgRegularize_h7103d123_0_1)))));
    vlSelfRef.cla__DOT__gp8_mid2__DOT__cout = (((IData)(vlSelfRef.cla__DOT__gp8_mid2__DOT__gp_segment_high__DOT__cout) 
                                                << 4U) 
                                               | (((IData)(vlSelfRef.cla__DOT__gp8_mid2__DOT__c_mid) 
                                                   << 3U) 
                                                  | (IData)(vlSelfRef.cla__DOT__gp8_mid2__DOT__gp_segment_low__DOT__cout)));
    vlSelfRef.cla__DOT__gp8_high__DOT__gp_segment_high__DOT__cout 
        = (((IData)(__VdfgRegularize_hd87f99a1_0_16) 
            << 2U) | (((IData)(__VdfgRegularize_hd87f99a1_0_14) 
                       << 1U) | (IData)(__VdfgRegularize_hd87f99a1_0_15)));
    vlSelfRef.cla__DOT__sum = (((((((0x80000000U & 
                                     (vlSelfRef.a ^ vlSelfRef.b)) 
                                    ^ ((IData)(__VdfgRegularize_hd87f99a1_0_16) 
                                       << 0x1fU)) | 
                                   (0x40000000U & (
                                                   (0xc0000000U 
                                                    & vlSelfRef.a) 
                                                   ^ 
                                                   ((0xc0000000U 
                                                     & vlSelfRef.b) 
                                                    ^ 
                                                    ((IData)(__VdfgRegularize_hd87f99a1_0_14) 
                                                     << 0x1eU))))) 
                                  | ((0x20000000U & 
                                      ((0xe0000000U 
                                        & vlSelfRef.a) 
                                       ^ ((0xe0000000U 
                                           & vlSelfRef.b) 
                                          ^ ((IData)(__VdfgRegularize_hd87f99a1_0_15) 
                                             << 0x1dU)))) 
                                     | (0x10000000U 
                                        & ((0xf0000000U 
                                            & vlSelfRef.a) 
                                           ^ ((0xf0000000U 
                                               & vlSelfRef.b) 
                                              ^ ((IData)(vlSelfRef.cla__DOT__gp8_high__DOT__c_mid) 
                                                 << 0x1cU)))))) 
                                 | (((0x8000000U & 
                                      ((0xf8000000U 
                                        & vlSelfRef.a) 
                                       ^ ((0xf8000000U 
                                           & vlSelfRef.b) 
                                          ^ ((IData)(__VdfgRegularize_hd87f99a1_0_17) 
                                             << 0x1bU)))) 
                                     | (0x4000000U 
                                        & ((0xfc000000U 
                                            & vlSelfRef.a) 
                                           ^ ((0xfc000000U 
                                               & vlSelfRef.b) 
                                              ^ ((IData)(__VdfgRegularize_hd87f99a1_0_12) 
                                                 << 0x1aU))))) 
                                    | ((0x2000000U 
                                        & ((0xfe000000U 
                                            & vlSelfRef.a) 
                                           ^ ((0xfe000000U 
                                               & vlSelfRef.b) 
                                              ^ ((IData)(__VdfgRegularize_hd87f99a1_0_13) 
                                                 << 0x19U)))) 
                                       | (0x1000000U 
                                          & ((0xff000000U 
                                              & vlSelfRef.a) 
                                             ^ ((0xff000000U 
                                                 & vlSelfRef.b) 
                                                ^ ((IData)(vlSelfRef.cla__DOT__c24) 
                                                   << 0x18U))))))) 
                                | ((((0x800000U & (
                                                   (0xff800000U 
                                                    & vlSelfRef.a) 
                                                   ^ 
                                                   ((0xff800000U 
                                                     & vlSelfRef.b) 
                                                    ^ 
                                                    ((IData)(__VdfgRegularize_hd87f99a1_0_18) 
                                                     << 0x17U)))) 
                                     | (0x400000U & 
                                        ((0xffc00000U 
                                          & vlSelfRef.a) 
                                         ^ ((0xffc00000U 
                                             & vlSelfRef.b) 
                                            ^ ((IData)(__VdfgRegularize_hd87f99a1_0_10) 
                                               << 0x16U))))) 
                                    | ((0x200000U & 
                                        ((0xffe00000U 
                                          & vlSelfRef.a) 
                                         ^ ((0xffe00000U 
                                             & vlSelfRef.b) 
                                            ^ ((IData)(__VdfgRegularize_hd87f99a1_0_11) 
                                               << 0x15U)))) 
                                       | (0x100000U 
                                          & ((0xfff00000U 
                                              & vlSelfRef.a) 
                                             ^ ((0xfff00000U 
                                                 & vlSelfRef.b) 
                                                ^ ((IData)(vlSelfRef.cla__DOT__gp8_mid2__DOT__c_mid) 
                                                   << 0x14U)))))) 
                                   | (((0x80000U & 
                                        ((0xfff80000U 
                                          & vlSelfRef.a) 
                                         ^ ((0xfff80000U 
                                             & vlSelfRef.b) 
                                            ^ ((IData)(__VdfgRegularize_hd87f99a1_0_19) 
                                               << 0x13U)))) 
                                       | (0x40000U 
                                          & ((0xfffc0000U 
                                              & vlSelfRef.a) 
                                             ^ ((0xfffc0000U 
                                                 & vlSelfRef.b) 
                                                ^ ((IData)(__VdfgRegularize_hd87f99a1_0_8) 
                                                   << 0x12U))))) 
                                      | ((0x20000U 
                                          & ((0xfffe0000U 
                                              & vlSelfRef.a) 
                                             ^ ((0xfffe0000U 
                                                 & vlSelfRef.b) 
                                                ^ ((IData)(__VdfgRegularize_hd87f99a1_0_9) 
                                                   << 0x11U)))) 
                                         | (0x10000U 
                                            & ((0xffff0000U 
                                                & vlSelfRef.a) 
                                               ^ ((0xffff0000U 
                                                   & vlSelfRef.b) 
                                                  ^ 
                                                  ((IData)(vlSelfRef.cla__DOT__c16) 
                                                   << 0x10U)))))))) 
                               | (((((0x8000U & ((0xffff8000U 
                                                  & vlSelfRef.a) 
                                                 ^ 
                                                 ((0xffff8000U 
                                                   & vlSelfRef.b) 
                                                  ^ 
                                                  ((IData)(__VdfgRegularize_hd87f99a1_0_20) 
                                                   << 0xfU)))) 
                                     | (0x4000U & (
                                                   (0xffffc000U 
                                                    & vlSelfRef.a) 
                                                   ^ 
                                                   ((0xffffc000U 
                                                     & vlSelfRef.b) 
                                                    ^ 
                                                    ((IData)(__VdfgRegularize_hd87f99a1_0_6) 
                                                     << 0xeU))))) 
                                    | ((0x2000U & (
                                                   (0xffffe000U 
                                                    & vlSelfRef.a) 
                                                   ^ 
                                                   ((0xffffe000U 
                                                     & vlSelfRef.b) 
                                                    ^ 
                                                    ((IData)(__VdfgRegularize_hd87f99a1_0_7) 
                                                     << 0xdU)))) 
                                       | (0x1000U & 
                                          ((0xfffff000U 
                                            & vlSelfRef.a) 
                                           ^ ((0xfffff000U 
                                               & vlSelfRef.b) 
                                              ^ ((IData)(vlSelfRef.cla__DOT__gp8_mid1__DOT__c_mid) 
                                                 << 0xcU)))))) 
                                   | (((0x800U & ((0xfffff800U 
                                                   & vlSelfRef.a) 
                                                  ^ 
                                                  ((0xfffff800U 
                                                    & vlSelfRef.b) 
                                                   ^ 
                                                   ((IData)(__VdfgRegularize_hd87f99a1_0_21) 
                                                    << 0xbU)))) 
                                       | (0x400U & 
                                          ((0xfffffc00U 
                                            & vlSelfRef.a) 
                                           ^ ((0xfffffc00U 
                                               & vlSelfRef.b) 
                                              ^ ((IData)(__VdfgRegularize_hd87f99a1_0_4) 
                                                 << 0xaU))))) 
                                      | ((0x200U & 
                                          ((0xfffffe00U 
                                            & vlSelfRef.a) 
                                           ^ ((0xfffffe00U 
                                               & vlSelfRef.b) 
                                              ^ ((IData)(__VdfgRegularize_hd87f99a1_0_5) 
                                                 << 9U)))) 
                                         | (0x100U 
                                            & ((0xffffff00U 
                                                & vlSelfRef.a) 
                                               ^ ((0xffffff00U 
                                                   & vlSelfRef.b) 
                                                  ^ 
                                                  ((IData)(vlSelfRef.cla__DOT__c8) 
                                                   << 8U))))))) 
                                  | ((((0x80U & ((0xffffff80U 
                                                  & vlSelfRef.a) 
                                                 ^ 
                                                 ((0xffffff80U 
                                                   & vlSelfRef.b) 
                                                  ^ 
                                                  ((IData)(__VdfgRegularize_hd87f99a1_0_22) 
                                                   << 7U)))) 
                                       | (0x40U & (
                                                   (0xffffffc0U 
                                                    & vlSelfRef.a) 
                                                   ^ 
                                                   ((0xffffffc0U 
                                                     & vlSelfRef.b) 
                                                    ^ 
                                                    ((IData)(__VdfgRegularize_hd87f99a1_0_2) 
                                                     << 6U))))) 
                                      | ((0x20U & (
                                                   (0xffffffe0U 
                                                    & vlSelfRef.a) 
                                                   ^ 
                                                   ((0xffffffe0U 
                                                     & vlSelfRef.b) 
                                                    ^ 
                                                    ((IData)(__VdfgRegularize_hd87f99a1_0_3) 
                                                     << 5U)))) 
                                         | (0x10U & 
                                            ((0xfffffff0U 
                                              & vlSelfRef.a) 
                                             ^ ((0xfffffff0U 
                                                 & vlSelfRef.b) 
                                                ^ ((IData)(vlSelfRef.cla__DOT__gp8_low__DOT__c_mid) 
                                                   << 4U)))))) 
                                     | (((8U & ((0xfffffff8U 
                                                 & vlSelfRef.a) 
                                                ^ (
                                                   (0xfffffff8U 
                                                    & vlSelfRef.b) 
                                                   ^ 
                                                   ((IData)(__VdfgRegularize_hd87f99a1_0_23) 
                                                    << 3U)))) 
                                         | (4U & ((0xfffffffcU 
                                                   & vlSelfRef.a) 
                                                  ^ 
                                                  ((0xfffffffcU 
                                                    & vlSelfRef.b) 
                                                   ^ 
                                                   ((IData)(__VdfgRegularize_hd87f99a1_0_0) 
                                                    << 2U))))) 
                                        | ((2U & ((0xfffffffeU 
                                                   & vlSelfRef.a) 
                                                  ^ 
                                                  ((0xfffffffeU 
                                                    & vlSelfRef.b) 
                                                   ^ 
                                                   ((IData)(__VdfgRegularize_hd87f99a1_0_1) 
                                                    << 1U)))) 
                                           | (1U & 
                                              (vlSelfRef.a 
                                               ^ (vlSelfRef.b 
                                                  ^ (IData)(vlSelfRef.cin)))))))));
    vlSelfRef.cla__DOT__gp8_high__DOT__cout = (((IData)(vlSelfRef.cla__DOT__gp8_high__DOT__gp_segment_high__DOT__cout) 
                                                << 4U) 
                                               | (((IData)(vlSelfRef.cla__DOT__gp8_high__DOT__c_mid) 
                                                   << 3U) 
                                                  | (IData)(vlSelfRef.cla__DOT__gp8_high__DOT__gp_segment_low__DOT__cout)));
    vlSelfRef.sum = vlSelfRef.cla__DOT__sum;
    vlSelfRef.cla__DOT__carry = (((((IData)(vlSelfRef.cla__DOT__gp8_high__DOT__cout) 
                                    << 0x19U) | ((IData)(vlSelfRef.cla__DOT__c24) 
                                                 << 0x18U)) 
                                  | (((IData)(vlSelfRef.cla__DOT__gp8_mid2__DOT__cout) 
                                      << 0x11U) | ((IData)(vlSelfRef.cla__DOT__c16) 
                                                   << 0x10U))) 
                                 | ((((IData)(vlSelfRef.cla__DOT__gp8_mid1__DOT__cout) 
                                      << 9U) | ((IData)(vlSelfRef.cla__DOT__c8) 
                                                << 8U)) 
                                    | (((IData)(vlSelfRef.cla__DOT__gp8_low__DOT__cout) 
                                        << 1U) | (IData)(vlSelfRef.cin))));
}

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtop___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vtop___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtop___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtop___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("/MYSTUFF/hw2b-cla/cla.sv", 73, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vtop___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/MYSTUFF/hw2b-cla/cla.sv", 73, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/MYSTUFF/hw2b-cla/cla.sv", 73, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtop___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtop___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.cin & 0xfeU))) {
        Verilated::overWidthError("cin");}
}
#endif  // VL_DEBUG
