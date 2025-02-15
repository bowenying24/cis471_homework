// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTOP__SYMS_H_
#define VERILATED_VTOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtop.h"

// INCLUDE MODULE CLASSES
#include "Vtop___024root.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtop__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtop* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtop___024root                 TOP;

    // SCOPE NAMES
    VerilatedScope __Vscope_TOP;
    VerilatedScope __Vscope_cla;
    VerilatedScope __Vscope_cla__gp1_loop__BRA__0__KET____gp_inst;
    VerilatedScope __Vscope_cla__gp1_loop__BRA__10__KET____gp_inst;
    VerilatedScope __Vscope_cla__gp1_loop__BRA__11__KET____gp_inst;
    VerilatedScope __Vscope_cla__gp1_loop__BRA__12__KET____gp_inst;
    VerilatedScope __Vscope_cla__gp1_loop__BRA__13__KET____gp_inst;
    VerilatedScope __Vscope_cla__gp1_loop__BRA__14__KET____gp_inst;
    VerilatedScope __Vscope_cla__gp1_loop__BRA__15__KET____gp_inst;
    VerilatedScope __Vscope_cla__gp1_loop__BRA__16__KET____gp_inst;
    VerilatedScope __Vscope_cla__gp1_loop__BRA__17__KET____gp_inst;
    VerilatedScope __Vscope_cla__gp1_loop__BRA__18__KET____gp_inst;
    VerilatedScope __Vscope_cla__gp1_loop__BRA__19__KET____gp_inst;
    VerilatedScope __Vscope_cla__gp1_loop__BRA__1__KET____gp_inst;
    VerilatedScope __Vscope_cla__gp1_loop__BRA__20__KET____gp_inst;
    VerilatedScope __Vscope_cla__gp1_loop__BRA__21__KET____gp_inst;
    VerilatedScope __Vscope_cla__gp1_loop__BRA__22__KET____gp_inst;
    VerilatedScope __Vscope_cla__gp1_loop__BRA__23__KET____gp_inst;
    VerilatedScope __Vscope_cla__gp1_loop__BRA__24__KET____gp_inst;
    VerilatedScope __Vscope_cla__gp1_loop__BRA__25__KET____gp_inst;
    VerilatedScope __Vscope_cla__gp1_loop__BRA__26__KET____gp_inst;
    VerilatedScope __Vscope_cla__gp1_loop__BRA__27__KET____gp_inst;
    VerilatedScope __Vscope_cla__gp1_loop__BRA__28__KET____gp_inst;
    VerilatedScope __Vscope_cla__gp1_loop__BRA__29__KET____gp_inst;
    VerilatedScope __Vscope_cla__gp1_loop__BRA__2__KET____gp_inst;
    VerilatedScope __Vscope_cla__gp1_loop__BRA__30__KET____gp_inst;
    VerilatedScope __Vscope_cla__gp1_loop__BRA__31__KET____gp_inst;
    VerilatedScope __Vscope_cla__gp1_loop__BRA__3__KET____gp_inst;
    VerilatedScope __Vscope_cla__gp1_loop__BRA__4__KET____gp_inst;
    VerilatedScope __Vscope_cla__gp1_loop__BRA__5__KET____gp_inst;
    VerilatedScope __Vscope_cla__gp1_loop__BRA__6__KET____gp_inst;
    VerilatedScope __Vscope_cla__gp1_loop__BRA__7__KET____gp_inst;
    VerilatedScope __Vscope_cla__gp1_loop__BRA__8__KET____gp_inst;
    VerilatedScope __Vscope_cla__gp1_loop__BRA__9__KET____gp_inst;
    VerilatedScope __Vscope_cla__gp8_high;
    VerilatedScope __Vscope_cla__gp8_high__gp_segment_high;
    VerilatedScope __Vscope_cla__gp8_high__gp_segment_low;
    VerilatedScope __Vscope_cla__gp8_low;
    VerilatedScope __Vscope_cla__gp8_low__gp_segment_high;
    VerilatedScope __Vscope_cla__gp8_low__gp_segment_low;
    VerilatedScope __Vscope_cla__gp8_mid1;
    VerilatedScope __Vscope_cla__gp8_mid1__gp_segment_high;
    VerilatedScope __Vscope_cla__gp8_mid1__gp_segment_low;
    VerilatedScope __Vscope_cla__gp8_mid2;
    VerilatedScope __Vscope_cla__gp8_mid2__gp_segment_high;
    VerilatedScope __Vscope_cla__gp8_mid2__gp_segment_low;

    // SCOPE HIERARCHY
    VerilatedHierarchy __Vhier;

    // CONSTRUCTORS
    Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp);
    ~Vtop__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
