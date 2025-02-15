// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.set(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);
void Vtop_cla___ico_sequent__TOP__Processor__DOT__datapath__DOT__adder__0(Vtop_cla* vlSelf);
void Vtop___024root___ico_sequent__TOP__1(Vtop___024root* vlSelf);

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
        Vtop_cla___ico_sequent__TOP__Processor__DOT__datapath__DOT__adder__0((&vlSymsp->TOP__Processor__DOT__datapath__DOT__adder));
        Vtop_cla___ico_sequent__TOP__Processor__DOT__datapath__DOT__adder__0((&vlSymsp->TOP__Processor__DOT__datapath__DOT__adder_reg));
        Vtop_cla___ico_sequent__TOP__Processor__DOT__datapath__DOT__adder__0((&vlSymsp->TOP__Processor__DOT__datapath__DOT__subber_reg));
        Vtop___024root___ico_sequent__TOP__1(vlSelf);
    }
}

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ Processor__DOT__datapath__DOT____VdfgRegularize_h0d652ed3_0_15;
    Processor__DOT__datapath__DOT____VdfgRegularize_h0d652ed3_0_15 = 0;
    CData/*0:0*/ Processor__DOT__datapath__DOT____VdfgRegularize_h0d652ed3_0_18;
    Processor__DOT__datapath__DOT____VdfgRegularize_h0d652ed3_0_18 = 0;
    CData/*0:0*/ Processor__DOT__datapath__DOT____VdfgRegularize_h0d652ed3_0_19;
    Processor__DOT__datapath__DOT____VdfgRegularize_h0d652ed3_0_19 = 0;
    CData/*0:0*/ Processor__DOT__datapath__DOT____VdfgRegularize_h0d652ed3_0_20;
    Processor__DOT__datapath__DOT____VdfgRegularize_h0d652ed3_0_20 = 0;
    CData/*0:0*/ Processor__DOT__datapath__DOT____VdfgRegularize_h0d652ed3_0_21;
    Processor__DOT__datapath__DOT____VdfgRegularize_h0d652ed3_0_21 = 0;
    std::string __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__Vfuncout;
    IData/*31:0*/ __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__instruction;
    __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__instruction = 0;
    std::string __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__da_str;
    CData/*6:0*/ __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__opcode;
    __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__opcode = 0;
    CData/*4:0*/ __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rd;
    __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rd = 0;
    CData/*2:0*/ __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__funct3;
    __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__funct3 = 0;
    CData/*4:0*/ __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs1;
    __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs1 = 0;
    CData/*4:0*/ __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs2;
    __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs2 = 0;
    CData/*6:0*/ __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__funct7;
    __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__funct7 = 0;
    IData/*19:0*/ __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__immed_u;
    __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__immed_u = 0;
    SData/*11:0*/ __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__immed_i;
    __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__immed_i = 0;
    SData/*11:0*/ __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__immed_s;
    __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__immed_s = 0;
    SData/*12:0*/ __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__immed_b;
    __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__immed_b = 0;
    IData/*20:0*/ __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__tmp_j;
    __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__tmp_j = 0;
    IData/*20:0*/ __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__immed_j;
    __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__immed_j = 0;
    // Body
    vlSelfRef.Processor__DOT__datapath__DOT__pc_to_imem 
        = vlSelfRef.Processor__DOT__datapath__DOT__pcCurrent;
    vlSelfRef.Processor__DOT__clock_mem = vlSelfRef.clock_mem;
    vlSelfRef.Processor__DOT__mem_data_loaded_value 
        = vlSelfRef.Processor__DOT__memory__DOT__load_data_from_dmem;
    vlSelfRef.Processor__DOT__mem_data_to_write = vlSelfRef.Processor__DOT__datapath__DOT__store_data_to_dmem;
    vlSelfRef.Processor__DOT__mem_data_we = vlSelfRef.Processor__DOT__datapath__DOT__store_we_to_dmem;
    vlSelfRef.Processor__DOT__datapath__DOT__imm_j 
        = (((0x100000U & (vlSelfRef.Processor__DOT__memory__DOT__insn_from_imem 
                          >> 0xbU)) | ((0xff000U & vlSelfRef.Processor__DOT__memory__DOT__insn_from_imem) 
                                       | (0x800U & 
                                          (vlSelfRef.Processor__DOT__memory__DOT__insn_from_imem 
                                           >> 9U)))) 
           | (0x7feU & (vlSelfRef.Processor__DOT__memory__DOT__insn_from_imem 
                        >> 0x14U)));
    vlSelfRef.Processor__DOT__pc_to_imem = vlSelfRef.Processor__DOT__datapath__DOT__pcCurrent;
    vlSelfRef.Processor__DOT__mem_data_addr = vlSelfRef.Processor__DOT__datapath__DOT__addr_to_dmem;
    vlSelfRef.Processor__DOT__clock_proc = vlSelfRef.clock_proc;
    vlSelfRef.Processor__DOT__rst = vlSelfRef.rst;
    vlSelfRef.Processor__DOT__datapath__DOT__imm_b 
        = (((0x1000U & (vlSelfRef.Processor__DOT__memory__DOT__insn_from_imem 
                        >> 0x13U)) | (0x800U & (vlSelfRef.Processor__DOT__memory__DOT__insn_from_imem 
                                                << 4U))) 
           | ((0x7e0U & (vlSelfRef.Processor__DOT__memory__DOT__insn_from_imem 
                         >> 0x14U)) | (0x1eU & (vlSelfRef.Processor__DOT__memory__DOT__insn_from_imem 
                                                >> 7U))));
    vlSelfRef.Processor__DOT__datapath__DOT__insn_rd 
        = (0x1fU & (vlSelfRef.Processor__DOT__memory__DOT__insn_from_imem 
                    >> 7U));
    vlSelfRef.Processor__DOT__datapath__DOT__insn_funct7 
        = (vlSelfRef.Processor__DOT__memory__DOT__insn_from_imem 
           >> 0x19U);
    vlSelfRef.Processor__DOT__datapath__DOT__insn_funct3 
        = (7U & (vlSelfRef.Processor__DOT__memory__DOT__insn_from_imem 
                 >> 0xcU));
    vlSelfRef.Processor__DOT__insn_from_imem = vlSelfRef.Processor__DOT__memory__DOT__insn_from_imem;
    vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode 
        = (0x7fU & vlSelfRef.Processor__DOT__memory__DOT__insn_from_imem);
    vlSelfRef.Processor__DOT__datapath__DOT__imm_i 
        = (vlSelfRef.Processor__DOT__memory__DOT__insn_from_imem 
           >> 0x14U);
    vlSelfRef.Processor__DOT__datapath__DOT__insn_rs2 
        = (0x1fU & (vlSelfRef.Processor__DOT__memory__DOT__insn_from_imem 
                    >> 0x14U));
    vlSelfRef.Processor__DOT__datapath__DOT__insn_rs1 
        = (0x1fU & (vlSelfRef.Processor__DOT__memory__DOT__insn_from_imem 
                    >> 0xfU));
    vlSelfRef.Processor__DOT__memory__DOT__clock_mem 
        = vlSelfRef.Processor__DOT__clock_mem;
    vlSelfRef.Processor__DOT__datapath__DOT__load_data_from_dmem 
        = vlSelfRef.Processor__DOT__mem_data_loaded_value;
    vlSelfRef.Processor__DOT__memory__DOT__store_data_to_dmem 
        = vlSelfRef.Processor__DOT__mem_data_to_write;
    vlSelfRef.Processor__DOT__memory__DOT__store_we_to_dmem 
        = vlSelfRef.Processor__DOT__mem_data_we;
    vlSelfRef.Processor__DOT__datapath__DOT__imm_j_sext 
        = (((- (IData)((vlSelfRef.Processor__DOT__memory__DOT__insn_from_imem 
                        >> 0x1fU))) << 0x15U) | vlSelfRef.Processor__DOT__datapath__DOT__imm_j);
    vlSelfRef.Processor__DOT__memory__DOT__pc_to_imem 
        = vlSelfRef.Processor__DOT__pc_to_imem;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((0U != (3U & vlSelfRef.Processor__DOT__pc_to_imem)))) {
            VL_WRITEF_NX("[%0t] %%Error: DatapathSingleCycle.sv:483: Assertion failed in %NProcessor.memory: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/MYSTUFF/hw3-singlecycle/DatapathSingleCycle.sv", 483, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((0U != (3U & vlSelfRef.Processor__DOT__mem_data_addr)))) {
            VL_WRITEF_NX("[%0t] %%Error: DatapathSingleCycle.sv:484: Assertion failed in %NProcessor.memory: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/MYSTUFF/hw3-singlecycle/DatapathSingleCycle.sv", 484, "");
        }
    }
    vlSelfRef.Processor__DOT__memory__DOT__addr_to_dmem 
        = vlSelfRef.Processor__DOT__mem_data_addr;
    vlSelfRef.Processor__DOT__datapath__DOT__clk = vlSelfRef.Processor__DOT__clock_proc;
    vlSelfRef.Processor__DOT__memory__DOT__rst = vlSelfRef.Processor__DOT__rst;
    vlSelfRef.Processor__DOT__datapath__DOT__rst = vlSelfRef.Processor__DOT__rst;
    vlSelfRef.Processor__DOT__datapath__DOT__imm_b_sext 
        = (((- (IData)((vlSelfRef.Processor__DOT__memory__DOT__insn_from_imem 
                        >> 0x1fU))) << 0xdU) | (IData)(vlSelfRef.Processor__DOT__datapath__DOT__imm_b));
    vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__rd 
        = vlSelfRef.Processor__DOT__datapath__DOT__insn_rd;
    vlSelfRef.Processor__DOT__datapath__DOT__imm_s 
        = (((IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_funct7) 
            << 5U) | (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_rd));
    Processor__DOT__datapath__DOT____VdfgRegularize_h0d652ed3_0_21 
        = ((1U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_funct3)) 
           & (0U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_funct7)));
    vlSelfRef.Processor__DOT__datapath__DOT__insn_from_imem 
        = vlSelfRef.Processor__DOT__insn_from_imem;
    __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__instruction 
        = vlSelfRef.Processor__DOT__insn_from_imem;
    __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__opcode 
        = (0x7fU & __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__instruction);
    __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rd 
        = (0x1fU & (__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__instruction 
                    >> 7U));
    __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__funct3 
        = (7U & (__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__instruction 
                 >> 0xcU));
    __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs1 
        = (0x1fU & (__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__instruction 
                    >> 0xfU));
    __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs2 
        = (0x1fU & (__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__instruction 
                    >> 0x14U));
    __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__funct7 
        = (__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__instruction 
           >> 0x19U);
    __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__immed_u 
        = (__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__instruction 
           >> 0xcU);
    __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__immed_i 
        = (__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__instruction 
           >> 0x14U);
    __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__immed_s 
        = (((IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__funct7) 
            << 5U) | (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rd));
    __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__immed_b 
        = (((0x1000U & ((IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__funct7) 
                        << 6U)) | (0x800U & ((IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rd) 
                                             << 0xbU))) 
           | ((0x7e0U & ((IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__funct7) 
                         << 5U)) | (0x1eU & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rd))));
    __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__tmp_j 
        = (0x1ffffeU & (__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__instruction 
                        >> 0xbU));
    __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__immed_j 
        = (((0x100000U & __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__tmp_j) 
            | (0xffc00U & (__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__tmp_j 
                           << 9U))) | ((0x200U & (__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__tmp_j 
                                                  >> 2U)) 
                                       | (0x1feU & 
                                          (__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__tmp_j 
                                           >> 0xbU))));
    __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__da_str 
        = ((0x40U & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__opcode))
            ? ((0x20U & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__opcode))
                ? ((0x10U & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__opcode))
                    ? ((8U & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__opcode))
                        ? std::string{"Unknown instruction"}
                        : ((4U & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__opcode))
                            ? std::string{"Unknown instruction"}
                            : ((2U & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__opcode))
                                ? ((1U & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__opcode))
                                    ? ((0U == (__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__instruction 
                                               >> 7U))
                                        ? std::string{"ecall"}
                                        : std::string{"Unknown environment instruction"})
                                    : std::string{"Unknown instruction"})
                                : std::string{"Unknown instruction"})))
                    : ((8U & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__opcode))
                        ? ((4U & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__opcode))
                            ? ((2U & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__opcode))
                                ? ((1U & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__opcode))
                                    ? ((0x6fU == (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__opcode))
                                        ? VL_SFORMATF_N_NX("JAL x%0#, %0#",0,
                                                           5,
                                                           __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rd,
                                                           21,
                                                           __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__immed_j) 
                                        : std::string{"Unknown J-type instruction"})
                                    : std::string{"Unknown instruction"})
                                : std::string{"Unknown instruction"})
                            : std::string{"Unknown instruction"})
                        : ((4U & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__opcode))
                            ? ((2U & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__opcode))
                                ? ((1U & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__opcode))
                                    ? ((0U == (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                        ? VL_SFORMATF_N_NX("JALR x%0#, x%0#, %0#",0,
                                                           5,
                                                           __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rd,
                                                           5,
                                                           (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs1),
                                                           12,
                                                           __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__immed_i) 
                                        : std::string{"Unknown JALR instruction"})
                                    : std::string{"Unknown instruction"})
                                : std::string{"Unknown instruction"})
                            : ((2U & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__opcode))
                                ? ((1U & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__opcode))
                                    ? ((4U & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                        ? ((2U & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                            ? ((1U 
                                                & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                                ? VL_SFORMATF_N_NX("BGEU x%0#, x%0#, %0#",0,
                                                                   5,
                                                                   __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs1,
                                                                   5,
                                                                   (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs2),
                                                                   13,
                                                                   __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__immed_b) 
                                                : VL_SFORMATF_N_NX("BLTU x%0#, x%0#, %0#",0,
                                                                   5,
                                                                   __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs1,
                                                                   5,
                                                                   (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs2),
                                                                   13,
                                                                   __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__immed_b) )
                                            : ((1U 
                                                & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                                ? VL_SFORMATF_N_NX("BGE x%0#, x%0#, %0#",0,
                                                                   5,
                                                                   __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs1,
                                                                   5,
                                                                   (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs2),
                                                                   13,
                                                                   __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__immed_b) 
                                                : VL_SFORMATF_N_NX("BLT x%0#, x%0#, %0#",0,
                                                                   5,
                                                                   __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs1,
                                                                   5,
                                                                   (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs2),
                                                                   13,
                                                                   __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__immed_b) ))
                                        : ((2U & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                            ? std::string{"Unknown B-type instruction"}
                                            : ((1U 
                                                & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                                ? VL_SFORMATF_N_NX("BNE x%0#, x%0#, %0#",0,
                                                                   5,
                                                                   __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs1,
                                                                   5,
                                                                   (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs2),
                                                                   13,
                                                                   __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__immed_b) 
                                                : VL_SFORMATF_N_NX("BEQ x%0#, x%0#, %0#",0,
                                                                   5,
                                                                   __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs1,
                                                                   5,
                                                                   (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs2),
                                                                   13,
                                                                   __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__immed_b) )))
                                    : std::string{"Unknown instruction"})
                                : std::string{"Unknown instruction"}))))
                : std::string{"Unknown instruction"})
            : ((0x20U & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__opcode))
                ? ((0x10U & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__opcode))
                    ? ((8U & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__opcode))
                        ? std::string{"Unknown instruction"}
                        : ((4U & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__opcode))
                            ? ((2U & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__opcode))
                                ? ((1U & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__opcode))
                                    ? VL_SFORMATF_N_NX("LUI x%0#, 0x%0x",0,
                                                       5,
                                                       __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rd,
                                                       20,
                                                       __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__immed_u) 
                                    : std::string{"Unknown instruction"})
                                : std::string{"Unknown instruction"})
                            : ((2U & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__opcode))
                                ? ((1U & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__opcode))
                                    ? ((1U == (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__funct7))
                                        ? ((4U & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                            ? ((2U 
                                                & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                                ? (
                                                   (1U 
                                                    & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                                    ? VL_SFORMATF_N_NX("REMU x%0#, x%0#, x%0#",0,
                                                                       5,
                                                                       __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rd,
                                                                       5,
                                                                       (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs1),
                                                                       5,
                                                                       __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs2) 
                                                    : VL_SFORMATF_N_NX("REM x%0#, x%0#, x%0#",0,
                                                                       5,
                                                                       __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rd,
                                                                       5,
                                                                       (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs1),
                                                                       5,
                                                                       __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs2) )
                                                : (
                                                   (1U 
                                                    & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                                    ? VL_SFORMATF_N_NX("DIVU x%0#, x%0#, x%0#",0,
                                                                       5,
                                                                       __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rd,
                                                                       5,
                                                                       (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs1),
                                                                       5,
                                                                       __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs2) 
                                                    : VL_SFORMATF_N_NX("DIV x%0#, x%0#, x%0#",0,
                                                                       5,
                                                                       __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rd,
                                                                       5,
                                                                       (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs1),
                                                                       5,
                                                                       __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs2) ))
                                            : ((2U 
                                                & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                                ? (
                                                   (1U 
                                                    & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                                    ? VL_SFORMATF_N_NX("MULHU x%0#, x%0#, x%0#",0,
                                                                       5,
                                                                       __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rd,
                                                                       5,
                                                                       (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs1),
                                                                       5,
                                                                       __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs2) 
                                                    : VL_SFORMATF_N_NX("MULHSU x%0#, x%0#, x%0#",0,
                                                                       5,
                                                                       __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rd,
                                                                       5,
                                                                       (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs1),
                                                                       5,
                                                                       __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs2) )
                                                : (
                                                   (1U 
                                                    & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                                    ? VL_SFORMATF_N_NX("MULH x%0#, x%0#, x%0#",0,
                                                                       5,
                                                                       __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rd,
                                                                       5,
                                                                       (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs1),
                                                                       5,
                                                                       __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs2) 
                                                    : VL_SFORMATF_N_NX("MUL x%0#, x%0#, x%0#",0,
                                                                       5,
                                                                       __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rd,
                                                                       5,
                                                                       (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs1),
                                                                       5,
                                                                       __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs2) )))
                                        : ((4U & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                            ? ((2U 
                                                & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                                ? (
                                                   (1U 
                                                    & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                                    ? VL_SFORMATF_N_NX("AND x%0#, x%0#, x%0#",0,
                                                                       5,
                                                                       __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rd,
                                                                       5,
                                                                       (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs1),
                                                                       5,
                                                                       __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs2) 
                                                    : VL_SFORMATF_N_NX("OR x%0#, x%0#, x%0#",0,
                                                                       5,
                                                                       __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rd,
                                                                       5,
                                                                       (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs1),
                                                                       5,
                                                                       __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs2) )
                                                : (
                                                   (1U 
                                                    & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                                    ? VL_SFORMATF_N_NX("SRL x%0#, x%0#, x%0#",0,
                                                                       5,
                                                                       __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rd,
                                                                       5,
                                                                       (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs1),
                                                                       5,
                                                                       __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs2) 
                                                    : VL_SFORMATF_N_NX("XOR x%0#, x%0#, x%0#",0,
                                                                       5,
                                                                       __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rd,
                                                                       5,
                                                                       (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs1),
                                                                       5,
                                                                       __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs2) ))
                                            : ((2U 
                                                & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                                ? (
                                                   (1U 
                                                    & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                                    ? VL_SFORMATF_N_NX("SLTU x%0#, x%0#, x%0#",0,
                                                                       5,
                                                                       __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rd,
                                                                       5,
                                                                       (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs1),
                                                                       5,
                                                                       __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs2) 
                                                    : VL_SFORMATF_N_NX("SLT x%0#, x%0#, x%0#",0,
                                                                       5,
                                                                       __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rd,
                                                                       5,
                                                                       (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs1),
                                                                       5,
                                                                       __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs2) )
                                                : (
                                                   (1U 
                                                    & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                                    ? VL_SFORMATF_N_NX("SLL x%0#, x%0#, x%0#",0,
                                                                       5,
                                                                       __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rd,
                                                                       5,
                                                                       (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs1),
                                                                       5,
                                                                       __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs2) 
                                                    : VL_SFORMATF_N_NX("ADD x%0#, x%0#, x%0#",0,
                                                                       5,
                                                                       __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rd,
                                                                       5,
                                                                       (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs1),
                                                                       5,
                                                                       __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs2) ))))
                                    : std::string{"Unknown instruction"})
                                : std::string{"Unknown instruction"})))
                    : ((8U & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__opcode))
                        ? std::string{"Unknown instruction"}
                        : ((4U & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__opcode))
                            ? std::string{"Unknown instruction"}
                            : ((2U & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__opcode))
                                ? ((1U & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__opcode))
                                    ? ((0U == (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                        ? VL_SFORMATF_N_NX("SB x%0#, %0#(x%0#)",0,
                                                           5,
                                                           __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs2,
                                                           12,
                                                           (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__immed_s),
                                                           5,
                                                           __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs1) 
                                        : ((1U == (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                            ? VL_SFORMATF_N_NX("SH x%0#, %0#(x%0#)",0,
                                                               5,
                                                               __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs2,
                                                               12,
                                                               (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__immed_s),
                                                               5,
                                                               __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs1) 
                                            : ((2U 
                                                == (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                                ? VL_SFORMATF_N_NX("SW x%0#, %0#(x%0#)",0,
                                                                   5,
                                                                   __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs2,
                                                                   12,
                                                                   (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__immed_s),
                                                                   5,
                                                                   __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs1) 
                                                : std::string{"Unknown S-type instruction"})))
                                    : std::string{"Unknown instruction"})
                                : std::string{"Unknown instruction"}))))
                : ((0x10U & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__opcode))
                    ? ((8U & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__opcode))
                        ? std::string{"Unknown instruction"}
                        : ((4U & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__opcode))
                            ? ((2U & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__opcode))
                                ? ((1U & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__opcode))
                                    ? VL_SFORMATF_N_NX("AUIPC x%0#, 0x%0x",0,
                                                       5,
                                                       __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rd,
                                                       20,
                                                       __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__immed_u) 
                                    : std::string{"Unknown instruction"})
                                : std::string{"Unknown instruction"})
                            : ((2U & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__opcode))
                                ? ((1U & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__opcode))
                                    ? ((4U & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                        ? ((2U & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                            ? ((1U 
                                                & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                                ? VL_SFORMATF_N_NX("ANDI x%0#, x%0#, %0#",0,
                                                                   5,
                                                                   __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rd,
                                                                   5,
                                                                   (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs1),
                                                                   12,
                                                                   __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__immed_i) 
                                                : VL_SFORMATF_N_NX("ORI x%0#, x%0#, %0#",0,
                                                                   5,
                                                                   __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rd,
                                                                   5,
                                                                   (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs1),
                                                                   12,
                                                                   __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__immed_i) )
                                            : ((1U 
                                                & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                                ? (
                                                   (0x20U 
                                                    & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__funct7))
                                                    ? 
                                                   ((0x20U 
                                                     == (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__funct7))
                                                     ? VL_SFORMATF_N_NX("SRAI x%0#, x%0#, %0#",0,
                                                                        5,
                                                                        __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rd,
                                                                        5,
                                                                        (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs1),
                                                                        5,
                                                                        (0x1fU 
                                                                         & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__immed_i))) 
                                                     : 
                                                    std::string{"Unknown I-type instruction"})
                                                    : VL_SFORMATF_N_NX("SRLI x%0#, x%0#, %0#",0,
                                                                       5,
                                                                       __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rd,
                                                                       5,
                                                                       (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs1),
                                                                       5,
                                                                       (0x1fU 
                                                                        & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__immed_i))) )
                                                : VL_SFORMATF_N_NX("XORI x%0#, x%0#, %0#",0,
                                                                   5,
                                                                   __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rd,
                                                                   5,
                                                                   (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs1),
                                                                   12,
                                                                   __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__immed_i) ))
                                        : ((2U & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                            ? ((1U 
                                                & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                                ? VL_SFORMATF_N_NX("SLTIU x%0#, x%0#, %0#",0,
                                                                   5,
                                                                   __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rd,
                                                                   5,
                                                                   (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs1),
                                                                   12,
                                                                   __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__immed_i) 
                                                : VL_SFORMATF_N_NX("SLTI x%0#, x%0#, %0#",0,
                                                                   5,
                                                                   __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rd,
                                                                   5,
                                                                   (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs1),
                                                                   12,
                                                                   __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__immed_i) )
                                            : ((1U 
                                                & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                                ? VL_SFORMATF_N_NX("SLLI x%0#, x%0#, %0#",0,
                                                                   5,
                                                                   __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rd,
                                                                   5,
                                                                   (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs1),
                                                                   5,
                                                                   (0x1fU 
                                                                    & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__immed_i))) 
                                                : VL_SFORMATF_N_NX("ADDI x%0#, x%0#, %0#",0,
                                                                   5,
                                                                   __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rd,
                                                                   5,
                                                                   (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs1),
                                                                   12,
                                                                   __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__immed_i) )))
                                    : std::string{"Unknown instruction"})
                                : std::string{"Unknown instruction"})))
                    : ((8U & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__opcode))
                        ? ((4U & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__opcode))
                            ? ((2U & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__opcode))
                                ? ((1U & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__opcode))
                                    ? ((0U == (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                        ? std::string{"fence"}
                                        : ((1U == (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                            ? ((0U 
                                                == (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__funct7))
                                                ? std::string{"fence.i"}
                                                : std::string{"Unknown fence instruction"})
                                            : std::string{"Unknown fence instruction"}))
                                    : std::string{"Unknown instruction"})
                                : std::string{"Unknown instruction"})
                            : std::string{"Unknown instruction"})
                        : ((4U & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__opcode))
                            ? std::string{"Unknown instruction"}
                            : ((2U & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__opcode))
                                ? ((1U & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__opcode))
                                    ? ((4U & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                        ? ((2U & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                            ? std::string{"Unknown Load instruction"}
                                            : ((1U 
                                                & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                                ? VL_SFORMATF_N_NX("LHU x%0#, %0#(x%0#)",0,
                                                                   5,
                                                                   __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rd,
                                                                   12,
                                                                   (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__immed_i),
                                                                   5,
                                                                   __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs1) 
                                                : VL_SFORMATF_N_NX("LBU x%0#, %0#(x%0#)",0,
                                                                   5,
                                                                   __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rd,
                                                                   12,
                                                                   (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__immed_i),
                                                                   5,
                                                                   __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs1) ))
                                        : ((2U & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                            ? ((1U 
                                                & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                                ? std::string{"Unknown Load instruction"}
                                                : VL_SFORMATF_N_NX("LW x%0#, %0#(x%0#)",0,
                                                                   5,
                                                                   __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rd,
                                                                   12,
                                                                   (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__immed_i),
                                                                   5,
                                                                   __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs1) )
                                            : ((1U 
                                                & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                                ? VL_SFORMATF_N_NX("LH x%0#, %0#(x%0#)",0,
                                                                   5,
                                                                   __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rd,
                                                                   12,
                                                                   (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__immed_i),
                                                                   5,
                                                                   __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs1) 
                                                : VL_SFORMATF_N_NX("LB x%0#, %0#(x%0#)",0,
                                                                   5,
                                                                   __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rd,
                                                                   12,
                                                                   (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__immed_i),
                                                                   5,
                                                                   __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs1) )))
                                    : std::string{"Unknown instruction"})
                                : ((1U & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__opcode))
                                    ? std::string{"Unknown instruction"}
                                    : ((0U == (__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__instruction 
                                               >> 7U))
                                        ? std::string{"bubble"}
                                        : std::string{"Unknown instruction"}))))))));
    __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__Vfuncout 
        = __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__da_str;
    vlSelfRef.Processor__DOT__datapath__DOT__disasm_string 
        = __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__Vfuncout;
    vlSelfRef.Processor__DOT__datapath__DOT__insn_lui 
        = (0x37U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode));
    vlSelfRef.Processor__DOT__datapath__DOT__insn_auipc 
        = (0x17U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode));
    vlSelfRef.Processor__DOT__datapath__DOT__insn_jal 
        = (0x6fU == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode));
    vlSelfRef.Processor__DOT__datapath__DOT__insn_jalr 
        = (0x67U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode));
    vlSelfRef.Processor__DOT__datapath__DOT__insn_fence 
        = (0xfU == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode));
    vlSelfRef.Processor__DOT__datapath__DOT__illegal_insn = 0U;
    vlSelfRef.Processor__DOT__datapath__DOT__insn_beq 
        = ((0x63U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode)) 
           & (0U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_funct3)));
    vlSelfRef.Processor__DOT__datapath__DOT__insn_bne 
        = ((0x63U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode)) 
           & (1U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_funct3)));
    vlSelfRef.Processor__DOT__datapath__DOT__insn_blt 
        = ((0x63U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode)) 
           & (4U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_funct3)));
    vlSelfRef.Processor__DOT__datapath__DOT__insn_bge 
        = ((0x63U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode)) 
           & (5U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_funct3)));
    vlSelfRef.Processor__DOT__datapath__DOT__insn_bltu 
        = ((0x63U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode)) 
           & (6U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_funct3)));
    vlSelfRef.Processor__DOT__datapath__DOT__insn_bgeu 
        = ((0x63U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode)) 
           & (7U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_funct3)));
    vlSelfRef.Processor__DOT__datapath__DOT__insn_lb 
        = ((3U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode)) 
           & (0U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_funct3)));
    vlSelfRef.Processor__DOT__datapath__DOT__insn_lh 
        = ((3U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode)) 
           & (1U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_funct3)));
    vlSelfRef.Processor__DOT__datapath__DOT__insn_lw 
        = ((3U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode)) 
           & (2U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_funct3)));
    vlSelfRef.Processor__DOT__datapath__DOT__insn_lbu 
        = ((3U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode)) 
           & (4U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_funct3)));
    vlSelfRef.Processor__DOT__datapath__DOT__insn_lhu 
        = ((3U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode)) 
           & (5U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_funct3)));
    vlSelfRef.Processor__DOT__datapath__DOT__insn_sb 
        = ((0x23U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode)) 
           & (0U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_funct3)));
    vlSelfRef.Processor__DOT__datapath__DOT__insn_sh 
        = ((0x23U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode)) 
           & (1U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_funct3)));
    vlSelfRef.Processor__DOT__datapath__DOT__insn_sw 
        = ((0x23U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode)) 
           & (2U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_funct3)));
    vlSelfRef.Processor__DOT__datapath__DOT__insn_addi 
        = ((0x13U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode)) 
           & (0U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_funct3)));
    vlSelfRef.Processor__DOT__datapath__DOT__insn_slti 
        = ((0x13U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode)) 
           & (2U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_funct3)));
    vlSelfRef.Processor__DOT__datapath__DOT__insn_sltiu 
        = ((0x13U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode)) 
           & (3U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_funct3)));
    vlSelfRef.Processor__DOT__datapath__DOT__insn_xori 
        = ((0x13U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode)) 
           & (4U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_funct3)));
    vlSelfRef.Processor__DOT__datapath__DOT__insn_ori 
        = ((0x13U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode)) 
           & (6U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_funct3)));
    vlSelfRef.Processor__DOT__datapath__DOT__insn_andi 
        = ((0x13U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode)) 
           & (7U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_funct3)));
    vlSelfRef.Processor__DOT__datapath__DOT__insn_slt 
        = ((0x33U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode)) 
           & ((2U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_funct3)) 
              & (0U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_funct7))));
    vlSelfRef.Processor__DOT__datapath__DOT__insn_sltu 
        = ((0x33U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode)) 
           & ((3U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_funct3)) 
              & (0U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_funct7))));
    vlSelfRef.Processor__DOT__datapath__DOT__insn_xor 
        = ((0x33U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode)) 
           & ((4U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_funct3)) 
              & (0U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_funct7))));
    vlSelfRef.Processor__DOT__datapath__DOT__insn_or 
        = ((0x33U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode)) 
           & ((6U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_funct3)) 
              & (0U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_funct7))));
    vlSelfRef.Processor__DOT__datapath__DOT__insn_and 
        = ((0x33U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode)) 
           & ((7U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_funct3)) 
              & (0U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_funct7))));
    vlSelfRef.Processor__DOT__datapath__DOT__enable_reg_write = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode))) {
            if ((0x10U & (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode))) {
                if ((1U & (~ ((IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode))) {
                        if ((2U & (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode))) {
                            if ((1U & (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode))) {
                                vlSelfRef.Processor__DOT__datapath__DOT__enable_reg_write = 1U;
                            }
                        }
                    } else if ((2U & (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode))) {
                        if ((1U & (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode))) {
                            if ((0x4000U & vlSelfRef.Processor__DOT__insn_from_imem)) {
                                if ((0x2000U & vlSelfRef.Processor__DOT__insn_from_imem)) {
                                    if ((0x1000U & vlSelfRef.Processor__DOT__insn_from_imem)) {
                                        if ((0U == 
                                             (vlSelfRef.Processor__DOT__insn_from_imem 
                                              >> 0x19U))) {
                                            vlSelfRef.Processor__DOT__datapath__DOT__enable_reg_write = 1U;
                                        }
                                    } else if ((0U 
                                                == 
                                                (vlSelfRef.Processor__DOT__insn_from_imem 
                                                 >> 0x19U))) {
                                        vlSelfRef.Processor__DOT__datapath__DOT__enable_reg_write = 1U;
                                    }
                                } else if ((0x1000U 
                                            & vlSelfRef.Processor__DOT__insn_from_imem)) {
                                    if ((0U == (vlSelfRef.Processor__DOT__insn_from_imem 
                                                >> 0x19U))) {
                                        vlSelfRef.Processor__DOT__datapath__DOT__enable_reg_write = 1U;
                                    } else if ((0x20U 
                                                == 
                                                (vlSelfRef.Processor__DOT__insn_from_imem 
                                                 >> 0x19U))) {
                                        vlSelfRef.Processor__DOT__datapath__DOT__enable_reg_write = 1U;
                                    }
                                } else if ((0U == (vlSelfRef.Processor__DOT__insn_from_imem 
                                                   >> 0x19U))) {
                                    vlSelfRef.Processor__DOT__datapath__DOT__enable_reg_write = 1U;
                                }
                            } else if ((0x2000U & vlSelfRef.Processor__DOT__insn_from_imem)) {
                                if ((0x1000U & vlSelfRef.Processor__DOT__insn_from_imem)) {
                                    if ((0U == (vlSelfRef.Processor__DOT__insn_from_imem 
                                                >> 0x19U))) {
                                        vlSelfRef.Processor__DOT__datapath__DOT__enable_reg_write = 1U;
                                    }
                                } else if ((0U == (vlSelfRef.Processor__DOT__insn_from_imem 
                                                   >> 0x19U))) {
                                    vlSelfRef.Processor__DOT__datapath__DOT__enable_reg_write = 1U;
                                }
                            } else if ((0x1000U & vlSelfRef.Processor__DOT__insn_from_imem)) {
                                if ((0U == (vlSelfRef.Processor__DOT__insn_from_imem 
                                            >> 0x19U))) {
                                    vlSelfRef.Processor__DOT__datapath__DOT__enable_reg_write = 1U;
                                }
                            } else if ((0U == (vlSelfRef.Processor__DOT__insn_from_imem 
                                               >> 0x19U))) {
                                vlSelfRef.Processor__DOT__datapath__DOT__enable_reg_write = 1U;
                            } else if ((0x20U == (vlSelfRef.Processor__DOT__insn_from_imem 
                                                  >> 0x19U))) {
                                vlSelfRef.Processor__DOT__datapath__DOT__enable_reg_write = 1U;
                            }
                        }
                    }
                }
            }
        } else if ((0x10U & (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode))) {
            if ((1U & (~ ((IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode) 
                          >> 3U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode))) {
                        if ((1U & (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode))) {
                            if ((0x4000U & vlSelfRef.Processor__DOT__insn_from_imem)) {
                                if ((0x2000U & vlSelfRef.Processor__DOT__insn_from_imem)) {
                                    vlSelfRef.Processor__DOT__datapath__DOT__enable_reg_write = 1U;
                                } else if ((0x1000U 
                                            & vlSelfRef.Processor__DOT__insn_from_imem)) {
                                    if ((0U == (vlSelfRef.Processor__DOT__insn_from_imem 
                                                >> 0x19U))) {
                                        vlSelfRef.Processor__DOT__datapath__DOT__enable_reg_write = 1U;
                                    } else if ((0x20U 
                                                == 
                                                (vlSelfRef.Processor__DOT__insn_from_imem 
                                                 >> 0x19U))) {
                                        vlSelfRef.Processor__DOT__datapath__DOT__enable_reg_write = 1U;
                                    }
                                } else {
                                    vlSelfRef.Processor__DOT__datapath__DOT__enable_reg_write = 1U;
                                }
                            } else if ((0x2000U & vlSelfRef.Processor__DOT__insn_from_imem)) {
                                vlSelfRef.Processor__DOT__datapath__DOT__enable_reg_write = 1U;
                            } else if ((0x1000U & vlSelfRef.Processor__DOT__insn_from_imem)) {
                                if ((0U == (vlSelfRef.Processor__DOT__insn_from_imem 
                                            >> 0x19U))) {
                                    vlSelfRef.Processor__DOT__datapath__DOT__enable_reg_write = 1U;
                                }
                            } else {
                                vlSelfRef.Processor__DOT__datapath__DOT__enable_reg_write = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    Processor__DOT__datapath__DOT____VdfgRegularize_h0d652ed3_0_15 
        = ((0x13U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode)) 
           & (5U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_funct3)));
    Processor__DOT__datapath__DOT____VdfgRegularize_h0d652ed3_0_18 
        = ((0x33U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode)) 
           & (0U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_funct3)));
    Processor__DOT__datapath__DOT____VdfgRegularize_h0d652ed3_0_19 
        = ((0x33U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode)) 
           & (5U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_funct3)));
    vlSelfRef.Processor__DOT__datapath__DOT__insn_ecall 
        = ((0x73U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode)) 
           & (0U == (vlSelfRef.Processor__DOT__memory__DOT__insn_from_imem 
                     >> 7U)));
    Processor__DOT__datapath__DOT____VdfgRegularize_h0d652ed3_0_20 
        = ((0x33U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode)) 
           & (1U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_funct7)));
    vlSelfRef.Processor__DOT__datapath__DOT__imm_i_sext 
        = (((- (IData)((vlSelfRef.Processor__DOT__memory__DOT__insn_from_imem 
                        >> 0x1fU))) << 0xcU) | (IData)(vlSelfRef.Processor__DOT__datapath__DOT__imm_i));
    vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__rs2 
        = vlSelfRef.Processor__DOT__datapath__DOT__insn_rs2;
    vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__rs2_data 
        = vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__regs
        [vlSelfRef.Processor__DOT__datapath__DOT__insn_rs2];
    vlSelfRef.Processor__DOT__datapath__DOT__imm_shamt 
        = vlSelfRef.Processor__DOT__datapath__DOT__insn_rs2;
    vlSymsp->TOP__Processor__DOT__datapath__DOT__subber_reg.b 
        = ((IData)(1U) + (~ vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__regs
                          [vlSelfRef.Processor__DOT__datapath__DOT__insn_rs2]));
    vlSelfRef.Processor__DOT__datapath__DOT__rs2_data 
        = vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__regs
        [vlSelfRef.Processor__DOT__datapath__DOT__insn_rs2];
    vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__rs1 
        = vlSelfRef.Processor__DOT__datapath__DOT__insn_rs1;
    vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__rs1_data 
        = vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__regs
        [vlSelfRef.Processor__DOT__datapath__DOT__insn_rs1];
    vlSelfRef.Processor__DOT__datapath__DOT__eq_condition 
        = (vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__regs
           [vlSelfRef.Processor__DOT__datapath__DOT__insn_rs1] 
           == vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__regs
           [vlSelfRef.Processor__DOT__datapath__DOT__insn_rs2]);
    vlSelfRef.Processor__DOT__datapath__DOT__neq_condition 
        = (vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__regs
           [vlSelfRef.Processor__DOT__datapath__DOT__insn_rs1] 
           != vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__regs
           [vlSelfRef.Processor__DOT__datapath__DOT__insn_rs2]);
    vlSelfRef.Processor__DOT__datapath__DOT__lt_signed 
        = VL_LTS_III(32, vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__regs
                     [vlSelfRef.Processor__DOT__datapath__DOT__insn_rs1], 
                     vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__regs
                     [vlSelfRef.Processor__DOT__datapath__DOT__insn_rs2]);
    vlSelfRef.Processor__DOT__datapath__DOT__ge_signed 
        = VL_GTES_III(32, vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__regs
                      [vlSelfRef.Processor__DOT__datapath__DOT__insn_rs1], 
                      vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__regs
                      [vlSelfRef.Processor__DOT__datapath__DOT__insn_rs2]);
    vlSelfRef.Processor__DOT__datapath__DOT__lt_unsigned 
        = (vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__regs
           [vlSelfRef.Processor__DOT__datapath__DOT__insn_rs1] 
           < vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__regs
           [vlSelfRef.Processor__DOT__datapath__DOT__insn_rs2]);
    vlSelfRef.Processor__DOT__datapath__DOT__ge_unsigned 
        = (vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__regs
           [vlSelfRef.Processor__DOT__datapath__DOT__insn_rs1] 
           >= vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__regs
           [vlSelfRef.Processor__DOT__datapath__DOT__insn_rs2]);
    vlSelfRef.Processor__DOT__datapath__DOT__rs1_data 
        = vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__regs
        [vlSelfRef.Processor__DOT__datapath__DOT__insn_rs1];
    vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__clk 
        = vlSelfRef.Processor__DOT__datapath__DOT__clk;
    vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__rst 
        = vlSelfRef.Processor__DOT__datapath__DOT__rst;
    vlSelfRef.Processor__DOT__datapath__DOT__imm_s_sext 
        = (((- (IData)((vlSelfRef.Processor__DOT__memory__DOT__insn_from_imem 
                        >> 0x1fU))) << 0xcU) | (IData)(vlSelfRef.Processor__DOT__datapath__DOT__imm_s));
    vlSelfRef.Processor__DOT__datapath__DOT__insn_slli 
        = ((0x13U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode)) 
           & (IData)(Processor__DOT__datapath__DOT____VdfgRegularize_h0d652ed3_0_21));
    vlSelfRef.Processor__DOT__datapath__DOT__insn_sll 
        = ((0x33U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode)) 
           & (IData)(Processor__DOT__datapath__DOT____VdfgRegularize_h0d652ed3_0_21));
    vlSelfRef.Processor__DOT__datapath__DOT__disasm_wire[0U] 
        = ((0xff000000U & vlSelfRef.Processor__DOT__datapath__DOT__disasm_wire[0U]) 
           | ((VL_GETC_N(vlSelfRef.Processor__DOT__datapath__DOT__disasm_string,0x1dU) 
               << 0x10U) | ((VL_GETC_N(vlSelfRef.Processor__DOT__datapath__DOT__disasm_string,0x1eU) 
                             << 8U) | VL_GETC_N(vlSelfRef.Processor__DOT__datapath__DOT__disasm_string,0x1fU))));
    vlSelfRef.Processor__DOT__datapath__DOT__disasm_wire[0U] 
        = ((0xffffffU & vlSelfRef.Processor__DOT__datapath__DOT__disasm_wire[0U]) 
           | (VL_GETC_N(vlSelfRef.Processor__DOT__datapath__DOT__disasm_string,0x1cU) 
              << 0x18U));
    vlSelfRef.Processor__DOT__datapath__DOT__disasm_wire[1U] 
        = ((0xffff0000U & vlSelfRef.Processor__DOT__datapath__DOT__disasm_wire[1U]) 
           | (0xffffffU & ((0xffff00U & (VL_GETC_N(vlSelfRef.Processor__DOT__datapath__DOT__disasm_string,0x1aU) 
                                         << 8U)) | 
                           ((0xffffffU & VL_GETC_N(vlSelfRef.Processor__DOT__datapath__DOT__disasm_string,0x1bU)) 
                            | (VL_GETC_N(vlSelfRef.Processor__DOT__datapath__DOT__disasm_string,0x1cU) 
                               >> 8U)))));
    vlSelfRef.Processor__DOT__datapath__DOT__disasm_wire[1U] 
        = ((0xffffU & vlSelfRef.Processor__DOT__datapath__DOT__disasm_wire[1U]) 
           | (0xffff0000U & ((VL_GETC_N(vlSelfRef.Processor__DOT__datapath__DOT__disasm_string,0x18U) 
                              << 0x18U) | (VL_GETC_N(vlSelfRef.Processor__DOT__datapath__DOT__disasm_string,0x19U) 
                                           << 0x10U))));
    vlSelfRef.Processor__DOT__datapath__DOT__disasm_wire[2U] 
        = ((0xffffff00U & vlSelfRef.Processor__DOT__datapath__DOT__disasm_wire[2U]) 
           | (0xffffU & ((0xffffU & VL_GETC_N(vlSelfRef.Processor__DOT__datapath__DOT__disasm_string,0x17U)) 
                         | ((0xffffU & (VL_GETC_N(vlSelfRef.Processor__DOT__datapath__DOT__disasm_string,0x18U) 
                                        >> 8U)) | (
                                                   VL_GETC_N(vlSelfRef.Processor__DOT__datapath__DOT__disasm_string,0x19U) 
                                                   >> 0x10U)))));
    vlSelfRef.Processor__DOT__datapath__DOT__disasm_wire[2U] 
        = ((0xffU & vlSelfRef.Processor__DOT__datapath__DOT__disasm_wire[2U]) 
           | (0xffffff00U & ((VL_GETC_N(vlSelfRef.Processor__DOT__datapath__DOT__disasm_string,0x14U) 
                              << 0x18U) | ((VL_GETC_N(vlSelfRef.Processor__DOT__datapath__DOT__disasm_string,0x15U) 
                                            << 0x10U) 
                                           | (VL_GETC_N(vlSelfRef.Processor__DOT__datapath__DOT__disasm_string,0x16U) 
                                              << 8U)))));
    vlSelfRef.Processor__DOT__datapath__DOT__disasm_wire[3U] 
        = ((0xff000000U & vlSelfRef.Processor__DOT__datapath__DOT__disasm_wire[3U]) 
           | ((VL_GETC_N(vlSelfRef.Processor__DOT__datapath__DOT__disasm_string,0x11U) 
               << 0x10U) | ((VL_GETC_N(vlSelfRef.Processor__DOT__datapath__DOT__disasm_string,0x12U) 
                             << 8U) | VL_GETC_N(vlSelfRef.Processor__DOT__datapath__DOT__disasm_string,0x13U))));
    vlSelfRef.Processor__DOT__datapath__DOT__disasm_wire[3U] 
        = ((0xffffffU & vlSelfRef.Processor__DOT__datapath__DOT__disasm_wire[3U]) 
           | (VL_GETC_N(vlSelfRef.Processor__DOT__datapath__DOT__disasm_string,0x10U) 
              << 0x18U));
    vlSelfRef.Processor__DOT__datapath__DOT__disasm_wire[4U] 
        = ((0xffff0000U & vlSelfRef.Processor__DOT__datapath__DOT__disasm_wire[4U]) 
           | (0xffffffU & ((0xffff00U & (VL_GETC_N(vlSelfRef.Processor__DOT__datapath__DOT__disasm_string,0xeU) 
                                         << 8U)) | 
                           ((0xffffffU & VL_GETC_N(vlSelfRef.Processor__DOT__datapath__DOT__disasm_string,0xfU)) 
                            | (VL_GETC_N(vlSelfRef.Processor__DOT__datapath__DOT__disasm_string,0x10U) 
                               >> 8U)))));
    vlSelfRef.Processor__DOT__datapath__DOT__disasm_wire[4U] 
        = ((0xffffU & vlSelfRef.Processor__DOT__datapath__DOT__disasm_wire[4U]) 
           | (0xffff0000U & ((VL_GETC_N(vlSelfRef.Processor__DOT__datapath__DOT__disasm_string,0xcU) 
                              << 0x18U) | (VL_GETC_N(vlSelfRef.Processor__DOT__datapath__DOT__disasm_string,0xdU) 
                                           << 0x10U))));
    vlSelfRef.Processor__DOT__datapath__DOT__disasm_wire[5U] 
        = ((0xffffff00U & vlSelfRef.Processor__DOT__datapath__DOT__disasm_wire[5U]) 
           | (0xffffU & ((0xffffU & VL_GETC_N(vlSelfRef.Processor__DOT__datapath__DOT__disasm_string,0xbU)) 
                         | ((0xffffU & (VL_GETC_N(vlSelfRef.Processor__DOT__datapath__DOT__disasm_string,0xcU) 
                                        >> 8U)) | (
                                                   VL_GETC_N(vlSelfRef.Processor__DOT__datapath__DOT__disasm_string,0xdU) 
                                                   >> 0x10U)))));
    vlSelfRef.Processor__DOT__datapath__DOT__disasm_wire[5U] 
        = ((0xffU & vlSelfRef.Processor__DOT__datapath__DOT__disasm_wire[5U]) 
           | (0xffffff00U & ((VL_GETC_N(vlSelfRef.Processor__DOT__datapath__DOT__disasm_string,8U) 
                              << 0x18U) | ((VL_GETC_N(vlSelfRef.Processor__DOT__datapath__DOT__disasm_string,9U) 
                                            << 0x10U) 
                                           | (VL_GETC_N(vlSelfRef.Processor__DOT__datapath__DOT__disasm_string,0xaU) 
                                              << 8U)))));
    vlSelfRef.Processor__DOT__datapath__DOT__disasm_wire[6U] 
        = ((0xff000000U & vlSelfRef.Processor__DOT__datapath__DOT__disasm_wire[6U]) 
           | ((VL_GETC_N(vlSelfRef.Processor__DOT__datapath__DOT__disasm_string,5U) 
               << 0x10U) | ((VL_GETC_N(vlSelfRef.Processor__DOT__datapath__DOT__disasm_string,6U) 
                             << 8U) | VL_GETC_N(vlSelfRef.Processor__DOT__datapath__DOT__disasm_string,7U))));
    vlSelfRef.Processor__DOT__datapath__DOT__disasm_wire[6U] 
        = ((0xffffffU & vlSelfRef.Processor__DOT__datapath__DOT__disasm_wire[6U]) 
           | (VL_GETC_N(vlSelfRef.Processor__DOT__datapath__DOT__disasm_string,4U) 
              << 0x18U));
    vlSelfRef.Processor__DOT__datapath__DOT__disasm_wire[7U] 
        = ((0xffff0000U & vlSelfRef.Processor__DOT__datapath__DOT__disasm_wire[7U]) 
           | (0xffffffU & ((0xffff00U & (VL_GETC_N(vlSelfRef.Processor__DOT__datapath__DOT__disasm_string,2U) 
                                         << 8U)) | 
                           ((0xffffffU & VL_GETC_N(vlSelfRef.Processor__DOT__datapath__DOT__disasm_string,3U)) 
                            | (VL_GETC_N(vlSelfRef.Processor__DOT__datapath__DOT__disasm_string,4U) 
                               >> 8U)))));
    vlSelfRef.Processor__DOT__datapath__DOT__disasm_wire[7U] 
        = ((0xffffU & vlSelfRef.Processor__DOT__datapath__DOT__disasm_wire[7U]) 
           | (0xffff0000U & ((VL_GETC_N(vlSelfRef.Processor__DOT__datapath__DOT__disasm_string,0U) 
                              << 0x18U) | (VL_GETC_N(vlSelfRef.Processor__DOT__datapath__DOT__disasm_string,1U) 
                                           << 0x10U))));
    vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__we 
        = vlSelfRef.Processor__DOT__datapath__DOT__enable_reg_write;
    vlSelfRef.Processor__DOT__datapath__DOT__insn_srli 
        = ((IData)(Processor__DOT__datapath__DOT____VdfgRegularize_h0d652ed3_0_15) 
           & (0U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_funct7)));
    vlSelfRef.Processor__DOT__datapath__DOT__insn_srai 
        = ((IData)(Processor__DOT__datapath__DOT____VdfgRegularize_h0d652ed3_0_15) 
           & (0x20U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_funct7)));
    vlSelfRef.Processor__DOT__datapath__DOT__insn_add 
        = ((IData)(Processor__DOT__datapath__DOT____VdfgRegularize_h0d652ed3_0_18) 
           & (0U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_funct7)));
    vlSelfRef.Processor__DOT__datapath__DOT__insn_sub 
        = ((IData)(Processor__DOT__datapath__DOT____VdfgRegularize_h0d652ed3_0_18) 
           & (0x20U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_funct7)));
    vlSelfRef.Processor__DOT__datapath__DOT__insn_srl 
        = ((IData)(Processor__DOT__datapath__DOT____VdfgRegularize_h0d652ed3_0_19) 
           & (0U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_funct7)));
    vlSelfRef.Processor__DOT__datapath__DOT__insn_sra 
        = ((IData)(Processor__DOT__datapath__DOT____VdfgRegularize_h0d652ed3_0_19) 
           & (0x20U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_funct7)));
    vlSelfRef.Processor__DOT__datapath__DOT__halt = vlSelfRef.Processor__DOT__datapath__DOT__insn_ecall;
    vlSelfRef.Processor__DOT__datapath__DOT__insn_mul 
        = ((IData)(Processor__DOT__datapath__DOT____VdfgRegularize_h0d652ed3_0_20) 
           & (0U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_funct3)));
    vlSelfRef.Processor__DOT__datapath__DOT__insn_mulh 
        = ((IData)(Processor__DOT__datapath__DOT____VdfgRegularize_h0d652ed3_0_20) 
           & (1U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_funct3)));
    vlSelfRef.Processor__DOT__datapath__DOT__insn_mulhsu 
        = ((IData)(Processor__DOT__datapath__DOT____VdfgRegularize_h0d652ed3_0_20) 
           & (2U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_funct3)));
    vlSelfRef.Processor__DOT__datapath__DOT__insn_mulhu 
        = ((IData)(Processor__DOT__datapath__DOT____VdfgRegularize_h0d652ed3_0_20) 
           & (3U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_funct3)));
    vlSelfRef.Processor__DOT__datapath__DOT__insn_div 
        = ((IData)(Processor__DOT__datapath__DOT____VdfgRegularize_h0d652ed3_0_20) 
           & (4U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_funct3)));
    vlSelfRef.Processor__DOT__datapath__DOT__insn_divu 
        = ((IData)(Processor__DOT__datapath__DOT____VdfgRegularize_h0d652ed3_0_20) 
           & (5U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_funct3)));
    vlSelfRef.Processor__DOT__datapath__DOT__insn_rem 
        = ((IData)(Processor__DOT__datapath__DOT____VdfgRegularize_h0d652ed3_0_20) 
           & (6U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_funct3)));
    vlSelfRef.Processor__DOT__datapath__DOT__insn_remu 
        = ((IData)(Processor__DOT__datapath__DOT____VdfgRegularize_h0d652ed3_0_20) 
           & (7U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_funct3)));
    vlSymsp->TOP__Processor__DOT__datapath__DOT__adder.b 
        = vlSelfRef.Processor__DOT__datapath__DOT__imm_i_sext;
    vlSymsp->TOP__Processor__DOT__datapath__DOT__adder_reg.b 
        = vlSelfRef.Processor__DOT__datapath__DOT__rs2_data;
    vlSelfRef.Processor__DOT__datapath__DOT__branch_decision = 0U;
    if ((0x40U & (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode))) {
        if ((0x20U & (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode))) {
            if ((0x10U & (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode))) {
                vlSelfRef.Processor__DOT__datapath__DOT__illegal_insn = 1U;
            } else if ((8U & (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode))) {
                vlSelfRef.Processor__DOT__datapath__DOT__illegal_insn = 1U;
            } else if ((4U & (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode))) {
                vlSelfRef.Processor__DOT__datapath__DOT__illegal_insn = 1U;
            } else if ((2U & (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode))) {
                if ((1U & (~ (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode)))) {
                    vlSelfRef.Processor__DOT__datapath__DOT__illegal_insn = 1U;
                }
            } else {
                vlSelfRef.Processor__DOT__datapath__DOT__illegal_insn = 1U;
            }
            if ((1U & (~ ((IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode))) {
                            if ((1U & (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode))) {
                                vlSelfRef.Processor__DOT__datapath__DOT__branch_decision 
                                    = ((0x4000U & vlSelfRef.Processor__DOT__insn_from_imem)
                                        ? ((0x2000U 
                                            & vlSelfRef.Processor__DOT__insn_from_imem)
                                            ? ((0x1000U 
                                                & vlSelfRef.Processor__DOT__insn_from_imem)
                                                ? (IData)(vlSelfRef.Processor__DOT__datapath__DOT__ge_unsigned)
                                                : (IData)(vlSelfRef.Processor__DOT__datapath__DOT__lt_unsigned))
                                            : ((0x1000U 
                                                & vlSelfRef.Processor__DOT__insn_from_imem)
                                                ? (IData)(vlSelfRef.Processor__DOT__datapath__DOT__ge_signed)
                                                : (IData)(vlSelfRef.Processor__DOT__datapath__DOT__lt_signed)))
                                        : ((1U & (~ 
                                                  (vlSelfRef.Processor__DOT__insn_from_imem 
                                                   >> 0xdU))) 
                                           && ((0x1000U 
                                                & vlSelfRef.Processor__DOT__insn_from_imem)
                                                ? (IData)(vlSelfRef.Processor__DOT__datapath__DOT__neq_condition)
                                                : (IData)(vlSelfRef.Processor__DOT__datapath__DOT__eq_condition))));
                            }
                        }
                    }
                }
            }
        } else {
            vlSelfRef.Processor__DOT__datapath__DOT__illegal_insn = 1U;
        }
    } else if ((0x20U & (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode))) {
        if ((0x10U & (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode))) {
            if ((8U & (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode))) {
                vlSelfRef.Processor__DOT__datapath__DOT__illegal_insn = 1U;
            } else if ((4U & (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode))) {
                if ((2U & (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode))) {
                    if ((1U & (~ (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode)))) {
                        vlSelfRef.Processor__DOT__datapath__DOT__illegal_insn = 1U;
                    }
                } else {
                    vlSelfRef.Processor__DOT__datapath__DOT__illegal_insn = 1U;
                }
            } else if ((2U & (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode))) {
                if ((1U & (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode))) {
                    if ((0x4000U & vlSelfRef.Processor__DOT__insn_from_imem)) {
                        if ((0x2000U & vlSelfRef.Processor__DOT__insn_from_imem)) {
                            if ((0x1000U & vlSelfRef.Processor__DOT__insn_from_imem)) {
                                if ((0U != (vlSelfRef.Processor__DOT__insn_from_imem 
                                            >> 0x19U))) {
                                    vlSelfRef.Processor__DOT__datapath__DOT__illegal_insn = 1U;
                                }
                            } else if ((0U != (vlSelfRef.Processor__DOT__insn_from_imem 
                                               >> 0x19U))) {
                                vlSelfRef.Processor__DOT__datapath__DOT__illegal_insn = 1U;
                            }
                        } else if ((0x1000U & vlSelfRef.Processor__DOT__insn_from_imem)) {
                            if ((0U != (vlSelfRef.Processor__DOT__insn_from_imem 
                                        >> 0x19U))) {
                                if ((0x20U != (vlSelfRef.Processor__DOT__insn_from_imem 
                                               >> 0x19U))) {
                                    vlSelfRef.Processor__DOT__datapath__DOT__illegal_insn = 1U;
                                }
                            }
                        } else if ((0U != (vlSelfRef.Processor__DOT__insn_from_imem 
                                           >> 0x19U))) {
                            vlSelfRef.Processor__DOT__datapath__DOT__illegal_insn = 1U;
                        }
                    } else if ((0x2000U & vlSelfRef.Processor__DOT__insn_from_imem)) {
                        if ((0x1000U & vlSelfRef.Processor__DOT__insn_from_imem)) {
                            if ((0U != (vlSelfRef.Processor__DOT__insn_from_imem 
                                        >> 0x19U))) {
                                vlSelfRef.Processor__DOT__datapath__DOT__illegal_insn = 1U;
                            }
                        } else if ((0U != (vlSelfRef.Processor__DOT__insn_from_imem 
                                           >> 0x19U))) {
                            vlSelfRef.Processor__DOT__datapath__DOT__illegal_insn = 1U;
                        }
                    } else if ((0x1000U & vlSelfRef.Processor__DOT__insn_from_imem)) {
                        if ((0U != (vlSelfRef.Processor__DOT__insn_from_imem 
                                    >> 0x19U))) {
                            vlSelfRef.Processor__DOT__datapath__DOT__illegal_insn = 1U;
                        }
                    } else if ((0U != (vlSelfRef.Processor__DOT__insn_from_imem 
                                       >> 0x19U))) {
                        if ((0x20U != (vlSelfRef.Processor__DOT__insn_from_imem 
                                       >> 0x19U))) {
                            vlSelfRef.Processor__DOT__datapath__DOT__illegal_insn = 1U;
                        }
                    }
                } else {
                    vlSelfRef.Processor__DOT__datapath__DOT__illegal_insn = 1U;
                }
            } else {
                vlSelfRef.Processor__DOT__datapath__DOT__illegal_insn = 1U;
            }
        } else {
            vlSelfRef.Processor__DOT__datapath__DOT__illegal_insn = 1U;
        }
    } else if ((0x10U & (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode))) {
        if ((8U & (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode))) {
            vlSelfRef.Processor__DOT__datapath__DOT__illegal_insn = 1U;
        } else if ((4U & (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode))) {
            vlSelfRef.Processor__DOT__datapath__DOT__illegal_insn = 1U;
        } else if ((2U & (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode))) {
            if ((1U & (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode))) {
                if ((0x4000U & vlSelfRef.Processor__DOT__insn_from_imem)) {
                    if ((1U & (~ (vlSelfRef.Processor__DOT__insn_from_imem 
                                  >> 0xdU)))) {
                        if ((0x1000U & vlSelfRef.Processor__DOT__insn_from_imem)) {
                            if ((0U != (vlSelfRef.Processor__DOT__insn_from_imem 
                                        >> 0x19U))) {
                                if ((0x20U != (vlSelfRef.Processor__DOT__insn_from_imem 
                                               >> 0x19U))) {
                                    vlSelfRef.Processor__DOT__datapath__DOT__illegal_insn = 1U;
                                }
                            }
                        }
                    }
                } else if ((1U & (~ (vlSelfRef.Processor__DOT__insn_from_imem 
                                     >> 0xdU)))) {
                    if ((0x1000U & vlSelfRef.Processor__DOT__insn_from_imem)) {
                        if ((0U != (vlSelfRef.Processor__DOT__insn_from_imem 
                                    >> 0x19U))) {
                            vlSelfRef.Processor__DOT__datapath__DOT__illegal_insn = 1U;
                        }
                    }
                }
            } else {
                vlSelfRef.Processor__DOT__datapath__DOT__illegal_insn = 1U;
            }
        } else {
            vlSelfRef.Processor__DOT__datapath__DOT__illegal_insn = 1U;
        }
    } else {
        vlSelfRef.Processor__DOT__datapath__DOT__illegal_insn = 1U;
    }
    vlSymsp->TOP__Processor__DOT__datapath__DOT__adder.a 
        = vlSelfRef.Processor__DOT__datapath__DOT__rs1_data;
    vlSymsp->TOP__Processor__DOT__datapath__DOT__adder_reg.a 
        = vlSelfRef.Processor__DOT__datapath__DOT__rs1_data;
    vlSymsp->TOP__Processor__DOT__datapath__DOT__subber_reg.a 
        = vlSelfRef.Processor__DOT__datapath__DOT__rs1_data;
    vlSelfRef.halt = vlSelfRef.Processor__DOT__datapath__DOT__halt;
    vlSelfRef.Processor__DOT__halt = vlSelfRef.Processor__DOT__datapath__DOT__halt;
    vlSelfRef.Processor__DOT__datapath__DOT__pcNext 
        = ((IData)(vlSelfRef.Processor__DOT__datapath__DOT__branch_decision)
            ? (vlSelfRef.Processor__DOT__datapath__DOT__pcCurrent 
               + vlSelfRef.Processor__DOT__datapath__DOT__imm_b_sext)
            : ((IData)(4U) + vlSelfRef.Processor__DOT__datapath__DOT__pcCurrent));
}

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__1(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Processor__DOT__datapath__DOT__cla_result 
        = vlSymsp->TOP__Processor__DOT__datapath__DOT__adder.sum;
    vlSelfRef.Processor__DOT__datapath__DOT__cla_result_reg 
        = vlSymsp->TOP__Processor__DOT__datapath__DOT__adder_reg.sum;
    vlSelfRef.Processor__DOT__datapath__DOT__cla_result_reg2 
        = vlSymsp->TOP__Processor__DOT__datapath__DOT__subber_reg.sum;
    vlSelfRef.Processor__DOT__datapath__DOT__data_reg_write = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode))) {
            if ((0x10U & (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode))) {
                if ((1U & (~ ((IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode))) {
                        if ((2U & (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode))) {
                            if ((1U & (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode))) {
                                vlSelfRef.Processor__DOT__datapath__DOT__data_reg_write 
                                    = (0xfffff000U 
                                       & vlSelfRef.Processor__DOT__insn_from_imem);
                            }
                        }
                    } else if ((2U & (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode))) {
                        if ((1U & (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode))) {
                            if ((0x4000U & vlSelfRef.Processor__DOT__insn_from_imem)) {
                                if ((0x2000U & vlSelfRef.Processor__DOT__insn_from_imem)) {
                                    if ((0x1000U & vlSelfRef.Processor__DOT__insn_from_imem)) {
                                        if ((0U == 
                                             (vlSelfRef.Processor__DOT__insn_from_imem 
                                              >> 0x19U))) {
                                            vlSelfRef.Processor__DOT__datapath__DOT__data_reg_write 
                                                = (vlSelfRef.Processor__DOT__datapath__DOT__rs1_data 
                                                   & vlSelfRef.Processor__DOT__datapath__DOT__rs2_data);
                                        }
                                    } else if ((0U 
                                                == 
                                                (vlSelfRef.Processor__DOT__insn_from_imem 
                                                 >> 0x19U))) {
                                        vlSelfRef.Processor__DOT__datapath__DOT__data_reg_write 
                                            = (vlSelfRef.Processor__DOT__datapath__DOT__rs1_data 
                                               | vlSelfRef.Processor__DOT__datapath__DOT__rs2_data);
                                    }
                                } else if ((0x1000U 
                                            & vlSelfRef.Processor__DOT__insn_from_imem)) {
                                    if ((0U == (vlSelfRef.Processor__DOT__insn_from_imem 
                                                >> 0x19U))) {
                                        vlSelfRef.Processor__DOT__datapath__DOT__data_reg_write 
                                            = (vlSelfRef.Processor__DOT__datapath__DOT__rs1_data 
                                               >> (0x1fU 
                                                   & vlSelfRef.Processor__DOT__datapath__DOT__rs2_data));
                                    } else if ((0x20U 
                                                == 
                                                (vlSelfRef.Processor__DOT__insn_from_imem 
                                                 >> 0x19U))) {
                                        vlSelfRef.Processor__DOT__datapath__DOT__data_reg_write 
                                            = VL_SHIFTRS_III(32,32,5, vlSelfRef.Processor__DOT__datapath__DOT__rs1_data, 
                                                             (0x1fU 
                                                              & vlSelfRef.Processor__DOT__datapath__DOT__rs2_data));
                                    }
                                } else if ((0U == (vlSelfRef.Processor__DOT__insn_from_imem 
                                                   >> 0x19U))) {
                                    vlSelfRef.Processor__DOT__datapath__DOT__data_reg_write 
                                        = (vlSelfRef.Processor__DOT__datapath__DOT__rs1_data 
                                           ^ vlSelfRef.Processor__DOT__datapath__DOT__rs2_data);
                                }
                            } else if ((0x2000U & vlSelfRef.Processor__DOT__insn_from_imem)) {
                                if ((0x1000U & vlSelfRef.Processor__DOT__insn_from_imem)) {
                                    if ((0U == (vlSelfRef.Processor__DOT__insn_from_imem 
                                                >> 0x19U))) {
                                        vlSelfRef.Processor__DOT__datapath__DOT__data_reg_write 
                                            = ((vlSelfRef.Processor__DOT__datapath__DOT__rs1_data 
                                                < vlSelfRef.Processor__DOT__datapath__DOT__rs2_data)
                                                ? 1U
                                                : 0U);
                                    }
                                } else if ((0U == (vlSelfRef.Processor__DOT__insn_from_imem 
                                                   >> 0x19U))) {
                                    vlSelfRef.Processor__DOT__datapath__DOT__data_reg_write 
                                        = (VL_LTS_III(32, vlSelfRef.Processor__DOT__datapath__DOT__rs1_data, vlSelfRef.Processor__DOT__datapath__DOT__rs2_data)
                                            ? 1U : 0U);
                                }
                            } else if ((0x1000U & vlSelfRef.Processor__DOT__insn_from_imem)) {
                                if ((0U == (vlSelfRef.Processor__DOT__insn_from_imem 
                                            >> 0x19U))) {
                                    vlSelfRef.Processor__DOT__datapath__DOT__data_reg_write 
                                        = (vlSelfRef.Processor__DOT__datapath__DOT__rs1_data 
                                           << (0x1fU 
                                               & vlSelfRef.Processor__DOT__datapath__DOT__rs2_data));
                                }
                            } else if ((0U == (vlSelfRef.Processor__DOT__insn_from_imem 
                                               >> 0x19U))) {
                                vlSelfRef.Processor__DOT__datapath__DOT__data_reg_write 
                                    = vlSelfRef.Processor__DOT__datapath__DOT__cla_result_reg;
                            } else if ((0x20U == (vlSelfRef.Processor__DOT__insn_from_imem 
                                                  >> 0x19U))) {
                                vlSelfRef.Processor__DOT__datapath__DOT__data_reg_write 
                                    = vlSelfRef.Processor__DOT__datapath__DOT__cla_result_reg2;
                            }
                        }
                    }
                }
            }
        } else if ((0x10U & (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode))) {
            if ((1U & (~ ((IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode) 
                          >> 3U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode))) {
                        if ((1U & (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode))) {
                            if ((0x4000U & vlSelfRef.Processor__DOT__insn_from_imem)) {
                                if ((0x2000U & vlSelfRef.Processor__DOT__insn_from_imem)) {
                                    vlSelfRef.Processor__DOT__datapath__DOT__data_reg_write 
                                        = ((0x1000U 
                                            & vlSelfRef.Processor__DOT__insn_from_imem)
                                            ? (vlSelfRef.Processor__DOT__datapath__DOT__rs1_data 
                                               & vlSelfRef.Processor__DOT__datapath__DOT__imm_i_sext)
                                            : (vlSelfRef.Processor__DOT__datapath__DOT__rs1_data 
                                               | vlSelfRef.Processor__DOT__datapath__DOT__imm_i_sext));
                                } else if ((0x1000U 
                                            & vlSelfRef.Processor__DOT__insn_from_imem)) {
                                    if ((0U == (vlSelfRef.Processor__DOT__insn_from_imem 
                                                >> 0x19U))) {
                                        vlSelfRef.Processor__DOT__datapath__DOT__data_reg_write 
                                            = (vlSelfRef.Processor__DOT__datapath__DOT__rs1_data 
                                               >> (IData)(vlSelfRef.Processor__DOT__datapath__DOT__imm_shamt));
                                    } else if ((0x20U 
                                                == 
                                                (vlSelfRef.Processor__DOT__insn_from_imem 
                                                 >> 0x19U))) {
                                        vlSelfRef.Processor__DOT__datapath__DOT__data_reg_write 
                                            = VL_SHIFTRS_III(32,32,5, vlSelfRef.Processor__DOT__datapath__DOT__rs1_data, (IData)(vlSelfRef.Processor__DOT__datapath__DOT__imm_shamt));
                                    }
                                } else {
                                    vlSelfRef.Processor__DOT__datapath__DOT__data_reg_write 
                                        = (vlSelfRef.Processor__DOT__datapath__DOT__rs1_data 
                                           ^ vlSelfRef.Processor__DOT__datapath__DOT__imm_i_sext);
                                }
                            } else if ((0x2000U & vlSelfRef.Processor__DOT__insn_from_imem)) {
                                vlSelfRef.Processor__DOT__datapath__DOT__data_reg_write 
                                    = ((0x1000U & vlSelfRef.Processor__DOT__insn_from_imem)
                                        ? ((vlSelfRef.Processor__DOT__datapath__DOT__rs1_data 
                                            < vlSelfRef.Processor__DOT__datapath__DOT__imm_i_sext)
                                            ? 1U : 0U)
                                        : (VL_LTS_III(32, vlSelfRef.Processor__DOT__datapath__DOT__rs1_data, vlSelfRef.Processor__DOT__datapath__DOT__imm_i_sext)
                                            ? 1U : 0U));
                            } else if ((0x1000U & vlSelfRef.Processor__DOT__insn_from_imem)) {
                                if ((0U == (vlSelfRef.Processor__DOT__insn_from_imem 
                                            >> 0x19U))) {
                                    vlSelfRef.Processor__DOT__datapath__DOT__data_reg_write 
                                        = (vlSelfRef.Processor__DOT__datapath__DOT__rs1_data 
                                           << (IData)(vlSelfRef.Processor__DOT__datapath__DOT__imm_shamt));
                                }
                            } else {
                                vlSelfRef.Processor__DOT__datapath__DOT__data_reg_write 
                                    = vlSelfRef.Processor__DOT__datapath__DOT__cla_result;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__rd_data 
        = vlSelfRef.Processor__DOT__datapath__DOT__data_reg_write;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.clock_mem) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clock_mem__0))));
    vlSelfRef.__VactTriggered.set(1U, ((~ (IData)(vlSelfRef.clock_mem)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clock_mem__0)));
    vlSelfRef.__VactTriggered.set(2U, ((IData)(vlSelfRef.clock_proc) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clock_proc__0))));
    vlSelfRef.__Vtrigprevexpr___TOP__clock_mem__0 = vlSelfRef.clock_mem;
    vlSelfRef.__Vtrigprevexpr___TOP__clock_proc__0 
        = vlSelfRef.clock_proc;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf);
void Vtop_cla___nba_sequent__TOP__Processor__DOT__datapath__DOT__adder__0(Vtop_cla* vlSelf);
void Vtop___024root___nba_sequent__TOP__3(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf);
void Vtop_cla___nba_comb__TOP__Processor__DOT__datapath__DOT__adder_reg__0(Vtop_cla* vlSelf);
void Vtop_cla___nba_comb__TOP__Processor__DOT__datapath__DOT__adder__0(Vtop_cla* vlSelf);
void Vtop___024root___nba_comb__TOP__1(Vtop___024root* vlSelf);

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__2(vlSelf);
        Vtop_cla___nba_sequent__TOP__Processor__DOT__datapath__DOT__adder__0((&vlSymsp->TOP__Processor__DOT__datapath__DOT__adder));
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((5ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__0(vlSelf);
        Vtop_cla___nba_comb__TOP__Processor__DOT__datapath__DOT__adder_reg__0((&vlSymsp->TOP__Processor__DOT__datapath__DOT__subber_reg));
        Vtop_cla___nba_comb__TOP__Processor__DOT__datapath__DOT__adder_reg__0((&vlSymsp->TOP__Processor__DOT__datapath__DOT__adder_reg));
        Vtop_cla___nba_comb__TOP__Processor__DOT__datapath__DOT__adder__0((&vlSymsp->TOP__Processor__DOT__datapath__DOT__adder));
        Vtop___024root___nba_comb__TOP__1(vlSelf);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ Processor__DOT__datapath__DOT____VdfgRegularize_h0d652ed3_0_15;
    Processor__DOT__datapath__DOT____VdfgRegularize_h0d652ed3_0_15 = 0;
    CData/*0:0*/ Processor__DOT__datapath__DOT____VdfgRegularize_h0d652ed3_0_18;
    Processor__DOT__datapath__DOT____VdfgRegularize_h0d652ed3_0_18 = 0;
    CData/*0:0*/ Processor__DOT__datapath__DOT____VdfgRegularize_h0d652ed3_0_19;
    Processor__DOT__datapath__DOT____VdfgRegularize_h0d652ed3_0_19 = 0;
    CData/*0:0*/ Processor__DOT__datapath__DOT____VdfgRegularize_h0d652ed3_0_20;
    Processor__DOT__datapath__DOT____VdfgRegularize_h0d652ed3_0_20 = 0;
    CData/*0:0*/ Processor__DOT__datapath__DOT____VdfgRegularize_h0d652ed3_0_21;
    Processor__DOT__datapath__DOT____VdfgRegularize_h0d652ed3_0_21 = 0;
    std::string __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__Vfuncout;
    IData/*31:0*/ __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__instruction;
    __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__instruction = 0;
    std::string __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__da_str;
    CData/*6:0*/ __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__opcode;
    __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__opcode = 0;
    CData/*4:0*/ __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rd;
    __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rd = 0;
    CData/*2:0*/ __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__funct3;
    __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__funct3 = 0;
    CData/*4:0*/ __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs1;
    __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs1 = 0;
    CData/*4:0*/ __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs2;
    __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs2 = 0;
    CData/*6:0*/ __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__funct7;
    __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__funct7 = 0;
    IData/*19:0*/ __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__immed_u;
    __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__immed_u = 0;
    SData/*11:0*/ __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__immed_i;
    __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__immed_i = 0;
    SData/*11:0*/ __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__immed_s;
    __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__immed_s = 0;
    SData/*12:0*/ __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__immed_b;
    __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__immed_b = 0;
    IData/*20:0*/ __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__tmp_j;
    __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__tmp_j = 0;
    IData/*20:0*/ __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__immed_j;
    __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__immed_j = 0;
    // Body
    if ((1U & (~ (IData)(vlSelfRef.rst)))) {
        vlSelfRef.Processor__DOT__memory__DOT__insn_from_imem 
            = vlSelfRef.Processor__DOT__memory__DOT__mem_array
            [(0x1fffU & (vlSelfRef.Processor__DOT__pc_to_imem 
                         >> 2U))];
    }
    vlSelfRef.Processor__DOT__datapath__DOT__imm_j 
        = (((0x100000U & (vlSelfRef.Processor__DOT__memory__DOT__insn_from_imem 
                          >> 0xbU)) | ((0xff000U & vlSelfRef.Processor__DOT__memory__DOT__insn_from_imem) 
                                       | (0x800U & 
                                          (vlSelfRef.Processor__DOT__memory__DOT__insn_from_imem 
                                           >> 9U)))) 
           | (0x7feU & (vlSelfRef.Processor__DOT__memory__DOT__insn_from_imem 
                        >> 0x14U)));
    vlSelfRef.Processor__DOT__datapath__DOT__imm_b 
        = (((0x1000U & (vlSelfRef.Processor__DOT__memory__DOT__insn_from_imem 
                        >> 0x13U)) | (0x800U & (vlSelfRef.Processor__DOT__memory__DOT__insn_from_imem 
                                                << 4U))) 
           | ((0x7e0U & (vlSelfRef.Processor__DOT__memory__DOT__insn_from_imem 
                         >> 0x14U)) | (0x1eU & (vlSelfRef.Processor__DOT__memory__DOT__insn_from_imem 
                                                >> 7U))));
    vlSelfRef.Processor__DOT__datapath__DOT__insn_rd 
        = (0x1fU & (vlSelfRef.Processor__DOT__memory__DOT__insn_from_imem 
                    >> 7U));
    vlSelfRef.Processor__DOT__datapath__DOT__insn_funct7 
        = (vlSelfRef.Processor__DOT__memory__DOT__insn_from_imem 
           >> 0x19U);
    vlSelfRef.Processor__DOT__datapath__DOT__insn_funct3 
        = (7U & (vlSelfRef.Processor__DOT__memory__DOT__insn_from_imem 
                 >> 0xcU));
    vlSelfRef.Processor__DOT__insn_from_imem = vlSelfRef.Processor__DOT__memory__DOT__insn_from_imem;
    vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode 
        = (0x7fU & vlSelfRef.Processor__DOT__memory__DOT__insn_from_imem);
    vlSelfRef.Processor__DOT__datapath__DOT__imm_i 
        = (vlSelfRef.Processor__DOT__memory__DOT__insn_from_imem 
           >> 0x14U);
    vlSelfRef.Processor__DOT__datapath__DOT__insn_rs2 
        = (0x1fU & (vlSelfRef.Processor__DOT__memory__DOT__insn_from_imem 
                    >> 0x14U));
    vlSelfRef.Processor__DOT__datapath__DOT__insn_rs1 
        = (0x1fU & (vlSelfRef.Processor__DOT__memory__DOT__insn_from_imem 
                    >> 0xfU));
    vlSelfRef.Processor__DOT__datapath__DOT__imm_j_sext 
        = (((- (IData)((vlSelfRef.Processor__DOT__memory__DOT__insn_from_imem 
                        >> 0x1fU))) << 0x15U) | vlSelfRef.Processor__DOT__datapath__DOT__imm_j);
    vlSelfRef.Processor__DOT__datapath__DOT__imm_b_sext 
        = (((- (IData)((vlSelfRef.Processor__DOT__memory__DOT__insn_from_imem 
                        >> 0x1fU))) << 0xdU) | (IData)(vlSelfRef.Processor__DOT__datapath__DOT__imm_b));
    vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__rd 
        = vlSelfRef.Processor__DOT__datapath__DOT__insn_rd;
    vlSelfRef.Processor__DOT__datapath__DOT__imm_s 
        = (((IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_funct7) 
            << 5U) | (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_rd));
    Processor__DOT__datapath__DOT____VdfgRegularize_h0d652ed3_0_21 
        = ((1U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_funct3)) 
           & (0U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_funct7)));
    vlSelfRef.Processor__DOT__datapath__DOT__insn_from_imem 
        = vlSelfRef.Processor__DOT__insn_from_imem;
    __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__instruction 
        = vlSelfRef.Processor__DOT__insn_from_imem;
    __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__opcode 
        = (0x7fU & __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__instruction);
    __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rd 
        = (0x1fU & (__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__instruction 
                    >> 7U));
    __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__funct3 
        = (7U & (__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__instruction 
                 >> 0xcU));
    __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs1 
        = (0x1fU & (__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__instruction 
                    >> 0xfU));
    __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs2 
        = (0x1fU & (__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__instruction 
                    >> 0x14U));
    __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__funct7 
        = (__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__instruction 
           >> 0x19U);
    __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__immed_u 
        = (__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__instruction 
           >> 0xcU);
    __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__immed_i 
        = (__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__instruction 
           >> 0x14U);
    __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__immed_s 
        = (((IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__funct7) 
            << 5U) | (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rd));
    __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__immed_b 
        = (((0x1000U & ((IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__funct7) 
                        << 6U)) | (0x800U & ((IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rd) 
                                             << 0xbU))) 
           | ((0x7e0U & ((IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__funct7) 
                         << 5U)) | (0x1eU & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rd))));
    __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__tmp_j 
        = (0x1ffffeU & (__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__instruction 
                        >> 0xbU));
    __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__immed_j 
        = (((0x100000U & __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__tmp_j) 
            | (0xffc00U & (__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__tmp_j 
                           << 9U))) | ((0x200U & (__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__tmp_j 
                                                  >> 2U)) 
                                       | (0x1feU & 
                                          (__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__tmp_j 
                                           >> 0xbU))));
    __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__da_str 
        = ((0x40U & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__opcode))
            ? ((0x20U & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__opcode))
                ? ((0x10U & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__opcode))
                    ? ((8U & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__opcode))
                        ? std::string{"Unknown instruction"}
                        : ((4U & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__opcode))
                            ? std::string{"Unknown instruction"}
                            : ((2U & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__opcode))
                                ? ((1U & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__opcode))
                                    ? ((0U == (__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__instruction 
                                               >> 7U))
                                        ? std::string{"ecall"}
                                        : std::string{"Unknown environment instruction"})
                                    : std::string{"Unknown instruction"})
                                : std::string{"Unknown instruction"})))
                    : ((8U & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__opcode))
                        ? ((4U & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__opcode))
                            ? ((2U & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__opcode))
                                ? ((1U & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__opcode))
                                    ? ((0x6fU == (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__opcode))
                                        ? VL_SFORMATF_N_NX("JAL x%0#, %0#",0,
                                                           5,
                                                           __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rd,
                                                           21,
                                                           __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__immed_j) 
                                        : std::string{"Unknown J-type instruction"})
                                    : std::string{"Unknown instruction"})
                                : std::string{"Unknown instruction"})
                            : std::string{"Unknown instruction"})
                        : ((4U & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__opcode))
                            ? ((2U & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__opcode))
                                ? ((1U & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__opcode))
                                    ? ((0U == (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                        ? VL_SFORMATF_N_NX("JALR x%0#, x%0#, %0#",0,
                                                           5,
                                                           __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rd,
                                                           5,
                                                           (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs1),
                                                           12,
                                                           __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__immed_i) 
                                        : std::string{"Unknown JALR instruction"})
                                    : std::string{"Unknown instruction"})
                                : std::string{"Unknown instruction"})
                            : ((2U & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__opcode))
                                ? ((1U & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__opcode))
                                    ? ((4U & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                        ? ((2U & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                            ? ((1U 
                                                & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                                ? VL_SFORMATF_N_NX("BGEU x%0#, x%0#, %0#",0,
                                                                   5,
                                                                   __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs1,
                                                                   5,
                                                                   (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs2),
                                                                   13,
                                                                   __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__immed_b) 
                                                : VL_SFORMATF_N_NX("BLTU x%0#, x%0#, %0#",0,
                                                                   5,
                                                                   __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs1,
                                                                   5,
                                                                   (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs2),
                                                                   13,
                                                                   __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__immed_b) )
                                            : ((1U 
                                                & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                                ? VL_SFORMATF_N_NX("BGE x%0#, x%0#, %0#",0,
                                                                   5,
                                                                   __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs1,
                                                                   5,
                                                                   (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs2),
                                                                   13,
                                                                   __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__immed_b) 
                                                : VL_SFORMATF_N_NX("BLT x%0#, x%0#, %0#",0,
                                                                   5,
                                                                   __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs1,
                                                                   5,
                                                                   (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs2),
                                                                   13,
                                                                   __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__immed_b) ))
                                        : ((2U & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                            ? std::string{"Unknown B-type instruction"}
                                            : ((1U 
                                                & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                                ? VL_SFORMATF_N_NX("BNE x%0#, x%0#, %0#",0,
                                                                   5,
                                                                   __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs1,
                                                                   5,
                                                                   (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs2),
                                                                   13,
                                                                   __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__immed_b) 
                                                : VL_SFORMATF_N_NX("BEQ x%0#, x%0#, %0#",0,
                                                                   5,
                                                                   __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs1,
                                                                   5,
                                                                   (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs2),
                                                                   13,
                                                                   __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__immed_b) )))
                                    : std::string{"Unknown instruction"})
                                : std::string{"Unknown instruction"}))))
                : std::string{"Unknown instruction"})
            : ((0x20U & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__opcode))
                ? ((0x10U & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__opcode))
                    ? ((8U & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__opcode))
                        ? std::string{"Unknown instruction"}
                        : ((4U & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__opcode))
                            ? ((2U & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__opcode))
                                ? ((1U & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__opcode))
                                    ? VL_SFORMATF_N_NX("LUI x%0#, 0x%0x",0,
                                                       5,
                                                       __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rd,
                                                       20,
                                                       __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__immed_u) 
                                    : std::string{"Unknown instruction"})
                                : std::string{"Unknown instruction"})
                            : ((2U & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__opcode))
                                ? ((1U & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__opcode))
                                    ? ((1U == (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__funct7))
                                        ? ((4U & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                            ? ((2U 
                                                & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                                ? (
                                                   (1U 
                                                    & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                                    ? VL_SFORMATF_N_NX("REMU x%0#, x%0#, x%0#",0,
                                                                       5,
                                                                       __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rd,
                                                                       5,
                                                                       (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs1),
                                                                       5,
                                                                       __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs2) 
                                                    : VL_SFORMATF_N_NX("REM x%0#, x%0#, x%0#",0,
                                                                       5,
                                                                       __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rd,
                                                                       5,
                                                                       (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs1),
                                                                       5,
                                                                       __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs2) )
                                                : (
                                                   (1U 
                                                    & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                                    ? VL_SFORMATF_N_NX("DIVU x%0#, x%0#, x%0#",0,
                                                                       5,
                                                                       __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rd,
                                                                       5,
                                                                       (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs1),
                                                                       5,
                                                                       __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs2) 
                                                    : VL_SFORMATF_N_NX("DIV x%0#, x%0#, x%0#",0,
                                                                       5,
                                                                       __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rd,
                                                                       5,
                                                                       (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs1),
                                                                       5,
                                                                       __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs2) ))
                                            : ((2U 
                                                & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                                ? (
                                                   (1U 
                                                    & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                                    ? VL_SFORMATF_N_NX("MULHU x%0#, x%0#, x%0#",0,
                                                                       5,
                                                                       __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rd,
                                                                       5,
                                                                       (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs1),
                                                                       5,
                                                                       __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs2) 
                                                    : VL_SFORMATF_N_NX("MULHSU x%0#, x%0#, x%0#",0,
                                                                       5,
                                                                       __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rd,
                                                                       5,
                                                                       (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs1),
                                                                       5,
                                                                       __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs2) )
                                                : (
                                                   (1U 
                                                    & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                                    ? VL_SFORMATF_N_NX("MULH x%0#, x%0#, x%0#",0,
                                                                       5,
                                                                       __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rd,
                                                                       5,
                                                                       (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs1),
                                                                       5,
                                                                       __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs2) 
                                                    : VL_SFORMATF_N_NX("MUL x%0#, x%0#, x%0#",0,
                                                                       5,
                                                                       __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rd,
                                                                       5,
                                                                       (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs1),
                                                                       5,
                                                                       __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs2) )))
                                        : ((4U & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                            ? ((2U 
                                                & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                                ? (
                                                   (1U 
                                                    & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                                    ? VL_SFORMATF_N_NX("AND x%0#, x%0#, x%0#",0,
                                                                       5,
                                                                       __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rd,
                                                                       5,
                                                                       (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs1),
                                                                       5,
                                                                       __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs2) 
                                                    : VL_SFORMATF_N_NX("OR x%0#, x%0#, x%0#",0,
                                                                       5,
                                                                       __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rd,
                                                                       5,
                                                                       (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs1),
                                                                       5,
                                                                       __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs2) )
                                                : (
                                                   (1U 
                                                    & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                                    ? VL_SFORMATF_N_NX("SRL x%0#, x%0#, x%0#",0,
                                                                       5,
                                                                       __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rd,
                                                                       5,
                                                                       (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs1),
                                                                       5,
                                                                       __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs2) 
                                                    : VL_SFORMATF_N_NX("XOR x%0#, x%0#, x%0#",0,
                                                                       5,
                                                                       __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rd,
                                                                       5,
                                                                       (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs1),
                                                                       5,
                                                                       __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs2) ))
                                            : ((2U 
                                                & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                                ? (
                                                   (1U 
                                                    & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                                    ? VL_SFORMATF_N_NX("SLTU x%0#, x%0#, x%0#",0,
                                                                       5,
                                                                       __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rd,
                                                                       5,
                                                                       (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs1),
                                                                       5,
                                                                       __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs2) 
                                                    : VL_SFORMATF_N_NX("SLT x%0#, x%0#, x%0#",0,
                                                                       5,
                                                                       __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rd,
                                                                       5,
                                                                       (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs1),
                                                                       5,
                                                                       __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs2) )
                                                : (
                                                   (1U 
                                                    & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                                    ? VL_SFORMATF_N_NX("SLL x%0#, x%0#, x%0#",0,
                                                                       5,
                                                                       __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rd,
                                                                       5,
                                                                       (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs1),
                                                                       5,
                                                                       __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs2) 
                                                    : VL_SFORMATF_N_NX("ADD x%0#, x%0#, x%0#",0,
                                                                       5,
                                                                       __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rd,
                                                                       5,
                                                                       (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs1),
                                                                       5,
                                                                       __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs2) ))))
                                    : std::string{"Unknown instruction"})
                                : std::string{"Unknown instruction"})))
                    : ((8U & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__opcode))
                        ? std::string{"Unknown instruction"}
                        : ((4U & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__opcode))
                            ? std::string{"Unknown instruction"}
                            : ((2U & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__opcode))
                                ? ((1U & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__opcode))
                                    ? ((0U == (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                        ? VL_SFORMATF_N_NX("SB x%0#, %0#(x%0#)",0,
                                                           5,
                                                           __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs2,
                                                           12,
                                                           (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__immed_s),
                                                           5,
                                                           __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs1) 
                                        : ((1U == (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                            ? VL_SFORMATF_N_NX("SH x%0#, %0#(x%0#)",0,
                                                               5,
                                                               __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs2,
                                                               12,
                                                               (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__immed_s),
                                                               5,
                                                               __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs1) 
                                            : ((2U 
                                                == (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                                ? VL_SFORMATF_N_NX("SW x%0#, %0#(x%0#)",0,
                                                                   5,
                                                                   __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs2,
                                                                   12,
                                                                   (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__immed_s),
                                                                   5,
                                                                   __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs1) 
                                                : std::string{"Unknown S-type instruction"})))
                                    : std::string{"Unknown instruction"})
                                : std::string{"Unknown instruction"}))))
                : ((0x10U & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__opcode))
                    ? ((8U & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__opcode))
                        ? std::string{"Unknown instruction"}
                        : ((4U & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__opcode))
                            ? ((2U & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__opcode))
                                ? ((1U & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__opcode))
                                    ? VL_SFORMATF_N_NX("AUIPC x%0#, 0x%0x",0,
                                                       5,
                                                       __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rd,
                                                       20,
                                                       __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__immed_u) 
                                    : std::string{"Unknown instruction"})
                                : std::string{"Unknown instruction"})
                            : ((2U & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__opcode))
                                ? ((1U & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__opcode))
                                    ? ((4U & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                        ? ((2U & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                            ? ((1U 
                                                & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                                ? VL_SFORMATF_N_NX("ANDI x%0#, x%0#, %0#",0,
                                                                   5,
                                                                   __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rd,
                                                                   5,
                                                                   (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs1),
                                                                   12,
                                                                   __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__immed_i) 
                                                : VL_SFORMATF_N_NX("ORI x%0#, x%0#, %0#",0,
                                                                   5,
                                                                   __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rd,
                                                                   5,
                                                                   (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs1),
                                                                   12,
                                                                   __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__immed_i) )
                                            : ((1U 
                                                & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                                ? (
                                                   (0x20U 
                                                    & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__funct7))
                                                    ? 
                                                   ((0x20U 
                                                     == (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__funct7))
                                                     ? VL_SFORMATF_N_NX("SRAI x%0#, x%0#, %0#",0,
                                                                        5,
                                                                        __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rd,
                                                                        5,
                                                                        (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs1),
                                                                        5,
                                                                        (0x1fU 
                                                                         & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__immed_i))) 
                                                     : 
                                                    std::string{"Unknown I-type instruction"})
                                                    : VL_SFORMATF_N_NX("SRLI x%0#, x%0#, %0#",0,
                                                                       5,
                                                                       __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rd,
                                                                       5,
                                                                       (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs1),
                                                                       5,
                                                                       (0x1fU 
                                                                        & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__immed_i))) )
                                                : VL_SFORMATF_N_NX("XORI x%0#, x%0#, %0#",0,
                                                                   5,
                                                                   __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rd,
                                                                   5,
                                                                   (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs1),
                                                                   12,
                                                                   __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__immed_i) ))
                                        : ((2U & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                            ? ((1U 
                                                & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                                ? VL_SFORMATF_N_NX("SLTIU x%0#, x%0#, %0#",0,
                                                                   5,
                                                                   __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rd,
                                                                   5,
                                                                   (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs1),
                                                                   12,
                                                                   __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__immed_i) 
                                                : VL_SFORMATF_N_NX("SLTI x%0#, x%0#, %0#",0,
                                                                   5,
                                                                   __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rd,
                                                                   5,
                                                                   (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs1),
                                                                   12,
                                                                   __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__immed_i) )
                                            : ((1U 
                                                & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                                ? VL_SFORMATF_N_NX("SLLI x%0#, x%0#, %0#",0,
                                                                   5,
                                                                   __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rd,
                                                                   5,
                                                                   (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs1),
                                                                   5,
                                                                   (0x1fU 
                                                                    & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__immed_i))) 
                                                : VL_SFORMATF_N_NX("ADDI x%0#, x%0#, %0#",0,
                                                                   5,
                                                                   __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rd,
                                                                   5,
                                                                   (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs1),
                                                                   12,
                                                                   __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__immed_i) )))
                                    : std::string{"Unknown instruction"})
                                : std::string{"Unknown instruction"})))
                    : ((8U & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__opcode))
                        ? ((4U & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__opcode))
                            ? ((2U & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__opcode))
                                ? ((1U & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__opcode))
                                    ? ((0U == (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                        ? std::string{"fence"}
                                        : ((1U == (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                            ? ((0U 
                                                == (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__funct7))
                                                ? std::string{"fence.i"}
                                                : std::string{"Unknown fence instruction"})
                                            : std::string{"Unknown fence instruction"}))
                                    : std::string{"Unknown instruction"})
                                : std::string{"Unknown instruction"})
                            : std::string{"Unknown instruction"})
                        : ((4U & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__opcode))
                            ? std::string{"Unknown instruction"}
                            : ((2U & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__opcode))
                                ? ((1U & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__opcode))
                                    ? ((4U & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                        ? ((2U & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                            ? std::string{"Unknown Load instruction"}
                                            : ((1U 
                                                & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                                ? VL_SFORMATF_N_NX("LHU x%0#, %0#(x%0#)",0,
                                                                   5,
                                                                   __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rd,
                                                                   12,
                                                                   (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__immed_i),
                                                                   5,
                                                                   __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs1) 
                                                : VL_SFORMATF_N_NX("LBU x%0#, %0#(x%0#)",0,
                                                                   5,
                                                                   __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rd,
                                                                   12,
                                                                   (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__immed_i),
                                                                   5,
                                                                   __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs1) ))
                                        : ((2U & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                            ? ((1U 
                                                & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                                ? std::string{"Unknown Load instruction"}
                                                : VL_SFORMATF_N_NX("LW x%0#, %0#(x%0#)",0,
                                                                   5,
                                                                   __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rd,
                                                                   12,
                                                                   (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__immed_i),
                                                                   5,
                                                                   __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs1) )
                                            : ((1U 
                                                & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                                ? VL_SFORMATF_N_NX("LH x%0#, %0#(x%0#)",0,
                                                                   5,
                                                                   __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rd,
                                                                   12,
                                                                   (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__immed_i),
                                                                   5,
                                                                   __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs1) 
                                                : VL_SFORMATF_N_NX("LB x%0#, %0#(x%0#)",0,
                                                                   5,
                                                                   __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rd,
                                                                   12,
                                                                   (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__immed_i),
                                                                   5,
                                                                   __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__rs1) )))
                                    : std::string{"Unknown instruction"})
                                : ((1U & (IData)(__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__opcode))
                                    ? std::string{"Unknown instruction"}
                                    : ((0U == (__Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__instruction 
                                               >> 7U))
                                        ? std::string{"bubble"}
                                        : std::string{"Unknown instruction"}))))))));
    __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__Vfuncout 
        = __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__da_str;
    vlSelfRef.Processor__DOT__datapath__DOT__disasm_string 
        = __Vfunc_Processor__DOT__datapath__DOT__rv_disasm__0__Vfuncout;
    vlSelfRef.Processor__DOT__datapath__DOT__insn_lui 
        = (0x37U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode));
    vlSelfRef.Processor__DOT__datapath__DOT__insn_auipc 
        = (0x17U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode));
    vlSelfRef.Processor__DOT__datapath__DOT__insn_jal 
        = (0x6fU == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode));
    vlSelfRef.Processor__DOT__datapath__DOT__insn_jalr 
        = (0x67U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode));
    vlSelfRef.Processor__DOT__datapath__DOT__insn_fence 
        = (0xfU == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode));
    vlSelfRef.Processor__DOT__datapath__DOT__illegal_insn = 0U;
    if ((0x40U & (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode))) {
        if ((0x20U & (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode))) {
            if ((0x10U & (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode))) {
                vlSelfRef.Processor__DOT__datapath__DOT__illegal_insn = 1U;
            } else if ((8U & (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode))) {
                vlSelfRef.Processor__DOT__datapath__DOT__illegal_insn = 1U;
            } else if ((4U & (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode))) {
                vlSelfRef.Processor__DOT__datapath__DOT__illegal_insn = 1U;
            } else if ((2U & (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode))) {
                if ((1U & (~ (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode)))) {
                    vlSelfRef.Processor__DOT__datapath__DOT__illegal_insn = 1U;
                }
            } else {
                vlSelfRef.Processor__DOT__datapath__DOT__illegal_insn = 1U;
            }
        } else {
            vlSelfRef.Processor__DOT__datapath__DOT__illegal_insn = 1U;
        }
    } else if ((0x20U & (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode))) {
        if ((0x10U & (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode))) {
            if ((8U & (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode))) {
                vlSelfRef.Processor__DOT__datapath__DOT__illegal_insn = 1U;
            } else if ((4U & (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode))) {
                if ((2U & (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode))) {
                    if ((1U & (~ (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode)))) {
                        vlSelfRef.Processor__DOT__datapath__DOT__illegal_insn = 1U;
                    }
                } else {
                    vlSelfRef.Processor__DOT__datapath__DOT__illegal_insn = 1U;
                }
            } else if ((2U & (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode))) {
                if ((1U & (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode))) {
                    if ((0x4000U & vlSelfRef.Processor__DOT__insn_from_imem)) {
                        if ((0x2000U & vlSelfRef.Processor__DOT__insn_from_imem)) {
                            if ((0x1000U & vlSelfRef.Processor__DOT__insn_from_imem)) {
                                if ((0U != (vlSelfRef.Processor__DOT__insn_from_imem 
                                            >> 0x19U))) {
                                    vlSelfRef.Processor__DOT__datapath__DOT__illegal_insn = 1U;
                                }
                            } else if ((0U != (vlSelfRef.Processor__DOT__insn_from_imem 
                                               >> 0x19U))) {
                                vlSelfRef.Processor__DOT__datapath__DOT__illegal_insn = 1U;
                            }
                        } else if ((0x1000U & vlSelfRef.Processor__DOT__insn_from_imem)) {
                            if ((0U != (vlSelfRef.Processor__DOT__insn_from_imem 
                                        >> 0x19U))) {
                                if ((0x20U != (vlSelfRef.Processor__DOT__insn_from_imem 
                                               >> 0x19U))) {
                                    vlSelfRef.Processor__DOT__datapath__DOT__illegal_insn = 1U;
                                }
                            }
                        } else if ((0U != (vlSelfRef.Processor__DOT__insn_from_imem 
                                           >> 0x19U))) {
                            vlSelfRef.Processor__DOT__datapath__DOT__illegal_insn = 1U;
                        }
                    } else if ((0x2000U & vlSelfRef.Processor__DOT__insn_from_imem)) {
                        if ((0x1000U & vlSelfRef.Processor__DOT__insn_from_imem)) {
                            if ((0U != (vlSelfRef.Processor__DOT__insn_from_imem 
                                        >> 0x19U))) {
                                vlSelfRef.Processor__DOT__datapath__DOT__illegal_insn = 1U;
                            }
                        } else if ((0U != (vlSelfRef.Processor__DOT__insn_from_imem 
                                           >> 0x19U))) {
                            vlSelfRef.Processor__DOT__datapath__DOT__illegal_insn = 1U;
                        }
                    } else if ((0x1000U & vlSelfRef.Processor__DOT__insn_from_imem)) {
                        if ((0U != (vlSelfRef.Processor__DOT__insn_from_imem 
                                    >> 0x19U))) {
                            vlSelfRef.Processor__DOT__datapath__DOT__illegal_insn = 1U;
                        }
                    } else if ((0U != (vlSelfRef.Processor__DOT__insn_from_imem 
                                       >> 0x19U))) {
                        if ((0x20U != (vlSelfRef.Processor__DOT__insn_from_imem 
                                       >> 0x19U))) {
                            vlSelfRef.Processor__DOT__datapath__DOT__illegal_insn = 1U;
                        }
                    }
                } else {
                    vlSelfRef.Processor__DOT__datapath__DOT__illegal_insn = 1U;
                }
            } else {
                vlSelfRef.Processor__DOT__datapath__DOT__illegal_insn = 1U;
            }
        } else {
            vlSelfRef.Processor__DOT__datapath__DOT__illegal_insn = 1U;
        }
    } else if ((0x10U & (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode))) {
        if ((8U & (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode))) {
            vlSelfRef.Processor__DOT__datapath__DOT__illegal_insn = 1U;
        } else if ((4U & (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode))) {
            vlSelfRef.Processor__DOT__datapath__DOT__illegal_insn = 1U;
        } else if ((2U & (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode))) {
            if ((1U & (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode))) {
                if ((0x4000U & vlSelfRef.Processor__DOT__insn_from_imem)) {
                    if ((1U & (~ (vlSelfRef.Processor__DOT__insn_from_imem 
                                  >> 0xdU)))) {
                        if ((0x1000U & vlSelfRef.Processor__DOT__insn_from_imem)) {
                            if ((0U != (vlSelfRef.Processor__DOT__insn_from_imem 
                                        >> 0x19U))) {
                                if ((0x20U != (vlSelfRef.Processor__DOT__insn_from_imem 
                                               >> 0x19U))) {
                                    vlSelfRef.Processor__DOT__datapath__DOT__illegal_insn = 1U;
                                }
                            }
                        }
                    }
                } else if ((1U & (~ (vlSelfRef.Processor__DOT__insn_from_imem 
                                     >> 0xdU)))) {
                    if ((0x1000U & vlSelfRef.Processor__DOT__insn_from_imem)) {
                        if ((0U != (vlSelfRef.Processor__DOT__insn_from_imem 
                                    >> 0x19U))) {
                            vlSelfRef.Processor__DOT__datapath__DOT__illegal_insn = 1U;
                        }
                    }
                }
            } else {
                vlSelfRef.Processor__DOT__datapath__DOT__illegal_insn = 1U;
            }
        } else {
            vlSelfRef.Processor__DOT__datapath__DOT__illegal_insn = 1U;
        }
    } else {
        vlSelfRef.Processor__DOT__datapath__DOT__illegal_insn = 1U;
    }
    vlSelfRef.Processor__DOT__datapath__DOT__insn_beq 
        = ((0x63U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode)) 
           & (0U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_funct3)));
    vlSelfRef.Processor__DOT__datapath__DOT__insn_bne 
        = ((0x63U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode)) 
           & (1U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_funct3)));
    vlSelfRef.Processor__DOT__datapath__DOT__insn_blt 
        = ((0x63U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode)) 
           & (4U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_funct3)));
    vlSelfRef.Processor__DOT__datapath__DOT__insn_bge 
        = ((0x63U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode)) 
           & (5U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_funct3)));
    vlSelfRef.Processor__DOT__datapath__DOT__insn_bltu 
        = ((0x63U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode)) 
           & (6U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_funct3)));
    vlSelfRef.Processor__DOT__datapath__DOT__insn_bgeu 
        = ((0x63U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode)) 
           & (7U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_funct3)));
    vlSelfRef.Processor__DOT__datapath__DOT__insn_lb 
        = ((3U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode)) 
           & (0U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_funct3)));
    vlSelfRef.Processor__DOT__datapath__DOT__insn_lh 
        = ((3U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode)) 
           & (1U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_funct3)));
    vlSelfRef.Processor__DOT__datapath__DOT__insn_lw 
        = ((3U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode)) 
           & (2U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_funct3)));
    vlSelfRef.Processor__DOT__datapath__DOT__insn_lbu 
        = ((3U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode)) 
           & (4U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_funct3)));
    vlSelfRef.Processor__DOT__datapath__DOT__insn_lhu 
        = ((3U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode)) 
           & (5U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_funct3)));
    vlSelfRef.Processor__DOT__datapath__DOT__insn_sb 
        = ((0x23U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode)) 
           & (0U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_funct3)));
    vlSelfRef.Processor__DOT__datapath__DOT__insn_sh 
        = ((0x23U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode)) 
           & (1U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_funct3)));
    vlSelfRef.Processor__DOT__datapath__DOT__insn_sw 
        = ((0x23U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode)) 
           & (2U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_funct3)));
    vlSelfRef.Processor__DOT__datapath__DOT__insn_addi 
        = ((0x13U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode)) 
           & (0U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_funct3)));
    vlSelfRef.Processor__DOT__datapath__DOT__insn_slti 
        = ((0x13U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode)) 
           & (2U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_funct3)));
    vlSelfRef.Processor__DOT__datapath__DOT__insn_sltiu 
        = ((0x13U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode)) 
           & (3U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_funct3)));
    vlSelfRef.Processor__DOT__datapath__DOT__insn_xori 
        = ((0x13U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode)) 
           & (4U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_funct3)));
    vlSelfRef.Processor__DOT__datapath__DOT__insn_ori 
        = ((0x13U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode)) 
           & (6U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_funct3)));
    vlSelfRef.Processor__DOT__datapath__DOT__insn_andi 
        = ((0x13U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode)) 
           & (7U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_funct3)));
    vlSelfRef.Processor__DOT__datapath__DOT__insn_slt 
        = ((0x33U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode)) 
           & ((2U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_funct3)) 
              & (0U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_funct7))));
    vlSelfRef.Processor__DOT__datapath__DOT__insn_sltu 
        = ((0x33U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode)) 
           & ((3U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_funct3)) 
              & (0U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_funct7))));
    vlSelfRef.Processor__DOT__datapath__DOT__insn_xor 
        = ((0x33U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode)) 
           & ((4U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_funct3)) 
              & (0U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_funct7))));
    vlSelfRef.Processor__DOT__datapath__DOT__insn_or 
        = ((0x33U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode)) 
           & ((6U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_funct3)) 
              & (0U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_funct7))));
    vlSelfRef.Processor__DOT__datapath__DOT__insn_and 
        = ((0x33U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode)) 
           & ((7U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_funct3)) 
              & (0U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_funct7))));
    vlSelfRef.Processor__DOT__datapath__DOT__enable_reg_write = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode))) {
            if ((0x10U & (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode))) {
                if ((1U & (~ ((IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode))) {
                        if ((2U & (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode))) {
                            if ((1U & (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode))) {
                                vlSelfRef.Processor__DOT__datapath__DOT__enable_reg_write = 1U;
                            }
                        }
                    } else if ((2U & (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode))) {
                        if ((1U & (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode))) {
                            if ((0x4000U & vlSelfRef.Processor__DOT__insn_from_imem)) {
                                if ((0x2000U & vlSelfRef.Processor__DOT__insn_from_imem)) {
                                    if ((0x1000U & vlSelfRef.Processor__DOT__insn_from_imem)) {
                                        if ((0U == 
                                             (vlSelfRef.Processor__DOT__insn_from_imem 
                                              >> 0x19U))) {
                                            vlSelfRef.Processor__DOT__datapath__DOT__enable_reg_write = 1U;
                                        }
                                    } else if ((0U 
                                                == 
                                                (vlSelfRef.Processor__DOT__insn_from_imem 
                                                 >> 0x19U))) {
                                        vlSelfRef.Processor__DOT__datapath__DOT__enable_reg_write = 1U;
                                    }
                                } else if ((0x1000U 
                                            & vlSelfRef.Processor__DOT__insn_from_imem)) {
                                    if ((0U == (vlSelfRef.Processor__DOT__insn_from_imem 
                                                >> 0x19U))) {
                                        vlSelfRef.Processor__DOT__datapath__DOT__enable_reg_write = 1U;
                                    } else if ((0x20U 
                                                == 
                                                (vlSelfRef.Processor__DOT__insn_from_imem 
                                                 >> 0x19U))) {
                                        vlSelfRef.Processor__DOT__datapath__DOT__enable_reg_write = 1U;
                                    }
                                } else if ((0U == (vlSelfRef.Processor__DOT__insn_from_imem 
                                                   >> 0x19U))) {
                                    vlSelfRef.Processor__DOT__datapath__DOT__enable_reg_write = 1U;
                                }
                            } else if ((0x2000U & vlSelfRef.Processor__DOT__insn_from_imem)) {
                                if ((0x1000U & vlSelfRef.Processor__DOT__insn_from_imem)) {
                                    if ((0U == (vlSelfRef.Processor__DOT__insn_from_imem 
                                                >> 0x19U))) {
                                        vlSelfRef.Processor__DOT__datapath__DOT__enable_reg_write = 1U;
                                    }
                                } else if ((0U == (vlSelfRef.Processor__DOT__insn_from_imem 
                                                   >> 0x19U))) {
                                    vlSelfRef.Processor__DOT__datapath__DOT__enable_reg_write = 1U;
                                }
                            } else if ((0x1000U & vlSelfRef.Processor__DOT__insn_from_imem)) {
                                if ((0U == (vlSelfRef.Processor__DOT__insn_from_imem 
                                            >> 0x19U))) {
                                    vlSelfRef.Processor__DOT__datapath__DOT__enable_reg_write = 1U;
                                }
                            } else if ((0U == (vlSelfRef.Processor__DOT__insn_from_imem 
                                               >> 0x19U))) {
                                vlSelfRef.Processor__DOT__datapath__DOT__enable_reg_write = 1U;
                            } else if ((0x20U == (vlSelfRef.Processor__DOT__insn_from_imem 
                                                  >> 0x19U))) {
                                vlSelfRef.Processor__DOT__datapath__DOT__enable_reg_write = 1U;
                            }
                        }
                    }
                }
            }
        } else if ((0x10U & (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode))) {
            if ((1U & (~ ((IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode) 
                          >> 3U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode))) {
                        if ((1U & (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode))) {
                            if ((0x4000U & vlSelfRef.Processor__DOT__insn_from_imem)) {
                                if ((0x2000U & vlSelfRef.Processor__DOT__insn_from_imem)) {
                                    vlSelfRef.Processor__DOT__datapath__DOT__enable_reg_write = 1U;
                                } else if ((0x1000U 
                                            & vlSelfRef.Processor__DOT__insn_from_imem)) {
                                    if ((0U == (vlSelfRef.Processor__DOT__insn_from_imem 
                                                >> 0x19U))) {
                                        vlSelfRef.Processor__DOT__datapath__DOT__enable_reg_write = 1U;
                                    } else if ((0x20U 
                                                == 
                                                (vlSelfRef.Processor__DOT__insn_from_imem 
                                                 >> 0x19U))) {
                                        vlSelfRef.Processor__DOT__datapath__DOT__enable_reg_write = 1U;
                                    }
                                } else {
                                    vlSelfRef.Processor__DOT__datapath__DOT__enable_reg_write = 1U;
                                }
                            } else if ((0x2000U & vlSelfRef.Processor__DOT__insn_from_imem)) {
                                vlSelfRef.Processor__DOT__datapath__DOT__enable_reg_write = 1U;
                            } else if ((0x1000U & vlSelfRef.Processor__DOT__insn_from_imem)) {
                                if ((0U == (vlSelfRef.Processor__DOT__insn_from_imem 
                                            >> 0x19U))) {
                                    vlSelfRef.Processor__DOT__datapath__DOT__enable_reg_write = 1U;
                                }
                            } else {
                                vlSelfRef.Processor__DOT__datapath__DOT__enable_reg_write = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    Processor__DOT__datapath__DOT____VdfgRegularize_h0d652ed3_0_15 
        = ((0x13U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode)) 
           & (5U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_funct3)));
    Processor__DOT__datapath__DOT____VdfgRegularize_h0d652ed3_0_18 
        = ((0x33U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode)) 
           & (0U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_funct3)));
    Processor__DOT__datapath__DOT____VdfgRegularize_h0d652ed3_0_19 
        = ((0x33U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode)) 
           & (5U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_funct3)));
    vlSelfRef.Processor__DOT__datapath__DOT__insn_ecall 
        = ((0x73U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode)) 
           & (0U == (vlSelfRef.Processor__DOT__memory__DOT__insn_from_imem 
                     >> 7U)));
    Processor__DOT__datapath__DOT____VdfgRegularize_h0d652ed3_0_20 
        = ((0x33U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode)) 
           & (1U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_funct7)));
    vlSelfRef.Processor__DOT__datapath__DOT__imm_i_sext 
        = (((- (IData)((vlSelfRef.Processor__DOT__memory__DOT__insn_from_imem 
                        >> 0x1fU))) << 0xcU) | (IData)(vlSelfRef.Processor__DOT__datapath__DOT__imm_i));
    vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__rs2 
        = vlSelfRef.Processor__DOT__datapath__DOT__insn_rs2;
    vlSelfRef.Processor__DOT__datapath__DOT__imm_shamt 
        = vlSelfRef.Processor__DOT__datapath__DOT__insn_rs2;
    vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__rs1 
        = vlSelfRef.Processor__DOT__datapath__DOT__insn_rs1;
    vlSelfRef.Processor__DOT__datapath__DOT__imm_s_sext 
        = (((- (IData)((vlSelfRef.Processor__DOT__memory__DOT__insn_from_imem 
                        >> 0x1fU))) << 0xcU) | (IData)(vlSelfRef.Processor__DOT__datapath__DOT__imm_s));
    vlSelfRef.Processor__DOT__datapath__DOT__insn_slli 
        = ((0x13U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode)) 
           & (IData)(Processor__DOT__datapath__DOT____VdfgRegularize_h0d652ed3_0_21));
    vlSelfRef.Processor__DOT__datapath__DOT__insn_sll 
        = ((0x33U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode)) 
           & (IData)(Processor__DOT__datapath__DOT____VdfgRegularize_h0d652ed3_0_21));
    vlSelfRef.Processor__DOT__datapath__DOT__disasm_wire[0U] 
        = ((0xff000000U & vlSelfRef.Processor__DOT__datapath__DOT__disasm_wire[0U]) 
           | ((VL_GETC_N(vlSelfRef.Processor__DOT__datapath__DOT__disasm_string,0x1dU) 
               << 0x10U) | ((VL_GETC_N(vlSelfRef.Processor__DOT__datapath__DOT__disasm_string,0x1eU) 
                             << 8U) | VL_GETC_N(vlSelfRef.Processor__DOT__datapath__DOT__disasm_string,0x1fU))));
    vlSelfRef.Processor__DOT__datapath__DOT__disasm_wire[0U] 
        = ((0xffffffU & vlSelfRef.Processor__DOT__datapath__DOT__disasm_wire[0U]) 
           | (VL_GETC_N(vlSelfRef.Processor__DOT__datapath__DOT__disasm_string,0x1cU) 
              << 0x18U));
    vlSelfRef.Processor__DOT__datapath__DOT__disasm_wire[1U] 
        = ((0xffff0000U & vlSelfRef.Processor__DOT__datapath__DOT__disasm_wire[1U]) 
           | (0xffffffU & ((0xffff00U & (VL_GETC_N(vlSelfRef.Processor__DOT__datapath__DOT__disasm_string,0x1aU) 
                                         << 8U)) | 
                           ((0xffffffU & VL_GETC_N(vlSelfRef.Processor__DOT__datapath__DOT__disasm_string,0x1bU)) 
                            | (VL_GETC_N(vlSelfRef.Processor__DOT__datapath__DOT__disasm_string,0x1cU) 
                               >> 8U)))));
    vlSelfRef.Processor__DOT__datapath__DOT__disasm_wire[1U] 
        = ((0xffffU & vlSelfRef.Processor__DOT__datapath__DOT__disasm_wire[1U]) 
           | (0xffff0000U & ((VL_GETC_N(vlSelfRef.Processor__DOT__datapath__DOT__disasm_string,0x18U) 
                              << 0x18U) | (VL_GETC_N(vlSelfRef.Processor__DOT__datapath__DOT__disasm_string,0x19U) 
                                           << 0x10U))));
    vlSelfRef.Processor__DOT__datapath__DOT__disasm_wire[2U] 
        = ((0xffffff00U & vlSelfRef.Processor__DOT__datapath__DOT__disasm_wire[2U]) 
           | (0xffffU & ((0xffffU & VL_GETC_N(vlSelfRef.Processor__DOT__datapath__DOT__disasm_string,0x17U)) 
                         | ((0xffffU & (VL_GETC_N(vlSelfRef.Processor__DOT__datapath__DOT__disasm_string,0x18U) 
                                        >> 8U)) | (
                                                   VL_GETC_N(vlSelfRef.Processor__DOT__datapath__DOT__disasm_string,0x19U) 
                                                   >> 0x10U)))));
    vlSelfRef.Processor__DOT__datapath__DOT__disasm_wire[2U] 
        = ((0xffU & vlSelfRef.Processor__DOT__datapath__DOT__disasm_wire[2U]) 
           | (0xffffff00U & ((VL_GETC_N(vlSelfRef.Processor__DOT__datapath__DOT__disasm_string,0x14U) 
                              << 0x18U) | ((VL_GETC_N(vlSelfRef.Processor__DOT__datapath__DOT__disasm_string,0x15U) 
                                            << 0x10U) 
                                           | (VL_GETC_N(vlSelfRef.Processor__DOT__datapath__DOT__disasm_string,0x16U) 
                                              << 8U)))));
    vlSelfRef.Processor__DOT__datapath__DOT__disasm_wire[3U] 
        = ((0xff000000U & vlSelfRef.Processor__DOT__datapath__DOT__disasm_wire[3U]) 
           | ((VL_GETC_N(vlSelfRef.Processor__DOT__datapath__DOT__disasm_string,0x11U) 
               << 0x10U) | ((VL_GETC_N(vlSelfRef.Processor__DOT__datapath__DOT__disasm_string,0x12U) 
                             << 8U) | VL_GETC_N(vlSelfRef.Processor__DOT__datapath__DOT__disasm_string,0x13U))));
    vlSelfRef.Processor__DOT__datapath__DOT__disasm_wire[3U] 
        = ((0xffffffU & vlSelfRef.Processor__DOT__datapath__DOT__disasm_wire[3U]) 
           | (VL_GETC_N(vlSelfRef.Processor__DOT__datapath__DOT__disasm_string,0x10U) 
              << 0x18U));
    vlSelfRef.Processor__DOT__datapath__DOT__disasm_wire[4U] 
        = ((0xffff0000U & vlSelfRef.Processor__DOT__datapath__DOT__disasm_wire[4U]) 
           | (0xffffffU & ((0xffff00U & (VL_GETC_N(vlSelfRef.Processor__DOT__datapath__DOT__disasm_string,0xeU) 
                                         << 8U)) | 
                           ((0xffffffU & VL_GETC_N(vlSelfRef.Processor__DOT__datapath__DOT__disasm_string,0xfU)) 
                            | (VL_GETC_N(vlSelfRef.Processor__DOT__datapath__DOT__disasm_string,0x10U) 
                               >> 8U)))));
    vlSelfRef.Processor__DOT__datapath__DOT__disasm_wire[4U] 
        = ((0xffffU & vlSelfRef.Processor__DOT__datapath__DOT__disasm_wire[4U]) 
           | (0xffff0000U & ((VL_GETC_N(vlSelfRef.Processor__DOT__datapath__DOT__disasm_string,0xcU) 
                              << 0x18U) | (VL_GETC_N(vlSelfRef.Processor__DOT__datapath__DOT__disasm_string,0xdU) 
                                           << 0x10U))));
    vlSelfRef.Processor__DOT__datapath__DOT__disasm_wire[5U] 
        = ((0xffffff00U & vlSelfRef.Processor__DOT__datapath__DOT__disasm_wire[5U]) 
           | (0xffffU & ((0xffffU & VL_GETC_N(vlSelfRef.Processor__DOT__datapath__DOT__disasm_string,0xbU)) 
                         | ((0xffffU & (VL_GETC_N(vlSelfRef.Processor__DOT__datapath__DOT__disasm_string,0xcU) 
                                        >> 8U)) | (
                                                   VL_GETC_N(vlSelfRef.Processor__DOT__datapath__DOT__disasm_string,0xdU) 
                                                   >> 0x10U)))));
    vlSelfRef.Processor__DOT__datapath__DOT__disasm_wire[5U] 
        = ((0xffU & vlSelfRef.Processor__DOT__datapath__DOT__disasm_wire[5U]) 
           | (0xffffff00U & ((VL_GETC_N(vlSelfRef.Processor__DOT__datapath__DOT__disasm_string,8U) 
                              << 0x18U) | ((VL_GETC_N(vlSelfRef.Processor__DOT__datapath__DOT__disasm_string,9U) 
                                            << 0x10U) 
                                           | (VL_GETC_N(vlSelfRef.Processor__DOT__datapath__DOT__disasm_string,0xaU) 
                                              << 8U)))));
    vlSelfRef.Processor__DOT__datapath__DOT__disasm_wire[6U] 
        = ((0xff000000U & vlSelfRef.Processor__DOT__datapath__DOT__disasm_wire[6U]) 
           | ((VL_GETC_N(vlSelfRef.Processor__DOT__datapath__DOT__disasm_string,5U) 
               << 0x10U) | ((VL_GETC_N(vlSelfRef.Processor__DOT__datapath__DOT__disasm_string,6U) 
                             << 8U) | VL_GETC_N(vlSelfRef.Processor__DOT__datapath__DOT__disasm_string,7U))));
    vlSelfRef.Processor__DOT__datapath__DOT__disasm_wire[6U] 
        = ((0xffffffU & vlSelfRef.Processor__DOT__datapath__DOT__disasm_wire[6U]) 
           | (VL_GETC_N(vlSelfRef.Processor__DOT__datapath__DOT__disasm_string,4U) 
              << 0x18U));
    vlSelfRef.Processor__DOT__datapath__DOT__disasm_wire[7U] 
        = ((0xffff0000U & vlSelfRef.Processor__DOT__datapath__DOT__disasm_wire[7U]) 
           | (0xffffffU & ((0xffff00U & (VL_GETC_N(vlSelfRef.Processor__DOT__datapath__DOT__disasm_string,2U) 
                                         << 8U)) | 
                           ((0xffffffU & VL_GETC_N(vlSelfRef.Processor__DOT__datapath__DOT__disasm_string,3U)) 
                            | (VL_GETC_N(vlSelfRef.Processor__DOT__datapath__DOT__disasm_string,4U) 
                               >> 8U)))));
    vlSelfRef.Processor__DOT__datapath__DOT__disasm_wire[7U] 
        = ((0xffffU & vlSelfRef.Processor__DOT__datapath__DOT__disasm_wire[7U]) 
           | (0xffff0000U & ((VL_GETC_N(vlSelfRef.Processor__DOT__datapath__DOT__disasm_string,0U) 
                              << 0x18U) | (VL_GETC_N(vlSelfRef.Processor__DOT__datapath__DOT__disasm_string,1U) 
                                           << 0x10U))));
    vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__we 
        = vlSelfRef.Processor__DOT__datapath__DOT__enable_reg_write;
    vlSelfRef.Processor__DOT__datapath__DOT__insn_srli 
        = ((IData)(Processor__DOT__datapath__DOT____VdfgRegularize_h0d652ed3_0_15) 
           & (0U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_funct7)));
    vlSelfRef.Processor__DOT__datapath__DOT__insn_srai 
        = ((IData)(Processor__DOT__datapath__DOT____VdfgRegularize_h0d652ed3_0_15) 
           & (0x20U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_funct7)));
    vlSelfRef.Processor__DOT__datapath__DOT__insn_add 
        = ((IData)(Processor__DOT__datapath__DOT____VdfgRegularize_h0d652ed3_0_18) 
           & (0U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_funct7)));
    vlSelfRef.Processor__DOT__datapath__DOT__insn_sub 
        = ((IData)(Processor__DOT__datapath__DOT____VdfgRegularize_h0d652ed3_0_18) 
           & (0x20U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_funct7)));
    vlSelfRef.Processor__DOT__datapath__DOT__insn_srl 
        = ((IData)(Processor__DOT__datapath__DOT____VdfgRegularize_h0d652ed3_0_19) 
           & (0U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_funct7)));
    vlSelfRef.Processor__DOT__datapath__DOT__insn_sra 
        = ((IData)(Processor__DOT__datapath__DOT____VdfgRegularize_h0d652ed3_0_19) 
           & (0x20U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_funct7)));
    vlSelfRef.Processor__DOT__datapath__DOT__halt = vlSelfRef.Processor__DOT__datapath__DOT__insn_ecall;
    vlSelfRef.Processor__DOT__datapath__DOT__insn_mul 
        = ((IData)(Processor__DOT__datapath__DOT____VdfgRegularize_h0d652ed3_0_20) 
           & (0U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_funct3)));
    vlSelfRef.Processor__DOT__datapath__DOT__insn_mulh 
        = ((IData)(Processor__DOT__datapath__DOT____VdfgRegularize_h0d652ed3_0_20) 
           & (1U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_funct3)));
    vlSelfRef.Processor__DOT__datapath__DOT__insn_mulhsu 
        = ((IData)(Processor__DOT__datapath__DOT____VdfgRegularize_h0d652ed3_0_20) 
           & (2U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_funct3)));
    vlSelfRef.Processor__DOT__datapath__DOT__insn_mulhu 
        = ((IData)(Processor__DOT__datapath__DOT____VdfgRegularize_h0d652ed3_0_20) 
           & (3U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_funct3)));
    vlSelfRef.Processor__DOT__datapath__DOT__insn_div 
        = ((IData)(Processor__DOT__datapath__DOT____VdfgRegularize_h0d652ed3_0_20) 
           & (4U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_funct3)));
    vlSelfRef.Processor__DOT__datapath__DOT__insn_divu 
        = ((IData)(Processor__DOT__datapath__DOT____VdfgRegularize_h0d652ed3_0_20) 
           & (5U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_funct3)));
    vlSelfRef.Processor__DOT__datapath__DOT__insn_rem 
        = ((IData)(Processor__DOT__datapath__DOT____VdfgRegularize_h0d652ed3_0_20) 
           & (6U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_funct3)));
    vlSelfRef.Processor__DOT__datapath__DOT__insn_remu 
        = ((IData)(Processor__DOT__datapath__DOT____VdfgRegularize_h0d652ed3_0_20) 
           & (7U == (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_funct3)));
    vlSymsp->TOP__Processor__DOT__datapath__DOT__adder.b 
        = vlSelfRef.Processor__DOT__datapath__DOT__imm_i_sext;
    vlSelfRef.halt = vlSelfRef.Processor__DOT__datapath__DOT__halt;
    vlSelfRef.Processor__DOT__halt = vlSelfRef.Processor__DOT__datapath__DOT__halt;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__3(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Processor__DOT__pc_to_imem = vlSelfRef.Processor__DOT__datapath__DOT__pcCurrent;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((0U != (3U & vlSelfRef.Processor__DOT__pc_to_imem)))) {
            VL_WRITEF_NX("[%0t] %%Error: DatapathSingleCycle.sv:483: Assertion failed in %NProcessor.memory: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/MYSTUFF/hw3-singlecycle/DatapathSingleCycle.sv", 483, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((0U != (3U & vlSelfRef.Processor__DOT__mem_data_addr)))) {
            VL_WRITEF_NX("[%0t] %%Error: DatapathSingleCycle.sv:484: Assertion failed in %NProcessor.memory: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/MYSTUFF/hw3-singlecycle/DatapathSingleCycle.sv", 484, "");
        }
    }
    vlSelfRef.Processor__DOT__memory__DOT__pc_to_imem 
        = vlSelfRef.Processor__DOT__pc_to_imem;
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__rs2_data 
        = vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__regs
        [vlSelfRef.Processor__DOT__datapath__DOT__insn_rs2];
    vlSymsp->TOP__Processor__DOT__datapath__DOT__subber_reg.b 
        = ((IData)(1U) + (~ vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__regs
                          [vlSelfRef.Processor__DOT__datapath__DOT__insn_rs2]));
    vlSelfRef.Processor__DOT__datapath__DOT__rs2_data 
        = vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__regs
        [vlSelfRef.Processor__DOT__datapath__DOT__insn_rs2];
    vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__rs1_data 
        = vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__regs
        [vlSelfRef.Processor__DOT__datapath__DOT__insn_rs1];
    vlSelfRef.Processor__DOT__datapath__DOT__eq_condition 
        = (vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__regs
           [vlSelfRef.Processor__DOT__datapath__DOT__insn_rs1] 
           == vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__regs
           [vlSelfRef.Processor__DOT__datapath__DOT__insn_rs2]);
    vlSelfRef.Processor__DOT__datapath__DOT__neq_condition 
        = (vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__regs
           [vlSelfRef.Processor__DOT__datapath__DOT__insn_rs1] 
           != vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__regs
           [vlSelfRef.Processor__DOT__datapath__DOT__insn_rs2]);
    vlSelfRef.Processor__DOT__datapath__DOT__lt_signed 
        = VL_LTS_III(32, vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__regs
                     [vlSelfRef.Processor__DOT__datapath__DOT__insn_rs1], 
                     vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__regs
                     [vlSelfRef.Processor__DOT__datapath__DOT__insn_rs2]);
    vlSelfRef.Processor__DOT__datapath__DOT__ge_signed 
        = VL_GTES_III(32, vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__regs
                      [vlSelfRef.Processor__DOT__datapath__DOT__insn_rs1], 
                      vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__regs
                      [vlSelfRef.Processor__DOT__datapath__DOT__insn_rs2]);
    vlSelfRef.Processor__DOT__datapath__DOT__lt_unsigned 
        = (vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__regs
           [vlSelfRef.Processor__DOT__datapath__DOT__insn_rs1] 
           < vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__regs
           [vlSelfRef.Processor__DOT__datapath__DOT__insn_rs2]);
    vlSelfRef.Processor__DOT__datapath__DOT__ge_unsigned 
        = (vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__regs
           [vlSelfRef.Processor__DOT__datapath__DOT__insn_rs1] 
           >= vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__regs
           [vlSelfRef.Processor__DOT__datapath__DOT__insn_rs2]);
    vlSelfRef.Processor__DOT__datapath__DOT__rs1_data 
        = vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__regs
        [vlSelfRef.Processor__DOT__datapath__DOT__insn_rs1];
    vlSymsp->TOP__Processor__DOT__datapath__DOT__adder_reg.b 
        = vlSelfRef.Processor__DOT__datapath__DOT__rs2_data;
    vlSelfRef.Processor__DOT__datapath__DOT__branch_decision = 0U;
    if ((0x40U & (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode))) {
        if ((0x20U & (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode))) {
            if ((1U & (~ ((IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode))) {
                            if ((1U & (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode))) {
                                vlSelfRef.Processor__DOT__datapath__DOT__branch_decision 
                                    = ((0x4000U & vlSelfRef.Processor__DOT__insn_from_imem)
                                        ? ((0x2000U 
                                            & vlSelfRef.Processor__DOT__insn_from_imem)
                                            ? ((0x1000U 
                                                & vlSelfRef.Processor__DOT__insn_from_imem)
                                                ? (IData)(vlSelfRef.Processor__DOT__datapath__DOT__ge_unsigned)
                                                : (IData)(vlSelfRef.Processor__DOT__datapath__DOT__lt_unsigned))
                                            : ((0x1000U 
                                                & vlSelfRef.Processor__DOT__insn_from_imem)
                                                ? (IData)(vlSelfRef.Processor__DOT__datapath__DOT__ge_signed)
                                                : (IData)(vlSelfRef.Processor__DOT__datapath__DOT__lt_signed)))
                                        : ((1U & (~ 
                                                  (vlSelfRef.Processor__DOT__insn_from_imem 
                                                   >> 0xdU))) 
                                           && ((0x1000U 
                                                & vlSelfRef.Processor__DOT__insn_from_imem)
                                                ? (IData)(vlSelfRef.Processor__DOT__datapath__DOT__neq_condition)
                                                : (IData)(vlSelfRef.Processor__DOT__datapath__DOT__eq_condition))));
                            }
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__Processor__DOT__datapath__DOT__adder.a 
        = vlSelfRef.Processor__DOT__datapath__DOT__rs1_data;
    vlSymsp->TOP__Processor__DOT__datapath__DOT__adder_reg.a 
        = vlSelfRef.Processor__DOT__datapath__DOT__rs1_data;
    vlSymsp->TOP__Processor__DOT__datapath__DOT__subber_reg.a 
        = vlSelfRef.Processor__DOT__datapath__DOT__rs1_data;
    vlSelfRef.Processor__DOT__datapath__DOT__pcNext 
        = ((IData)(vlSelfRef.Processor__DOT__datapath__DOT__branch_decision)
            ? (vlSelfRef.Processor__DOT__datapath__DOT__pcCurrent 
               + vlSelfRef.Processor__DOT__datapath__DOT__imm_b_sext)
            : ((IData)(4U) + vlSelfRef.Processor__DOT__datapath__DOT__pcCurrent));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Processor__DOT__datapath__DOT__cla_result_reg2 
        = vlSymsp->TOP__Processor__DOT__datapath__DOT__subber_reg.sum;
    vlSelfRef.Processor__DOT__datapath__DOT__cla_result_reg 
        = vlSymsp->TOP__Processor__DOT__datapath__DOT__adder_reg.sum;
    vlSelfRef.Processor__DOT__datapath__DOT__cla_result 
        = vlSymsp->TOP__Processor__DOT__datapath__DOT__adder.sum;
    vlSelfRef.Processor__DOT__datapath__DOT__data_reg_write = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode))) {
            if ((0x10U & (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode))) {
                if ((1U & (~ ((IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode))) {
                        if ((2U & (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode))) {
                            if ((1U & (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode))) {
                                vlSelfRef.Processor__DOT__datapath__DOT__data_reg_write 
                                    = (0xfffff000U 
                                       & vlSelfRef.Processor__DOT__insn_from_imem);
                            }
                        }
                    } else if ((2U & (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode))) {
                        if ((1U & (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode))) {
                            if ((0x4000U & vlSelfRef.Processor__DOT__insn_from_imem)) {
                                if ((0x2000U & vlSelfRef.Processor__DOT__insn_from_imem)) {
                                    if ((0x1000U & vlSelfRef.Processor__DOT__insn_from_imem)) {
                                        if ((0U == 
                                             (vlSelfRef.Processor__DOT__insn_from_imem 
                                              >> 0x19U))) {
                                            vlSelfRef.Processor__DOT__datapath__DOT__data_reg_write 
                                                = (vlSelfRef.Processor__DOT__datapath__DOT__rs1_data 
                                                   & vlSelfRef.Processor__DOT__datapath__DOT__rs2_data);
                                        }
                                    } else if ((0U 
                                                == 
                                                (vlSelfRef.Processor__DOT__insn_from_imem 
                                                 >> 0x19U))) {
                                        vlSelfRef.Processor__DOT__datapath__DOT__data_reg_write 
                                            = (vlSelfRef.Processor__DOT__datapath__DOT__rs1_data 
                                               | vlSelfRef.Processor__DOT__datapath__DOT__rs2_data);
                                    }
                                } else if ((0x1000U 
                                            & vlSelfRef.Processor__DOT__insn_from_imem)) {
                                    if ((0U == (vlSelfRef.Processor__DOT__insn_from_imem 
                                                >> 0x19U))) {
                                        vlSelfRef.Processor__DOT__datapath__DOT__data_reg_write 
                                            = (vlSelfRef.Processor__DOT__datapath__DOT__rs1_data 
                                               >> (0x1fU 
                                                   & vlSelfRef.Processor__DOT__datapath__DOT__rs2_data));
                                    } else if ((0x20U 
                                                == 
                                                (vlSelfRef.Processor__DOT__insn_from_imem 
                                                 >> 0x19U))) {
                                        vlSelfRef.Processor__DOT__datapath__DOT__data_reg_write 
                                            = VL_SHIFTRS_III(32,32,5, vlSelfRef.Processor__DOT__datapath__DOT__rs1_data, 
                                                             (0x1fU 
                                                              & vlSelfRef.Processor__DOT__datapath__DOT__rs2_data));
                                    }
                                } else if ((0U == (vlSelfRef.Processor__DOT__insn_from_imem 
                                                   >> 0x19U))) {
                                    vlSelfRef.Processor__DOT__datapath__DOT__data_reg_write 
                                        = (vlSelfRef.Processor__DOT__datapath__DOT__rs1_data 
                                           ^ vlSelfRef.Processor__DOT__datapath__DOT__rs2_data);
                                }
                            } else if ((0x2000U & vlSelfRef.Processor__DOT__insn_from_imem)) {
                                if ((0x1000U & vlSelfRef.Processor__DOT__insn_from_imem)) {
                                    if ((0U == (vlSelfRef.Processor__DOT__insn_from_imem 
                                                >> 0x19U))) {
                                        vlSelfRef.Processor__DOT__datapath__DOT__data_reg_write 
                                            = ((vlSelfRef.Processor__DOT__datapath__DOT__rs1_data 
                                                < vlSelfRef.Processor__DOT__datapath__DOT__rs2_data)
                                                ? 1U
                                                : 0U);
                                    }
                                } else if ((0U == (vlSelfRef.Processor__DOT__insn_from_imem 
                                                   >> 0x19U))) {
                                    vlSelfRef.Processor__DOT__datapath__DOT__data_reg_write 
                                        = (VL_LTS_III(32, vlSelfRef.Processor__DOT__datapath__DOT__rs1_data, vlSelfRef.Processor__DOT__datapath__DOT__rs2_data)
                                            ? 1U : 0U);
                                }
                            } else if ((0x1000U & vlSelfRef.Processor__DOT__insn_from_imem)) {
                                if ((0U == (vlSelfRef.Processor__DOT__insn_from_imem 
                                            >> 0x19U))) {
                                    vlSelfRef.Processor__DOT__datapath__DOT__data_reg_write 
                                        = (vlSelfRef.Processor__DOT__datapath__DOT__rs1_data 
                                           << (0x1fU 
                                               & vlSelfRef.Processor__DOT__datapath__DOT__rs2_data));
                                }
                            } else if ((0U == (vlSelfRef.Processor__DOT__insn_from_imem 
                                               >> 0x19U))) {
                                vlSelfRef.Processor__DOT__datapath__DOT__data_reg_write 
                                    = vlSelfRef.Processor__DOT__datapath__DOT__cla_result_reg;
                            } else if ((0x20U == (vlSelfRef.Processor__DOT__insn_from_imem 
                                                  >> 0x19U))) {
                                vlSelfRef.Processor__DOT__datapath__DOT__data_reg_write 
                                    = vlSelfRef.Processor__DOT__datapath__DOT__cla_result_reg2;
                            }
                        }
                    }
                }
            }
        } else if ((0x10U & (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode))) {
            if ((1U & (~ ((IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode) 
                          >> 3U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode))) {
                        if ((1U & (IData)(vlSelfRef.Processor__DOT__datapath__DOT__insn_opcode))) {
                            if ((0x4000U & vlSelfRef.Processor__DOT__insn_from_imem)) {
                                if ((0x2000U & vlSelfRef.Processor__DOT__insn_from_imem)) {
                                    vlSelfRef.Processor__DOT__datapath__DOT__data_reg_write 
                                        = ((0x1000U 
                                            & vlSelfRef.Processor__DOT__insn_from_imem)
                                            ? (vlSelfRef.Processor__DOT__datapath__DOT__rs1_data 
                                               & vlSelfRef.Processor__DOT__datapath__DOT__imm_i_sext)
                                            : (vlSelfRef.Processor__DOT__datapath__DOT__rs1_data 
                                               | vlSelfRef.Processor__DOT__datapath__DOT__imm_i_sext));
                                } else if ((0x1000U 
                                            & vlSelfRef.Processor__DOT__insn_from_imem)) {
                                    if ((0U == (vlSelfRef.Processor__DOT__insn_from_imem 
                                                >> 0x19U))) {
                                        vlSelfRef.Processor__DOT__datapath__DOT__data_reg_write 
                                            = (vlSelfRef.Processor__DOT__datapath__DOT__rs1_data 
                                               >> (IData)(vlSelfRef.Processor__DOT__datapath__DOT__imm_shamt));
                                    } else if ((0x20U 
                                                == 
                                                (vlSelfRef.Processor__DOT__insn_from_imem 
                                                 >> 0x19U))) {
                                        vlSelfRef.Processor__DOT__datapath__DOT__data_reg_write 
                                            = VL_SHIFTRS_III(32,32,5, vlSelfRef.Processor__DOT__datapath__DOT__rs1_data, (IData)(vlSelfRef.Processor__DOT__datapath__DOT__imm_shamt));
                                    }
                                } else {
                                    vlSelfRef.Processor__DOT__datapath__DOT__data_reg_write 
                                        = (vlSelfRef.Processor__DOT__datapath__DOT__rs1_data 
                                           ^ vlSelfRef.Processor__DOT__datapath__DOT__imm_i_sext);
                                }
                            } else if ((0x2000U & vlSelfRef.Processor__DOT__insn_from_imem)) {
                                vlSelfRef.Processor__DOT__datapath__DOT__data_reg_write 
                                    = ((0x1000U & vlSelfRef.Processor__DOT__insn_from_imem)
                                        ? ((vlSelfRef.Processor__DOT__datapath__DOT__rs1_data 
                                            < vlSelfRef.Processor__DOT__datapath__DOT__imm_i_sext)
                                            ? 1U : 0U)
                                        : (VL_LTS_III(32, vlSelfRef.Processor__DOT__datapath__DOT__rs1_data, vlSelfRef.Processor__DOT__datapath__DOT__imm_i_sext)
                                            ? 1U : 0U));
                            } else if ((0x1000U & vlSelfRef.Processor__DOT__insn_from_imem)) {
                                if ((0U == (vlSelfRef.Processor__DOT__insn_from_imem 
                                            >> 0x19U))) {
                                    vlSelfRef.Processor__DOT__datapath__DOT__data_reg_write 
                                        = (vlSelfRef.Processor__DOT__datapath__DOT__rs1_data 
                                           << (IData)(vlSelfRef.Processor__DOT__datapath__DOT__imm_shamt));
                                }
                            } else {
                                vlSelfRef.Processor__DOT__datapath__DOT__data_reg_write 
                                    = vlSelfRef.Processor__DOT__datapath__DOT__cla_result;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.Processor__DOT__datapath__DOT__rf__DOT__rd_data 
        = vlSelfRef.Processor__DOT__datapath__DOT__data_reg_write;
}
