// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"
class Vtop_cla;


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final : public VerilatedModule {
  public:
    // CELLS
    Vtop_cla* __PVT__Processor__DOT__datapath__DOT__adder;
    Vtop_cla* __PVT__Processor__DOT__datapath__DOT__adder_reg;
    Vtop_cla* __PVT__Processor__DOT__datapath__DOT__subber_reg;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clock_proc,0,0);
        VL_IN8(clock_mem,0,0);
        VL_IN8(rst,0,0);
        VL_OUT8(halt,0,0);
        CData/*0:0*/ Processor__DOT__clock_proc;
        CData/*0:0*/ Processor__DOT__clock_mem;
        CData/*0:0*/ Processor__DOT__rst;
        CData/*0:0*/ Processor__DOT__halt;
        CData/*3:0*/ Processor__DOT__mem_data_we;
        CData/*0:0*/ Processor__DOT__memory__DOT__rst;
        CData/*0:0*/ Processor__DOT__memory__DOT__clock_mem;
        CData/*3:0*/ Processor__DOT__memory__DOT__store_we_to_dmem;
        CData/*0:0*/ Processor__DOT__datapath__DOT__clk;
        CData/*0:0*/ Processor__DOT__datapath__DOT__rst;
        CData/*0:0*/ Processor__DOT__datapath__DOT__halt;
        CData/*3:0*/ Processor__DOT__datapath__DOT__store_we_to_dmem;
        CData/*6:0*/ Processor__DOT__datapath__DOT__insn_funct7;
        CData/*4:0*/ Processor__DOT__datapath__DOT__insn_rs2;
        CData/*4:0*/ Processor__DOT__datapath__DOT__insn_rs1;
        CData/*2:0*/ Processor__DOT__datapath__DOT__insn_funct3;
        CData/*4:0*/ Processor__DOT__datapath__DOT__insn_rd;
        CData/*6:0*/ Processor__DOT__datapath__DOT__insn_opcode;
        CData/*4:0*/ Processor__DOT__datapath__DOT__imm_shamt;
        CData/*0:0*/ Processor__DOT__datapath__DOT__insn_lui;
        CData/*0:0*/ Processor__DOT__datapath__DOT__insn_auipc;
        CData/*0:0*/ Processor__DOT__datapath__DOT__insn_jal;
        CData/*0:0*/ Processor__DOT__datapath__DOT__insn_jalr;
        CData/*0:0*/ Processor__DOT__datapath__DOT__insn_beq;
        CData/*0:0*/ Processor__DOT__datapath__DOT__insn_bne;
        CData/*0:0*/ Processor__DOT__datapath__DOT__insn_blt;
        CData/*0:0*/ Processor__DOT__datapath__DOT__insn_bge;
        CData/*0:0*/ Processor__DOT__datapath__DOT__insn_bltu;
        CData/*0:0*/ Processor__DOT__datapath__DOT__insn_bgeu;
        CData/*0:0*/ Processor__DOT__datapath__DOT__insn_lb;
        CData/*0:0*/ Processor__DOT__datapath__DOT__insn_lh;
        CData/*0:0*/ Processor__DOT__datapath__DOT__insn_lw;
        CData/*0:0*/ Processor__DOT__datapath__DOT__insn_lbu;
        CData/*0:0*/ Processor__DOT__datapath__DOT__insn_lhu;
        CData/*0:0*/ Processor__DOT__datapath__DOT__insn_sb;
        CData/*0:0*/ Processor__DOT__datapath__DOT__insn_sh;
        CData/*0:0*/ Processor__DOT__datapath__DOT__insn_sw;
        CData/*0:0*/ Processor__DOT__datapath__DOT__insn_addi;
        CData/*0:0*/ Processor__DOT__datapath__DOT__insn_slti;
        CData/*0:0*/ Processor__DOT__datapath__DOT__insn_sltiu;
        CData/*0:0*/ Processor__DOT__datapath__DOT__insn_xori;
        CData/*0:0*/ Processor__DOT__datapath__DOT__insn_ori;
        CData/*0:0*/ Processor__DOT__datapath__DOT__insn_andi;
        CData/*0:0*/ Processor__DOT__datapath__DOT__insn_slli;
        CData/*0:0*/ Processor__DOT__datapath__DOT__insn_srli;
        CData/*0:0*/ Processor__DOT__datapath__DOT__insn_srai;
        CData/*0:0*/ Processor__DOT__datapath__DOT__insn_add;
        CData/*0:0*/ Processor__DOT__datapath__DOT__insn_sub;
        CData/*0:0*/ Processor__DOT__datapath__DOT__insn_sll;
        CData/*0:0*/ Processor__DOT__datapath__DOT__insn_slt;
        CData/*0:0*/ Processor__DOT__datapath__DOT__insn_sltu;
        CData/*0:0*/ Processor__DOT__datapath__DOT__insn_xor;
        CData/*0:0*/ Processor__DOT__datapath__DOT__insn_srl;
        CData/*0:0*/ Processor__DOT__datapath__DOT__insn_sra;
        CData/*0:0*/ Processor__DOT__datapath__DOT__insn_or;
        CData/*0:0*/ Processor__DOT__datapath__DOT__insn_and;
        CData/*0:0*/ Processor__DOT__datapath__DOT__insn_mul;
        CData/*0:0*/ Processor__DOT__datapath__DOT__insn_mulh;
        CData/*0:0*/ Processor__DOT__datapath__DOT__insn_mulhsu;
        CData/*0:0*/ Processor__DOT__datapath__DOT__insn_mulhu;
    };
    struct {
        CData/*0:0*/ Processor__DOT__datapath__DOT__insn_div;
        CData/*0:0*/ Processor__DOT__datapath__DOT__insn_divu;
        CData/*0:0*/ Processor__DOT__datapath__DOT__insn_rem;
        CData/*0:0*/ Processor__DOT__datapath__DOT__insn_remu;
        CData/*0:0*/ Processor__DOT__datapath__DOT__insn_ecall;
        CData/*0:0*/ Processor__DOT__datapath__DOT__insn_fence;
        CData/*0:0*/ Processor__DOT__datapath__DOT__enable_reg_write;
        CData/*0:0*/ Processor__DOT__datapath__DOT__illegal_insn;
        CData/*0:0*/ Processor__DOT__datapath__DOT__branch_decision;
        CData/*0:0*/ Processor__DOT__datapath__DOT__eq_condition;
        CData/*0:0*/ Processor__DOT__datapath__DOT__neq_condition;
        CData/*0:0*/ Processor__DOT__datapath__DOT__lt_signed;
        CData/*0:0*/ Processor__DOT__datapath__DOT__ge_signed;
        CData/*0:0*/ Processor__DOT__datapath__DOT__lt_unsigned;
        CData/*0:0*/ Processor__DOT__datapath__DOT__ge_unsigned;
        CData/*4:0*/ Processor__DOT__datapath__DOT__rf__DOT__rd;
        CData/*4:0*/ Processor__DOT__datapath__DOT__rf__DOT__rs1;
        CData/*4:0*/ Processor__DOT__datapath__DOT__rf__DOT__rs2;
        CData/*0:0*/ Processor__DOT__datapath__DOT__rf__DOT__clk;
        CData/*0:0*/ Processor__DOT__datapath__DOT__rf__DOT__we;
        CData/*0:0*/ Processor__DOT__datapath__DOT__rf__DOT__rst;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clock_mem__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clock_proc__0;
        CData/*0:0*/ __VactContinue;
        SData/*11:0*/ Processor__DOT__datapath__DOT__imm_i;
        SData/*11:0*/ Processor__DOT__datapath__DOT__imm_s;
        SData/*12:0*/ Processor__DOT__datapath__DOT__imm_b;
        IData/*31:0*/ Processor__DOT__pc_to_imem;
        IData/*31:0*/ Processor__DOT__insn_from_imem;
        IData/*31:0*/ Processor__DOT__mem_data_addr;
        IData/*31:0*/ Processor__DOT__mem_data_loaded_value;
        IData/*31:0*/ Processor__DOT__mem_data_to_write;
        VlWide<8>/*255:0*/ Processor__DOT__test_case;
        IData/*31:0*/ Processor__DOT__memory__DOT__pc_to_imem;
        IData/*31:0*/ Processor__DOT__memory__DOT__insn_from_imem;
        IData/*31:0*/ Processor__DOT__memory__DOT__addr_to_dmem;
        IData/*31:0*/ Processor__DOT__memory__DOT__load_data_from_dmem;
        IData/*31:0*/ Processor__DOT__memory__DOT__store_data_to_dmem;
        IData/*31:0*/ Processor__DOT__datapath__DOT__pc_to_imem;
        IData/*31:0*/ Processor__DOT__datapath__DOT__insn_from_imem;
        IData/*31:0*/ Processor__DOT__datapath__DOT__addr_to_dmem;
        IData/*31:0*/ Processor__DOT__datapath__DOT__load_data_from_dmem;
        IData/*31:0*/ Processor__DOT__datapath__DOT__store_data_to_dmem;
        IData/*20:0*/ Processor__DOT__datapath__DOT__imm_j;
        IData/*31:0*/ Processor__DOT__datapath__DOT__imm_i_sext;
        IData/*31:0*/ Processor__DOT__datapath__DOT__imm_s_sext;
        IData/*31:0*/ Processor__DOT__datapath__DOT__imm_b_sext;
        IData/*31:0*/ Processor__DOT__datapath__DOT__imm_j_sext;
        VlWide<8>/*255:0*/ Processor__DOT__datapath__DOT__disasm_wire;
        IData/*31:0*/ Processor__DOT__datapath__DOT__pcNext;
        IData/*31:0*/ Processor__DOT__datapath__DOT__pcCurrent;
        IData/*31:0*/ Processor__DOT__datapath__DOT__cycles_current;
        IData/*31:0*/ Processor__DOT__datapath__DOT__num_insns_current;
        IData/*31:0*/ Processor__DOT__datapath__DOT__rs1_data;
        IData/*31:0*/ Processor__DOT__datapath__DOT__rs2_data;
        IData/*31:0*/ Processor__DOT__datapath__DOT__data_reg_write;
        IData/*31:0*/ Processor__DOT__datapath__DOT__cla_result;
        IData/*31:0*/ Processor__DOT__datapath__DOT__cla_result_reg;
        IData/*31:0*/ Processor__DOT__datapath__DOT__cla_result_reg2;
        IData/*31:0*/ Processor__DOT__datapath__DOT__rf__DOT__rd_data;
        IData/*31:0*/ Processor__DOT__datapath__DOT__rf__DOT__rs1_data;
        IData/*31:0*/ Processor__DOT__datapath__DOT__rf__DOT__rs2_data;
    };
    struct {
        IData/*31:0*/ Processor__DOT__datapath__DOT__rf__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<IData/*31:0*/, 8192> Processor__DOT__memory__DOT__mem_array;
        VlUnpacked<IData/*31:0*/, 32> Processor__DOT__datapath__DOT__rf__DOT__regs;
    };
    std::string Processor__DOT__datapath__DOT__disasm_string;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr CData/*6:0*/ Processor__DOT__datapath__DOT__OpLoad = 3U;
    static constexpr CData/*6:0*/ Processor__DOT__datapath__DOT__OpStore = 0x23U;
    static constexpr CData/*6:0*/ Processor__DOT__datapath__DOT__OpBranch = 0x63U;
    static constexpr CData/*6:0*/ Processor__DOT__datapath__DOT__OpJalr = 0x67U;
    static constexpr CData/*6:0*/ Processor__DOT__datapath__DOT__OpMiscMem = 0x0fU;
    static constexpr CData/*6:0*/ Processor__DOT__datapath__DOT__OpJal = 0x6fU;
    static constexpr CData/*6:0*/ Processor__DOT__datapath__DOT__OpRegImm = 0x13U;
    static constexpr CData/*6:0*/ Processor__DOT__datapath__DOT__OpRegReg = 0x33U;
    static constexpr CData/*6:0*/ Processor__DOT__datapath__DOT__OpEnviron = 0x73U;
    static constexpr CData/*6:0*/ Processor__DOT__datapath__DOT__OpAuipc = 0x17U;
    static constexpr CData/*6:0*/ Processor__DOT__datapath__DOT__OpLui = 0x37U;
    static constexpr IData/*31:0*/ Processor__DOT__memory__DOT__NUM_WORDS = 0x00002000U;
    static constexpr IData/*31:0*/ Processor__DOT__memory__DOT__AddrMsb = 0x0000000eU;
    static constexpr IData/*31:0*/ Processor__DOT__memory__DOT__AddrLsb = 2U;
    static constexpr IData/*31:0*/ Processor__DOT__datapath__DOT__rf__DOT__NumRegs = 0x00000020U;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
