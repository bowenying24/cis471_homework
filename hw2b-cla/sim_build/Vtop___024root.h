// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(cin,0,0);
        CData/*0:0*/ cla__DOT__cin;
        CData/*3:0*/ cla__DOT__gout;
        CData/*3:0*/ cla__DOT__pout;
        CData/*0:0*/ cla__DOT__c8;
        CData/*0:0*/ cla__DOT__c16;
        CData/*0:0*/ cla__DOT__c24;
        CData/*7:0*/ cla__DOT__gp8_low__DOT__gin;
        CData/*7:0*/ cla__DOT__gp8_low__DOT__pin;
        CData/*0:0*/ cla__DOT__gp8_low__DOT__cin;
        CData/*0:0*/ cla__DOT__gp8_low__DOT__gout;
        CData/*0:0*/ cla__DOT__gp8_low__DOT__pout;
        CData/*6:0*/ cla__DOT__gp8_low__DOT__cout;
        CData/*0:0*/ cla__DOT__gp8_low__DOT__g_lower;
        CData/*0:0*/ cla__DOT__gp8_low__DOT__p_lower;
        CData/*0:0*/ cla__DOT__gp8_low__DOT__g_upper;
        CData/*0:0*/ cla__DOT__gp8_low__DOT__p_upper;
        CData/*0:0*/ cla__DOT__gp8_low__DOT__c_mid;
        CData/*3:0*/ cla__DOT__gp8_low__DOT__gp_segment_low__DOT__gin;
        CData/*3:0*/ cla__DOT__gp8_low__DOT__gp_segment_low__DOT__pin;
        CData/*0:0*/ cla__DOT__gp8_low__DOT__gp_segment_low__DOT__cin;
        CData/*0:0*/ cla__DOT__gp8_low__DOT__gp_segment_low__DOT__gout;
        CData/*0:0*/ cla__DOT__gp8_low__DOT__gp_segment_low__DOT__pout;
        CData/*2:0*/ cla__DOT__gp8_low__DOT__gp_segment_low__DOT__cout;
        CData/*3:0*/ cla__DOT__gp8_low__DOT__gp_segment_high__DOT__gin;
        CData/*3:0*/ cla__DOT__gp8_low__DOT__gp_segment_high__DOT__pin;
        CData/*0:0*/ cla__DOT__gp8_low__DOT__gp_segment_high__DOT__cin;
        CData/*0:0*/ cla__DOT__gp8_low__DOT__gp_segment_high__DOT__gout;
        CData/*0:0*/ cla__DOT__gp8_low__DOT__gp_segment_high__DOT__pout;
        CData/*2:0*/ cla__DOT__gp8_low__DOT__gp_segment_high__DOT__cout;
        CData/*7:0*/ cla__DOT__gp8_mid1__DOT__gin;
        CData/*7:0*/ cla__DOT__gp8_mid1__DOT__pin;
        CData/*0:0*/ cla__DOT__gp8_mid1__DOT__cin;
        CData/*0:0*/ cla__DOT__gp8_mid1__DOT__gout;
        CData/*0:0*/ cla__DOT__gp8_mid1__DOT__pout;
        CData/*6:0*/ cla__DOT__gp8_mid1__DOT__cout;
        CData/*0:0*/ cla__DOT__gp8_mid1__DOT__g_lower;
        CData/*0:0*/ cla__DOT__gp8_mid1__DOT__p_lower;
        CData/*0:0*/ cla__DOT__gp8_mid1__DOT__g_upper;
        CData/*0:0*/ cla__DOT__gp8_mid1__DOT__p_upper;
        CData/*0:0*/ cla__DOT__gp8_mid1__DOT__c_mid;
        CData/*3:0*/ cla__DOT__gp8_mid1__DOT__gp_segment_low__DOT__gin;
        CData/*3:0*/ cla__DOT__gp8_mid1__DOT__gp_segment_low__DOT__pin;
        CData/*0:0*/ cla__DOT__gp8_mid1__DOT__gp_segment_low__DOT__cin;
        CData/*0:0*/ cla__DOT__gp8_mid1__DOT__gp_segment_low__DOT__gout;
        CData/*0:0*/ cla__DOT__gp8_mid1__DOT__gp_segment_low__DOT__pout;
        CData/*2:0*/ cla__DOT__gp8_mid1__DOT__gp_segment_low__DOT__cout;
        CData/*3:0*/ cla__DOT__gp8_mid1__DOT__gp_segment_high__DOT__gin;
        CData/*3:0*/ cla__DOT__gp8_mid1__DOT__gp_segment_high__DOT__pin;
        CData/*0:0*/ cla__DOT__gp8_mid1__DOT__gp_segment_high__DOT__cin;
        CData/*0:0*/ cla__DOT__gp8_mid1__DOT__gp_segment_high__DOT__gout;
        CData/*0:0*/ cla__DOT__gp8_mid1__DOT__gp_segment_high__DOT__pout;
        CData/*2:0*/ cla__DOT__gp8_mid1__DOT__gp_segment_high__DOT__cout;
        CData/*7:0*/ cla__DOT__gp8_mid2__DOT__gin;
        CData/*7:0*/ cla__DOT__gp8_mid2__DOT__pin;
        CData/*0:0*/ cla__DOT__gp8_mid2__DOT__cin;
        CData/*0:0*/ cla__DOT__gp8_mid2__DOT__gout;
        CData/*0:0*/ cla__DOT__gp8_mid2__DOT__pout;
        CData/*6:0*/ cla__DOT__gp8_mid2__DOT__cout;
        CData/*0:0*/ cla__DOT__gp8_mid2__DOT__g_lower;
        CData/*0:0*/ cla__DOT__gp8_mid2__DOT__p_lower;
        CData/*0:0*/ cla__DOT__gp8_mid2__DOT__g_upper;
        CData/*0:0*/ cla__DOT__gp8_mid2__DOT__p_upper;
        CData/*0:0*/ cla__DOT__gp8_mid2__DOT__c_mid;
    };
    struct {
        CData/*3:0*/ cla__DOT__gp8_mid2__DOT__gp_segment_low__DOT__gin;
        CData/*3:0*/ cla__DOT__gp8_mid2__DOT__gp_segment_low__DOT__pin;
        CData/*0:0*/ cla__DOT__gp8_mid2__DOT__gp_segment_low__DOT__cin;
        CData/*0:0*/ cla__DOT__gp8_mid2__DOT__gp_segment_low__DOT__gout;
        CData/*0:0*/ cla__DOT__gp8_mid2__DOT__gp_segment_low__DOT__pout;
        CData/*2:0*/ cla__DOT__gp8_mid2__DOT__gp_segment_low__DOT__cout;
        CData/*3:0*/ cla__DOT__gp8_mid2__DOT__gp_segment_high__DOT__gin;
        CData/*3:0*/ cla__DOT__gp8_mid2__DOT__gp_segment_high__DOT__pin;
        CData/*0:0*/ cla__DOT__gp8_mid2__DOT__gp_segment_high__DOT__cin;
        CData/*0:0*/ cla__DOT__gp8_mid2__DOT__gp_segment_high__DOT__gout;
        CData/*0:0*/ cla__DOT__gp8_mid2__DOT__gp_segment_high__DOT__pout;
        CData/*2:0*/ cla__DOT__gp8_mid2__DOT__gp_segment_high__DOT__cout;
        CData/*7:0*/ cla__DOT__gp8_high__DOT__gin;
        CData/*7:0*/ cla__DOT__gp8_high__DOT__pin;
        CData/*0:0*/ cla__DOT__gp8_high__DOT__cin;
        CData/*0:0*/ cla__DOT__gp8_high__DOT__gout;
        CData/*0:0*/ cla__DOT__gp8_high__DOT__pout;
        CData/*6:0*/ cla__DOT__gp8_high__DOT__cout;
        CData/*0:0*/ cla__DOT__gp8_high__DOT__g_lower;
        CData/*0:0*/ cla__DOT__gp8_high__DOT__p_lower;
        CData/*0:0*/ cla__DOT__gp8_high__DOT__g_upper;
        CData/*0:0*/ cla__DOT__gp8_high__DOT__p_upper;
        CData/*0:0*/ cla__DOT__gp8_high__DOT__c_mid;
        CData/*3:0*/ cla__DOT__gp8_high__DOT__gp_segment_low__DOT__gin;
        CData/*3:0*/ cla__DOT__gp8_high__DOT__gp_segment_low__DOT__pin;
        CData/*0:0*/ cla__DOT__gp8_high__DOT__gp_segment_low__DOT__cin;
        CData/*0:0*/ cla__DOT__gp8_high__DOT__gp_segment_low__DOT__gout;
        CData/*0:0*/ cla__DOT__gp8_high__DOT__gp_segment_low__DOT__pout;
        CData/*2:0*/ cla__DOT__gp8_high__DOT__gp_segment_low__DOT__cout;
        CData/*3:0*/ cla__DOT__gp8_high__DOT__gp_segment_high__DOT__gin;
        CData/*3:0*/ cla__DOT__gp8_high__DOT__gp_segment_high__DOT__pin;
        CData/*0:0*/ cla__DOT__gp8_high__DOT__gp_segment_high__DOT__cin;
        CData/*0:0*/ cla__DOT__gp8_high__DOT__gp_segment_high__DOT__gout;
        CData/*0:0*/ cla__DOT__gp8_high__DOT__gp_segment_high__DOT__pout;
        CData/*2:0*/ cla__DOT__gp8_high__DOT__gp_segment_high__DOT__cout;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__0__KET____DOT__gp_inst__DOT__a;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__0__KET____DOT__gp_inst__DOT__b;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__0__KET____DOT__gp_inst__DOT__g;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__0__KET____DOT__gp_inst__DOT__p;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__1__KET____DOT__gp_inst__DOT__a;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__1__KET____DOT__gp_inst__DOT__b;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__1__KET____DOT__gp_inst__DOT__g;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__1__KET____DOT__gp_inst__DOT__p;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__2__KET____DOT__gp_inst__DOT__a;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__2__KET____DOT__gp_inst__DOT__b;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__2__KET____DOT__gp_inst__DOT__g;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__2__KET____DOT__gp_inst__DOT__p;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__3__KET____DOT__gp_inst__DOT__a;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__3__KET____DOT__gp_inst__DOT__b;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__3__KET____DOT__gp_inst__DOT__g;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__3__KET____DOT__gp_inst__DOT__p;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__4__KET____DOT__gp_inst__DOT__a;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__4__KET____DOT__gp_inst__DOT__b;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__4__KET____DOT__gp_inst__DOT__g;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__4__KET____DOT__gp_inst__DOT__p;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__5__KET____DOT__gp_inst__DOT__a;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__5__KET____DOT__gp_inst__DOT__b;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__5__KET____DOT__gp_inst__DOT__g;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__5__KET____DOT__gp_inst__DOT__p;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__6__KET____DOT__gp_inst__DOT__a;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__6__KET____DOT__gp_inst__DOT__b;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__6__KET____DOT__gp_inst__DOT__g;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__6__KET____DOT__gp_inst__DOT__p;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__7__KET____DOT__gp_inst__DOT__a;
    };
    struct {
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__7__KET____DOT__gp_inst__DOT__b;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__7__KET____DOT__gp_inst__DOT__g;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__7__KET____DOT__gp_inst__DOT__p;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__8__KET____DOT__gp_inst__DOT__a;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__8__KET____DOT__gp_inst__DOT__b;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__8__KET____DOT__gp_inst__DOT__g;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__8__KET____DOT__gp_inst__DOT__p;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__9__KET____DOT__gp_inst__DOT__a;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__9__KET____DOT__gp_inst__DOT__b;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__9__KET____DOT__gp_inst__DOT__g;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__9__KET____DOT__gp_inst__DOT__p;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__10__KET____DOT__gp_inst__DOT__a;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__10__KET____DOT__gp_inst__DOT__b;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__10__KET____DOT__gp_inst__DOT__g;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__10__KET____DOT__gp_inst__DOT__p;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__11__KET____DOT__gp_inst__DOT__a;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__11__KET____DOT__gp_inst__DOT__b;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__11__KET____DOT__gp_inst__DOT__g;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__11__KET____DOT__gp_inst__DOT__p;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__12__KET____DOT__gp_inst__DOT__a;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__12__KET____DOT__gp_inst__DOT__b;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__12__KET____DOT__gp_inst__DOT__g;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__12__KET____DOT__gp_inst__DOT__p;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__13__KET____DOT__gp_inst__DOT__a;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__13__KET____DOT__gp_inst__DOT__b;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__13__KET____DOT__gp_inst__DOT__g;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__13__KET____DOT__gp_inst__DOT__p;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__14__KET____DOT__gp_inst__DOT__a;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__14__KET____DOT__gp_inst__DOT__b;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__14__KET____DOT__gp_inst__DOT__g;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__14__KET____DOT__gp_inst__DOT__p;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__15__KET____DOT__gp_inst__DOT__a;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__15__KET____DOT__gp_inst__DOT__b;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__15__KET____DOT__gp_inst__DOT__g;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__15__KET____DOT__gp_inst__DOT__p;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__16__KET____DOT__gp_inst__DOT__a;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__16__KET____DOT__gp_inst__DOT__b;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__16__KET____DOT__gp_inst__DOT__g;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__16__KET____DOT__gp_inst__DOT__p;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__17__KET____DOT__gp_inst__DOT__a;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__17__KET____DOT__gp_inst__DOT__b;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__17__KET____DOT__gp_inst__DOT__g;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__17__KET____DOT__gp_inst__DOT__p;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__18__KET____DOT__gp_inst__DOT__a;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__18__KET____DOT__gp_inst__DOT__b;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__18__KET____DOT__gp_inst__DOT__g;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__18__KET____DOT__gp_inst__DOT__p;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__19__KET____DOT__gp_inst__DOT__a;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__19__KET____DOT__gp_inst__DOT__b;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__19__KET____DOT__gp_inst__DOT__g;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__19__KET____DOT__gp_inst__DOT__p;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__20__KET____DOT__gp_inst__DOT__a;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__20__KET____DOT__gp_inst__DOT__b;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__20__KET____DOT__gp_inst__DOT__g;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__20__KET____DOT__gp_inst__DOT__p;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__21__KET____DOT__gp_inst__DOT__a;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__21__KET____DOT__gp_inst__DOT__b;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__21__KET____DOT__gp_inst__DOT__g;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__21__KET____DOT__gp_inst__DOT__p;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__22__KET____DOT__gp_inst__DOT__a;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__22__KET____DOT__gp_inst__DOT__b;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__22__KET____DOT__gp_inst__DOT__g;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__22__KET____DOT__gp_inst__DOT__p;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__23__KET____DOT__gp_inst__DOT__a;
    };
    struct {
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__23__KET____DOT__gp_inst__DOT__b;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__23__KET____DOT__gp_inst__DOT__g;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__23__KET____DOT__gp_inst__DOT__p;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__24__KET____DOT__gp_inst__DOT__a;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__24__KET____DOT__gp_inst__DOT__b;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__24__KET____DOT__gp_inst__DOT__g;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__24__KET____DOT__gp_inst__DOT__p;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__25__KET____DOT__gp_inst__DOT__a;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__25__KET____DOT__gp_inst__DOT__b;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__25__KET____DOT__gp_inst__DOT__g;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__25__KET____DOT__gp_inst__DOT__p;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__26__KET____DOT__gp_inst__DOT__a;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__26__KET____DOT__gp_inst__DOT__b;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__26__KET____DOT__gp_inst__DOT__g;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__26__KET____DOT__gp_inst__DOT__p;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__27__KET____DOT__gp_inst__DOT__a;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__27__KET____DOT__gp_inst__DOT__b;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__27__KET____DOT__gp_inst__DOT__g;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__27__KET____DOT__gp_inst__DOT__p;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__28__KET____DOT__gp_inst__DOT__a;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__28__KET____DOT__gp_inst__DOT__b;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__28__KET____DOT__gp_inst__DOT__g;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__28__KET____DOT__gp_inst__DOT__p;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__29__KET____DOT__gp_inst__DOT__a;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__29__KET____DOT__gp_inst__DOT__b;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__29__KET____DOT__gp_inst__DOT__g;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__29__KET____DOT__gp_inst__DOT__p;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__30__KET____DOT__gp_inst__DOT__a;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__30__KET____DOT__gp_inst__DOT__b;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__30__KET____DOT__gp_inst__DOT__g;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__30__KET____DOT__gp_inst__DOT__p;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__31__KET____DOT__gp_inst__DOT__a;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__31__KET____DOT__gp_inst__DOT__b;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__31__KET____DOT__gp_inst__DOT__g;
        CData/*0:0*/ cla__DOT__gp1_loop__BRA__31__KET____DOT__gp_inst__DOT__p;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __VactContinue;
        VL_IN(a,31,0);
        VL_IN(b,31,0);
        VL_OUT(sum,31,0);
        IData/*31:0*/ cla__DOT__a;
        IData/*31:0*/ cla__DOT__b;
        IData/*31:0*/ cla__DOT__sum;
        IData/*31:0*/ cla__DOT__g;
        IData/*31:0*/ cla__DOT__p;
        IData/*31:0*/ cla__DOT__carry;
        IData/*31:0*/ __VactIterCount;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
