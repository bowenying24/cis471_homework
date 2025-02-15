// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

// Parameter definitions for Vtop___024root
constexpr CData/*6:0*/ Vtop___024root::Processor__DOT__datapath__DOT__OpLoad;
constexpr CData/*6:0*/ Vtop___024root::Processor__DOT__datapath__DOT__OpStore;
constexpr CData/*6:0*/ Vtop___024root::Processor__DOT__datapath__DOT__OpBranch;
constexpr CData/*6:0*/ Vtop___024root::Processor__DOT__datapath__DOT__OpJalr;
constexpr CData/*6:0*/ Vtop___024root::Processor__DOT__datapath__DOT__OpMiscMem;
constexpr CData/*6:0*/ Vtop___024root::Processor__DOT__datapath__DOT__OpJal;
constexpr CData/*6:0*/ Vtop___024root::Processor__DOT__datapath__DOT__OpRegImm;
constexpr CData/*6:0*/ Vtop___024root::Processor__DOT__datapath__DOT__OpRegReg;
constexpr CData/*6:0*/ Vtop___024root::Processor__DOT__datapath__DOT__OpEnviron;
constexpr CData/*6:0*/ Vtop___024root::Processor__DOT__datapath__DOT__OpAuipc;
constexpr CData/*6:0*/ Vtop___024root::Processor__DOT__datapath__DOT__OpLui;
constexpr IData/*31:0*/ Vtop___024root::Processor__DOT__memory__DOT__NUM_WORDS;
constexpr IData/*31:0*/ Vtop___024root::Processor__DOT__memory__DOT__AddrMsb;
constexpr IData/*31:0*/ Vtop___024root::Processor__DOT__memory__DOT__AddrLsb;
constexpr IData/*31:0*/ Vtop___024root::Processor__DOT__datapath__DOT__rf__DOT__NumRegs;


void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf);

Vtop___024root::Vtop___024root(Vtop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop___024root___ctor_var_reset(this);
}

void Vtop___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtop___024root::~Vtop___024root() {
}
