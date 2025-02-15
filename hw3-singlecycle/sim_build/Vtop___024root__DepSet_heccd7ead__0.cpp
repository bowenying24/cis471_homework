// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf);
void Vtop___024root___eval_ico(Vtop___024root* vlSelf);

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

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vdly__Processor__DOT__datapath__DOT__num_insns_current;
    __Vdly__Processor__DOT__datapath__DOT__num_insns_current = 0;
    CData/*0:0*/ __VdlySet__Processor__DOT__datapath__DOT__rf__DOT__regs__v0;
    __VdlySet__Processor__DOT__datapath__DOT__rf__DOT__regs__v0 = 0;
    IData/*31:0*/ __VdlyVal__Processor__DOT__datapath__DOT__rf__DOT__regs__v32;
    __VdlyVal__Processor__DOT__datapath__DOT__rf__DOT__regs__v32 = 0;
    CData/*4:0*/ __VdlyDim0__Processor__DOT__datapath__DOT__rf__DOT__regs__v32;
    __VdlyDim0__Processor__DOT__datapath__DOT__rf__DOT__regs__v32 = 0;
    CData/*0:0*/ __VdlySet__Processor__DOT__datapath__DOT__rf__DOT__regs__v32;
    __VdlySet__Processor__DOT__datapath__DOT__rf__DOT__regs__v32 = 0;
    // Body
    __Vdly__Processor__DOT__datapath__DOT__num_insns_current 
        = vlSelfRef.Processor__DOT__datapath__DOT__num_insns_current;
    __VdlySet__Processor__DOT__datapath__DOT__rf__DOT__regs__v0 = 0U;
    __VdlySet__Processor__DOT__datapath__DOT__rf__DOT__regs__v32 = 0U;
    if (vlSelfRef.rst) {
        vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__unnamedblk1__DOT__i = 1U;
        vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__unnamedblk1__DOT__i = 2U;
        vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__unnamedblk1__DOT__i = 3U;
        vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__unnamedblk1__DOT__i = 4U;
        vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__unnamedblk1__DOT__i = 5U;
        vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__unnamedblk1__DOT__i = 6U;
        vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__unnamedblk1__DOT__i = 7U;
        vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__unnamedblk1__DOT__i = 8U;
        vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__unnamedblk1__DOT__i = 9U;
        vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__unnamedblk1__DOT__i = 0xaU;
        vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__unnamedblk1__DOT__i = 0xbU;
        vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__unnamedblk1__DOT__i = 0xcU;
        vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__unnamedblk1__DOT__i = 0xdU;
        vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__unnamedblk1__DOT__i = 0xeU;
        vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__unnamedblk1__DOT__i = 0xfU;
        vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__unnamedblk1__DOT__i = 0x10U;
        vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__unnamedblk1__DOT__i = 0x11U;
        vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__unnamedblk1__DOT__i = 0x12U;
        vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__unnamedblk1__DOT__i = 0x13U;
        vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__unnamedblk1__DOT__i = 0x14U;
        vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__unnamedblk1__DOT__i = 0x15U;
        vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__unnamedblk1__DOT__i = 0x16U;
        vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__unnamedblk1__DOT__i = 0x17U;
        vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__unnamedblk1__DOT__i = 0x18U;
        vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__unnamedblk1__DOT__i = 0x19U;
        vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__unnamedblk1__DOT__i = 0x1aU;
        vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__unnamedblk1__DOT__i = 0x1bU;
        vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__unnamedblk1__DOT__i = 0x1cU;
        vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__unnamedblk1__DOT__i = 0x1dU;
        vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__unnamedblk1__DOT__i = 0x1eU;
        vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__unnamedblk1__DOT__i = 0x1fU;
        vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__unnamedblk1__DOT__i = 0x20U;
        vlSelfRef.Processor__DOT__datapath__DOT__cycles_current = 0U;
        __Vdly__Processor__DOT__datapath__DOT__num_insns_current = 0U;
        __VdlySet__Processor__DOT__datapath__DOT__rf__DOT__regs__v0 = 1U;
        vlSelfRef.Processor__DOT__datapath__DOT__pcCurrent = 0U;
    } else {
        vlSelfRef.Processor__DOT__datapath__DOT__cycles_current 
            = ((IData)(1U) + vlSelfRef.Processor__DOT__datapath__DOT__cycles_current);
        if ((1U & (~ (IData)(vlSelfRef.rst)))) {
            __Vdly__Processor__DOT__datapath__DOT__num_insns_current 
                = ((IData)(1U) + vlSelfRef.Processor__DOT__datapath__DOT__num_insns_current);
        }
        if (((IData)(vlSelfRef.Processor__DOT__datapath__DOT__enable_reg_write) 
             & (0U != (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_rd)))) {
            __VdlyVal__Processor__DOT__datapath__DOT__rf__DOT__regs__v32 
                = vlSelfRef.Processor__DOT__datapath__DOT__data_reg_write;
            __VdlyDim0__Processor__DOT__datapath__DOT__rf__DOT__regs__v32 
                = vlSelfRef.Processor__DOT__datapath__DOT__insn_rd;
            __VdlySet__Processor__DOT__datapath__DOT__rf__DOT__regs__v32 = 1U;
        }
        vlSelfRef.Processor__DOT__datapath__DOT__pcCurrent 
            = vlSelfRef.Processor__DOT__datapath__DOT__pcNext;
    }
    vlSelfRef.Processor__DOT__datapath__DOT__num_insns_current 
        = __Vdly__Processor__DOT__datapath__DOT__num_insns_current;
    if (__VdlySet__Processor__DOT__datapath__DOT__rf__DOT__regs__v0) {
        vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__regs[0U] = 0U;
        vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__regs[1U] = 0U;
        vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__regs[2U] = 0U;
        vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__regs[3U] = 0U;
        vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__regs[4U] = 0U;
        vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__regs[5U] = 0U;
        vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__regs[6U] = 0U;
        vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__regs[7U] = 0U;
        vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__regs[8U] = 0U;
        vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__regs[9U] = 0U;
        vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__regs[0xaU] = 0U;
        vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__regs[0xbU] = 0U;
        vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__regs[0xcU] = 0U;
        vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__regs[0xdU] = 0U;
        vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__regs[0xeU] = 0U;
        vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__regs[0xfU] = 0U;
        vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__regs[0x10U] = 0U;
        vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__regs[0x11U] = 0U;
        vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__regs[0x12U] = 0U;
        vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__regs[0x13U] = 0U;
        vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__regs[0x14U] = 0U;
        vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__regs[0x15U] = 0U;
        vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__regs[0x16U] = 0U;
        vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__regs[0x17U] = 0U;
        vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__regs[0x18U] = 0U;
        vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__regs[0x19U] = 0U;
        vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__regs[0x1aU] = 0U;
        vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__regs[0x1bU] = 0U;
        vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__regs[0x1cU] = 0U;
        vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__regs[0x1dU] = 0U;
        vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__regs[0x1eU] = 0U;
        vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__regs[0x1fU] = 0U;
    }
    if (__VdlySet__Processor__DOT__datapath__DOT__rf__DOT__regs__v32) {
        vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__regs[__VdlyDim0__Processor__DOT__datapath__DOT__rf__DOT__regs__v32] 
            = __VdlyVal__Processor__DOT__datapath__DOT__rf__DOT__regs__v32;
    }
    vlSelfRef.Processor__DOT__datapath__DOT__pc_to_imem 
        = vlSelfRef.Processor__DOT__datapath__DOT__pcCurrent;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __VdlyVal__Processor__DOT__memory__DOT__mem_array__v0;
    __VdlyVal__Processor__DOT__memory__DOT__mem_array__v0 = 0;
    SData/*12:0*/ __VdlyDim0__Processor__DOT__memory__DOT__mem_array__v0;
    __VdlyDim0__Processor__DOT__memory__DOT__mem_array__v0 = 0;
    CData/*0:0*/ __VdlySet__Processor__DOT__memory__DOT__mem_array__v0;
    __VdlySet__Processor__DOT__memory__DOT__mem_array__v0 = 0;
    CData/*7:0*/ __VdlyVal__Processor__DOT__memory__DOT__mem_array__v1;
    __VdlyVal__Processor__DOT__memory__DOT__mem_array__v1 = 0;
    SData/*12:0*/ __VdlyDim0__Processor__DOT__memory__DOT__mem_array__v1;
    __VdlyDim0__Processor__DOT__memory__DOT__mem_array__v1 = 0;
    CData/*0:0*/ __VdlySet__Processor__DOT__memory__DOT__mem_array__v1;
    __VdlySet__Processor__DOT__memory__DOT__mem_array__v1 = 0;
    CData/*7:0*/ __VdlyVal__Processor__DOT__memory__DOT__mem_array__v2;
    __VdlyVal__Processor__DOT__memory__DOT__mem_array__v2 = 0;
    SData/*12:0*/ __VdlyDim0__Processor__DOT__memory__DOT__mem_array__v2;
    __VdlyDim0__Processor__DOT__memory__DOT__mem_array__v2 = 0;
    CData/*0:0*/ __VdlySet__Processor__DOT__memory__DOT__mem_array__v2;
    __VdlySet__Processor__DOT__memory__DOT__mem_array__v2 = 0;
    CData/*7:0*/ __VdlyVal__Processor__DOT__memory__DOT__mem_array__v3;
    __VdlyVal__Processor__DOT__memory__DOT__mem_array__v3 = 0;
    SData/*12:0*/ __VdlyDim0__Processor__DOT__memory__DOT__mem_array__v3;
    __VdlyDim0__Processor__DOT__memory__DOT__mem_array__v3 = 0;
    CData/*0:0*/ __VdlySet__Processor__DOT__memory__DOT__mem_array__v3;
    __VdlySet__Processor__DOT__memory__DOT__mem_array__v3 = 0;
    // Body
    __VdlySet__Processor__DOT__memory__DOT__mem_array__v0 = 0U;
    __VdlySet__Processor__DOT__memory__DOT__mem_array__v1 = 0U;
    __VdlySet__Processor__DOT__memory__DOT__mem_array__v2 = 0U;
    __VdlySet__Processor__DOT__memory__DOT__mem_array__v3 = 0U;
    if ((1U & (~ (IData)(vlSelfRef.rst)))) {
        if ((1U & (IData)(vlSelfRef.Processor__DOT__mem_data_we))) {
            __VdlyVal__Processor__DOT__memory__DOT__mem_array__v0 
                = (0xffU & vlSelfRef.Processor__DOT__mem_data_to_write);
            __VdlyDim0__Processor__DOT__memory__DOT__mem_array__v0 
                = (0x1fffU & (vlSelfRef.Processor__DOT__mem_data_addr 
                              >> 2U));
            __VdlySet__Processor__DOT__memory__DOT__mem_array__v0 = 1U;
        }
        if ((2U & (IData)(vlSelfRef.Processor__DOT__mem_data_we))) {
            __VdlyVal__Processor__DOT__memory__DOT__mem_array__v1 
                = (0xffU & (vlSelfRef.Processor__DOT__mem_data_to_write 
                            >> 8U));
            __VdlyDim0__Processor__DOT__memory__DOT__mem_array__v1 
                = (0x1fffU & (vlSelfRef.Processor__DOT__mem_data_addr 
                              >> 2U));
            __VdlySet__Processor__DOT__memory__DOT__mem_array__v1 = 1U;
        }
        if ((4U & (IData)(vlSelfRef.Processor__DOT__mem_data_we))) {
            __VdlyVal__Processor__DOT__memory__DOT__mem_array__v2 
                = (0xffU & (vlSelfRef.Processor__DOT__mem_data_to_write 
                            >> 0x10U));
            __VdlyDim0__Processor__DOT__memory__DOT__mem_array__v2 
                = (0x1fffU & (vlSelfRef.Processor__DOT__mem_data_addr 
                              >> 2U));
            __VdlySet__Processor__DOT__memory__DOT__mem_array__v2 = 1U;
        }
        if ((8U & (IData)(vlSelfRef.Processor__DOT__mem_data_we))) {
            __VdlyVal__Processor__DOT__memory__DOT__mem_array__v3 
                = (vlSelfRef.Processor__DOT__mem_data_to_write 
                   >> 0x18U);
            __VdlyDim0__Processor__DOT__memory__DOT__mem_array__v3 
                = (0x1fffU & (vlSelfRef.Processor__DOT__mem_data_addr 
                              >> 2U));
            __VdlySet__Processor__DOT__memory__DOT__mem_array__v3 = 1U;
        }
        vlSelfRef.Processor__DOT__memory__DOT__load_data_from_dmem 
            = vlSelfRef.Processor__DOT__memory__DOT__mem_array
            [(0x1fffU & (vlSelfRef.Processor__DOT__mem_data_addr 
                         >> 2U))];
    }
    if (__VdlySet__Processor__DOT__memory__DOT__mem_array__v0) {
        vlSelfRef.Processor__DOT__memory__DOT__mem_array[__VdlyDim0__Processor__DOT__memory__DOT__mem_array__v0] 
            = ((0xffffff00U & vlSelfRef.Processor__DOT__memory__DOT__mem_array
                [__VdlyDim0__Processor__DOT__memory__DOT__mem_array__v0]) 
               | (IData)(__VdlyVal__Processor__DOT__memory__DOT__mem_array__v0));
    }
    if (__VdlySet__Processor__DOT__memory__DOT__mem_array__v1) {
        vlSelfRef.Processor__DOT__memory__DOT__mem_array[__VdlyDim0__Processor__DOT__memory__DOT__mem_array__v1] 
            = ((0xffff00ffU & vlSelfRef.Processor__DOT__memory__DOT__mem_array
                [__VdlyDim0__Processor__DOT__memory__DOT__mem_array__v1]) 
               | ((IData)(__VdlyVal__Processor__DOT__memory__DOT__mem_array__v1) 
                  << 8U));
    }
    if (__VdlySet__Processor__DOT__memory__DOT__mem_array__v2) {
        vlSelfRef.Processor__DOT__memory__DOT__mem_array[__VdlyDim0__Processor__DOT__memory__DOT__mem_array__v2] 
            = ((0xff00ffffU & vlSelfRef.Processor__DOT__memory__DOT__mem_array
                [__VdlyDim0__Processor__DOT__memory__DOT__mem_array__v2]) 
               | ((IData)(__VdlyVal__Processor__DOT__memory__DOT__mem_array__v2) 
                  << 0x10U));
    }
    if (__VdlySet__Processor__DOT__memory__DOT__mem_array__v3) {
        vlSelfRef.Processor__DOT__memory__DOT__mem_array[__VdlyDim0__Processor__DOT__memory__DOT__mem_array__v3] 
            = ((0xffffffU & vlSelfRef.Processor__DOT__memory__DOT__mem_array
                [__VdlyDim0__Processor__DOT__memory__DOT__mem_array__v3]) 
               | ((IData)(__VdlyVal__Processor__DOT__memory__DOT__mem_array__v3) 
                  << 0x18U));
    }
    vlSelfRef.Processor__DOT__mem_data_loaded_value 
        = vlSelfRef.Processor__DOT__memory__DOT__load_data_from_dmem;
    vlSelfRef.Processor__DOT__datapath__DOT__load_data_from_dmem 
        = vlSelfRef.Processor__DOT__mem_data_loaded_value;
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
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

void Vtop___024root___eval_nba(Vtop___024root* vlSelf);

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
            VL_FATAL_MT("/MYSTUFF/hw3-singlecycle/DatapathSingleCycle.sv", 531, "", "Input combinational region did not converge.");
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
            VL_FATAL_MT("/MYSTUFF/hw3-singlecycle/DatapathSingleCycle.sv", 531, "", "NBA region did not converge.");
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
                VL_FATAL_MT("/MYSTUFF/hw3-singlecycle/DatapathSingleCycle.sv", 531, "", "Active region did not converge.");
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
    if (VL_UNLIKELY((vlSelfRef.clock_proc & 0xfeU))) {
        Verilated::overWidthError("clock_proc");}
    if (VL_UNLIKELY((vlSelfRef.clock_mem & 0xfeU))) {
        Verilated::overWidthError("clock_mem");}
    if (VL_UNLIKELY((vlSelfRef.rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
