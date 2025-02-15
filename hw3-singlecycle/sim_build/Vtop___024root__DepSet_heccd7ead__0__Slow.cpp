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

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__clock_mem__0 = vlSelfRef.clock_mem;
    vlSelfRef.__Vtrigprevexpr___TOP__clock_proc__0 
        = vlSelfRef.clock_proc;
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
            VL_FATAL_MT("/MYSTUFF/hw3-singlecycle/DatapathSingleCycle.sv", 531, "", "Settle region did not converge.");
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

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);
VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf);

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
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clock_mem)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge clock_mem)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge clock_proc)\n");
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
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clock_mem)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge clock_mem)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge clock_proc)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clock_proc = VL_RAND_RESET_I(1);
    vlSelf->clock_mem = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->halt = VL_RAND_RESET_I(1);
    vlSelf->Processor__DOT__clock_proc = VL_RAND_RESET_I(1);
    vlSelf->Processor__DOT__clock_mem = VL_RAND_RESET_I(1);
    vlSelf->Processor__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->Processor__DOT__halt = VL_RAND_RESET_I(1);
    vlSelf->Processor__DOT__pc_to_imem = VL_RAND_RESET_I(32);
    vlSelf->Processor__DOT__insn_from_imem = VL_RAND_RESET_I(32);
    vlSelf->Processor__DOT__mem_data_addr = VL_RAND_RESET_I(32);
    vlSelf->Processor__DOT__mem_data_loaded_value = VL_RAND_RESET_I(32);
    vlSelf->Processor__DOT__mem_data_to_write = VL_RAND_RESET_I(32);
    vlSelf->Processor__DOT__mem_data_we = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(256, vlSelf->Processor__DOT__test_case);
    vlSelf->Processor__DOT__memory__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->Processor__DOT__memory__DOT__clock_mem = VL_RAND_RESET_I(1);
    vlSelf->Processor__DOT__memory__DOT__pc_to_imem = VL_RAND_RESET_I(32);
    vlSelf->Processor__DOT__memory__DOT__insn_from_imem = VL_RAND_RESET_I(32);
    vlSelf->Processor__DOT__memory__DOT__addr_to_dmem = VL_RAND_RESET_I(32);
    vlSelf->Processor__DOT__memory__DOT__load_data_from_dmem = VL_RAND_RESET_I(32);
    vlSelf->Processor__DOT__memory__DOT__store_data_to_dmem = VL_RAND_RESET_I(32);
    vlSelf->Processor__DOT__memory__DOT__store_we_to_dmem = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->Processor__DOT__memory__DOT__mem_array[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->Processor__DOT__datapath__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->Processor__DOT__datapath__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->Processor__DOT__datapath__DOT__halt = VL_RAND_RESET_I(1);
    vlSelf->Processor__DOT__datapath__DOT__pc_to_imem = VL_RAND_RESET_I(32);
    vlSelf->Processor__DOT__datapath__DOT__insn_from_imem = VL_RAND_RESET_I(32);
    vlSelf->Processor__DOT__datapath__DOT__addr_to_dmem = VL_RAND_RESET_I(32);
    vlSelf->Processor__DOT__datapath__DOT__load_data_from_dmem = VL_RAND_RESET_I(32);
    vlSelf->Processor__DOT__datapath__DOT__store_data_to_dmem = VL_RAND_RESET_I(32);
    vlSelf->Processor__DOT__datapath__DOT__store_we_to_dmem = VL_RAND_RESET_I(4);
    vlSelf->Processor__DOT__datapath__DOT__insn_funct7 = VL_RAND_RESET_I(7);
    vlSelf->Processor__DOT__datapath__DOT__insn_rs2 = VL_RAND_RESET_I(5);
    vlSelf->Processor__DOT__datapath__DOT__insn_rs1 = VL_RAND_RESET_I(5);
    vlSelf->Processor__DOT__datapath__DOT__insn_funct3 = VL_RAND_RESET_I(3);
    vlSelf->Processor__DOT__datapath__DOT__insn_rd = VL_RAND_RESET_I(5);
    vlSelf->Processor__DOT__datapath__DOT__insn_opcode = VL_RAND_RESET_I(7);
    vlSelf->Processor__DOT__datapath__DOT__imm_i = VL_RAND_RESET_I(12);
    vlSelf->Processor__DOT__datapath__DOT__imm_shamt = VL_RAND_RESET_I(5);
    vlSelf->Processor__DOT__datapath__DOT__imm_s = VL_RAND_RESET_I(12);
    vlSelf->Processor__DOT__datapath__DOT__imm_b = VL_RAND_RESET_I(13);
    vlSelf->Processor__DOT__datapath__DOT__imm_j = VL_RAND_RESET_I(21);
    vlSelf->Processor__DOT__datapath__DOT__imm_i_sext = VL_RAND_RESET_I(32);
    vlSelf->Processor__DOT__datapath__DOT__imm_s_sext = VL_RAND_RESET_I(32);
    vlSelf->Processor__DOT__datapath__DOT__imm_b_sext = VL_RAND_RESET_I(32);
    vlSelf->Processor__DOT__datapath__DOT__imm_j_sext = VL_RAND_RESET_I(32);
    vlSelf->Processor__DOT__datapath__DOT__insn_lui = VL_RAND_RESET_I(1);
    vlSelf->Processor__DOT__datapath__DOT__insn_auipc = VL_RAND_RESET_I(1);
    vlSelf->Processor__DOT__datapath__DOT__insn_jal = VL_RAND_RESET_I(1);
    vlSelf->Processor__DOT__datapath__DOT__insn_jalr = VL_RAND_RESET_I(1);
    vlSelf->Processor__DOT__datapath__DOT__insn_beq = VL_RAND_RESET_I(1);
    vlSelf->Processor__DOT__datapath__DOT__insn_bne = VL_RAND_RESET_I(1);
    vlSelf->Processor__DOT__datapath__DOT__insn_blt = VL_RAND_RESET_I(1);
    vlSelf->Processor__DOT__datapath__DOT__insn_bge = VL_RAND_RESET_I(1);
    vlSelf->Processor__DOT__datapath__DOT__insn_bltu = VL_RAND_RESET_I(1);
    vlSelf->Processor__DOT__datapath__DOT__insn_bgeu = VL_RAND_RESET_I(1);
    vlSelf->Processor__DOT__datapath__DOT__insn_lb = VL_RAND_RESET_I(1);
    vlSelf->Processor__DOT__datapath__DOT__insn_lh = VL_RAND_RESET_I(1);
    vlSelf->Processor__DOT__datapath__DOT__insn_lw = VL_RAND_RESET_I(1);
    vlSelf->Processor__DOT__datapath__DOT__insn_lbu = VL_RAND_RESET_I(1);
    vlSelf->Processor__DOT__datapath__DOT__insn_lhu = VL_RAND_RESET_I(1);
    vlSelf->Processor__DOT__datapath__DOT__insn_sb = VL_RAND_RESET_I(1);
    vlSelf->Processor__DOT__datapath__DOT__insn_sh = VL_RAND_RESET_I(1);
    vlSelf->Processor__DOT__datapath__DOT__insn_sw = VL_RAND_RESET_I(1);
    vlSelf->Processor__DOT__datapath__DOT__insn_addi = VL_RAND_RESET_I(1);
    vlSelf->Processor__DOT__datapath__DOT__insn_slti = VL_RAND_RESET_I(1);
    vlSelf->Processor__DOT__datapath__DOT__insn_sltiu = VL_RAND_RESET_I(1);
    vlSelf->Processor__DOT__datapath__DOT__insn_xori = VL_RAND_RESET_I(1);
    vlSelf->Processor__DOT__datapath__DOT__insn_ori = VL_RAND_RESET_I(1);
    vlSelf->Processor__DOT__datapath__DOT__insn_andi = VL_RAND_RESET_I(1);
    vlSelf->Processor__DOT__datapath__DOT__insn_slli = VL_RAND_RESET_I(1);
    vlSelf->Processor__DOT__datapath__DOT__insn_srli = VL_RAND_RESET_I(1);
    vlSelf->Processor__DOT__datapath__DOT__insn_srai = VL_RAND_RESET_I(1);
    vlSelf->Processor__DOT__datapath__DOT__insn_add = VL_RAND_RESET_I(1);
    vlSelf->Processor__DOT__datapath__DOT__insn_sub = VL_RAND_RESET_I(1);
    vlSelf->Processor__DOT__datapath__DOT__insn_sll = VL_RAND_RESET_I(1);
    vlSelf->Processor__DOT__datapath__DOT__insn_slt = VL_RAND_RESET_I(1);
    vlSelf->Processor__DOT__datapath__DOT__insn_sltu = VL_RAND_RESET_I(1);
    vlSelf->Processor__DOT__datapath__DOT__insn_xor = VL_RAND_RESET_I(1);
    vlSelf->Processor__DOT__datapath__DOT__insn_srl = VL_RAND_RESET_I(1);
    vlSelf->Processor__DOT__datapath__DOT__insn_sra = VL_RAND_RESET_I(1);
    vlSelf->Processor__DOT__datapath__DOT__insn_or = VL_RAND_RESET_I(1);
    vlSelf->Processor__DOT__datapath__DOT__insn_and = VL_RAND_RESET_I(1);
    vlSelf->Processor__DOT__datapath__DOT__insn_mul = VL_RAND_RESET_I(1);
    vlSelf->Processor__DOT__datapath__DOT__insn_mulh = VL_RAND_RESET_I(1);
    vlSelf->Processor__DOT__datapath__DOT__insn_mulhsu = VL_RAND_RESET_I(1);
    vlSelf->Processor__DOT__datapath__DOT__insn_mulhu = VL_RAND_RESET_I(1);
    vlSelf->Processor__DOT__datapath__DOT__insn_div = VL_RAND_RESET_I(1);
    vlSelf->Processor__DOT__datapath__DOT__insn_divu = VL_RAND_RESET_I(1);
    vlSelf->Processor__DOT__datapath__DOT__insn_rem = VL_RAND_RESET_I(1);
    vlSelf->Processor__DOT__datapath__DOT__insn_remu = VL_RAND_RESET_I(1);
    vlSelf->Processor__DOT__datapath__DOT__insn_ecall = VL_RAND_RESET_I(1);
    vlSelf->Processor__DOT__datapath__DOT__insn_fence = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, vlSelf->Processor__DOT__datapath__DOT__disasm_wire);
    vlSelf->Processor__DOT__datapath__DOT__pcNext = VL_RAND_RESET_I(32);
    vlSelf->Processor__DOT__datapath__DOT__pcCurrent = VL_RAND_RESET_I(32);
    vlSelf->Processor__DOT__datapath__DOT__cycles_current = VL_RAND_RESET_I(32);
    vlSelf->Processor__DOT__datapath__DOT__num_insns_current = VL_RAND_RESET_I(32);
    vlSelf->Processor__DOT__datapath__DOT__rs1_data = VL_RAND_RESET_I(32);
    vlSelf->Processor__DOT__datapath__DOT__rs2_data = VL_RAND_RESET_I(32);
    vlSelf->Processor__DOT__datapath__DOT__data_reg_write = VL_RAND_RESET_I(32);
    vlSelf->Processor__DOT__datapath__DOT__enable_reg_write = VL_RAND_RESET_I(1);
    vlSelf->Processor__DOT__datapath__DOT__illegal_insn = VL_RAND_RESET_I(1);
    vlSelf->Processor__DOT__datapath__DOT__cla_result = VL_RAND_RESET_I(32);
    vlSelf->Processor__DOT__datapath__DOT__cla_result_reg = VL_RAND_RESET_I(32);
    vlSelf->Processor__DOT__datapath__DOT__cla_result_reg2 = VL_RAND_RESET_I(32);
    vlSelf->Processor__DOT__datapath__DOT__branch_decision = VL_RAND_RESET_I(1);
    vlSelf->Processor__DOT__datapath__DOT__eq_condition = VL_RAND_RESET_I(1);
    vlSelf->Processor__DOT__datapath__DOT__neq_condition = VL_RAND_RESET_I(1);
    vlSelf->Processor__DOT__datapath__DOT__lt_signed = VL_RAND_RESET_I(1);
    vlSelf->Processor__DOT__datapath__DOT__ge_signed = VL_RAND_RESET_I(1);
    vlSelf->Processor__DOT__datapath__DOT__lt_unsigned = VL_RAND_RESET_I(1);
    vlSelf->Processor__DOT__datapath__DOT__ge_unsigned = VL_RAND_RESET_I(1);
    vlSelf->Processor__DOT__datapath__DOT__rf__DOT__rd = VL_RAND_RESET_I(5);
    vlSelf->Processor__DOT__datapath__DOT__rf__DOT__rd_data = VL_RAND_RESET_I(32);
    vlSelf->Processor__DOT__datapath__DOT__rf__DOT__rs1 = VL_RAND_RESET_I(5);
    vlSelf->Processor__DOT__datapath__DOT__rf__DOT__rs1_data = VL_RAND_RESET_I(32);
    vlSelf->Processor__DOT__datapath__DOT__rf__DOT__rs2 = VL_RAND_RESET_I(5);
    vlSelf->Processor__DOT__datapath__DOT__rf__DOT__rs2_data = VL_RAND_RESET_I(32);
    vlSelf->Processor__DOT__datapath__DOT__rf__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->Processor__DOT__datapath__DOT__rf__DOT__we = VL_RAND_RESET_I(1);
    vlSelf->Processor__DOT__datapath__DOT__rf__DOT__rst = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->Processor__DOT__datapath__DOT__rf__DOT__regs[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->Processor__DOT__datapath__DOT__rf__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->__Vtrigprevexpr___TOP__clock_mem__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__clock_proc__0 = VL_RAND_RESET_I(1);
}
