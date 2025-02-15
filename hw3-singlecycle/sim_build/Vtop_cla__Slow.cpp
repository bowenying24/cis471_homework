// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop_cla.h"

void Vtop_cla___ctor_var_reset(Vtop_cla* vlSelf);

Vtop_cla::Vtop_cla(Vtop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop_cla___ctor_var_reset(this);
}

void Vtop_cla::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtop_cla::~Vtop_cla() {
}
