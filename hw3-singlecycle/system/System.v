module MyClockGen (
	input_clk_25MHz,
	clk_proc,
	clk_mem,
	locked
);
	input input_clk_25MHz;
	output wire clk_proc;
	output wire clk_mem;
	output wire locked;
	wire clkfb;
	(* FREQUENCY_PIN_CLKI = "25" *) (* FREQUENCY_PIN_CLKOP = "4.16667" *) (* FREQUENCY_PIN_CLKOS = "4.01003" *) (* ICP_CURRENT = "12" *) (* LPF_RESISTOR = "8" *) (* MFG_ENABLE_FILTEROPAMP = "1" *) (* MFG_GMCREF_SEL = "2" *) EHXPLLL #(
		.PLLRST_ENA("DISABLED"),
		.INTFB_WAKE("DISABLED"),
		.STDBY_ENABLE("DISABLED"),
		.DPHASE_SOURCE("DISABLED"),
		.OUTDIVIDER_MUXA("DIVA"),
		.OUTDIVIDER_MUXB("DIVB"),
		.OUTDIVIDER_MUXC("DIVC"),
		.OUTDIVIDER_MUXD("DIVD"),
		.CLKI_DIV(6),
		.CLKOP_ENABLE("ENABLED"),
		.CLKOP_DIV(128),
		.CLKOP_CPHASE(64),
		.CLKOP_FPHASE(0),
		.CLKOS_ENABLE("ENABLED"),
		.CLKOS_DIV(133),
		.CLKOS_CPHASE(97),
		.CLKOS_FPHASE(2),
		.FEEDBK_PATH("INT_OP"),
		.CLKFB_DIV(1)
	) pll_i(
		.RST(1'b0),
		.STDBY(1'b0),
		.CLKI(input_clk_25MHz),
		.CLKOP(clk_proc),
		.CLKOS(clk_mem),
		.CLKFB(clkfb),
		.CLKINTFB(clkfb),
		.PHASESEL0(1'b0),
		.PHASESEL1(1'b0),
		.PHASEDIR(1'b1),
		.PHASESTEP(1'b1),
		.PHASELOADREG(1'b1),
		.PLLWAKESYNC(1'b0),
		.ENCLKOP(1'b0),
		.LOCK(locked)
	);
endmodule
module gp1 (
	a,
	b,
	g,
	p
);
	input wire a;
	input wire b;
	output wire g;
	output wire p;
	assign g = a & b;
	assign p = a | b;
endmodule
module gp4 (
	gin,
	pin,
	cin,
	gout,
	pout,
	cout
);
	input wire [3:0] gin;
	input wire [3:0] pin;
	input wire cin;
	output wire gout;
	output wire pout;
	output wire [2:0] cout;
	assign cout[0] = gin[0] | (pin[0] & cin);
	assign cout[1] = (gin[1] | (pin[1] & gin[0])) | ((pin[1] & pin[0]) & cin);
	assign cout[2] = ((gin[2] | (pin[2] & gin[1])) | ((pin[2] & pin[1]) & gin[0])) | (((pin[2] & pin[1]) & pin[0]) & cin);
	assign gout = ((gin[3] | (pin[3] & gin[2])) | ((pin[3] & pin[2]) & gin[1])) | (((pin[3] & pin[2]) & pin[1]) & gin[0]);
	assign pout = &pin;
endmodule
module gp8 (
	gin,
	pin,
	cin,
	gout,
	pout,
	cout
);
	input wire [7:0] gin;
	input wire [7:0] pin;
	input wire cin;
	output wire gout;
	output wire pout;
	output wire [6:0] cout;
	wire g_lower;
	wire p_lower;
	wire g_upper;
	wire p_upper;
	wire c_mid;
	gp4 gp_segment_low(
		.gin(gin[3:0]),
		.pin(pin[3:0]),
		.cin(cin),
		.gout(g_lower),
		.pout(p_lower),
		.cout(cout[2:0])
	);
	gp4 gp_segment_high(
		.gin(gin[7:4]),
		.pin(pin[7:4]),
		.cin(c_mid),
		.gout(g_upper),
		.pout(p_upper),
		.cout(cout[6:4])
	);
	assign c_mid = g_lower | (p_lower & cin);
	assign cout[3] = c_mid;
	assign gout = g_upper | (p_upper & g_lower);
	assign pout = p_upper & p_lower;
endmodule
module cla (
	a,
	b,
	cin,
	sum
);
	input wire [31:0] a;
	input wire [31:0] b;
	input wire cin;
	output wire [31:0] sum;
	wire [31:0] g;
	wire [31:0] p;
	wire [31:0] carry;
	wire [3:0] gout;
	wire [3:0] pout;
	wire c8;
	wire c16;
	wire c24;
	genvar _gv_i_2;
	generate
		for (_gv_i_2 = 0; _gv_i_2 < 32; _gv_i_2 = _gv_i_2 + 1) begin : gp1_loop
			localparam i = _gv_i_2;
			gp1 gp_inst(
				.a(a[i]),
				.b(b[i]),
				.g(g[i]),
				.p(p[i])
			);
		end
	endgenerate
	gp8 gp8_low(
		.gin(g[7:0]),
		.pin(p[7:0]),
		.cin(cin),
		.gout(gout[0]),
		.pout(pout[0]),
		.cout(carry[7:1])
	);
	assign c8 = gout[0] | (pout[0] & cin);
	gp8 gp8_mid1(
		.gin(g[15:8]),
		.pin(p[15:8]),
		.cin(c8),
		.gout(gout[1]),
		.pout(pout[1]),
		.cout(carry[15:9])
	);
	assign c16 = gout[1] | (pout[1] & c8);
	gp8 gp8_mid2(
		.gin(g[23:16]),
		.pin(p[23:16]),
		.cin(carry[16]),
		.gout(gout[2]),
		.pout(pout[2]),
		.cout(carry[23:17])
	);
	assign c24 = gout[2] | (pout[2] & c16);
	gp8 gp8_high(
		.gin(g[31:24]),
		.pin(p[31:24]),
		.cin(c24),
		.gout(gout[3]),
		.pout(pout[3]),
		.cout(carry[31:25])
	);
	assign carry[0] = cin;
	assign carry[8] = c8;
	assign carry[16] = c16;
	assign carry[24] = c24;
	generate
		for (_gv_i_2 = 0; _gv_i_2 < 32; _gv_i_2 = _gv_i_2 + 1) begin : sum_loop
			localparam i = _gv_i_2;
			assign sum[i] = (a[i] ^ b[i]) ^ carry[i];
		end
	endgenerate
endmodule
module RegFile (
	rd,
	rd_data,
	rs1,
	rs1_data,
	rs2,
	rs2_data,
	clk,
	we,
	rst
);
	input wire [4:0] rd;
	input wire [31:0] rd_data;
	input wire [4:0] rs1;
	output wire [31:0] rs1_data;
	input wire [4:0] rs2;
	output wire [31:0] rs2_data;
	input wire clk;
	input wire we;
	input wire rst;
	localparam signed [31:0] NumRegs = 32;
	reg [31:0] regs [0:31];
	assign rs1_data = regs[rs1];
	assign rs2_data = regs[rs2];
	always @(posedge clk)
		if (rst) begin : sv2v_autoblock_1
			reg signed [31:0] i;
			for (i = 0; i < NumRegs; i = i + 1)
				regs[i] <= 0;
		end
		else if (we && (rd != 0))
			regs[rd] <= rd_data;
endmodule
module DatapathSingleCycle (
	clk,
	rst,
	halt,
	pc_to_imem,
	insn_from_imem,
	addr_to_dmem,
	load_data_from_dmem,
	store_data_to_dmem,
	store_we_to_dmem
);
	reg _sv2v_0;
	input wire clk;
	input wire rst;
	output reg halt;
	output wire [31:0] pc_to_imem;
	input wire [31:0] insn_from_imem;
	output wire [31:0] addr_to_dmem;
	input wire [31:0] load_data_from_dmem;
	output wire [31:0] store_data_to_dmem;
	output wire [3:0] store_we_to_dmem;
	wire [6:0] insn_funct7;
	wire [4:0] insn_rs2;
	wire [4:0] insn_rs1;
	wire [2:0] insn_funct3;
	wire [4:0] insn_rd;
	wire [6:0] insn_opcode;
	assign {insn_funct7, insn_rs2, insn_rs1, insn_funct3, insn_rd, insn_opcode} = insn_from_imem;
	wire [11:0] imm_i;
	assign imm_i = insn_from_imem[31:20];
	wire [4:0] imm_shamt = insn_from_imem[24:20];
	wire [11:0] imm_s;
	assign imm_s[11:5] = insn_funct7;
	assign imm_s[4:0] = insn_rd;
	wire [12:0] imm_b;
	assign {imm_b[12], imm_b[10:5]} = insn_funct7;
	assign {imm_b[4:1], imm_b[11]} = insn_rd;
	assign imm_b[0] = 1'b0;
	wire [20:0] imm_j;
	assign {imm_j[20], imm_j[10:1], imm_j[11], imm_j[19:12], imm_j[0]} = {insn_from_imem[31:12], 1'b0};
	wire [31:0] imm_i_sext = {{20 {imm_i[11]}}, imm_i[11:0]};
	wire [31:0] imm_s_sext = {{20 {imm_s[11]}}, imm_s[11:0]};
	wire [31:0] imm_b_sext = {{19 {imm_b[12]}}, imm_b[12:0]};
	wire [31:0] imm_j_sext = {{11 {imm_j[20]}}, imm_j[20:0]};
	localparam [6:0] OpLoad = 7'b0000011;
	localparam [6:0] OpStore = 7'b0100011;
	localparam [6:0] OpBranch = 7'b1100011;
	localparam [6:0] OpJalr = 7'b1100111;
	localparam [6:0] OpMiscMem = 7'b0001111;
	localparam [6:0] OpJal = 7'b1101111;
	localparam [6:0] OpRegImm = 7'b0010011;
	localparam [6:0] OpRegReg = 7'b0110011;
	localparam [6:0] OpEnviron = 7'b1110011;
	localparam [6:0] OpAuipc = 7'b0010111;
	localparam [6:0] OpLui = 7'b0110111;
	wire insn_lui = insn_opcode == OpLui;
	wire insn_auipc = insn_opcode == OpAuipc;
	wire insn_jal = insn_opcode == OpJal;
	wire insn_jalr = insn_opcode == OpJalr;
	wire insn_beq = (insn_opcode == OpBranch) && (insn_from_imem[14:12] == 3'b000);
	wire insn_bne = (insn_opcode == OpBranch) && (insn_from_imem[14:12] == 3'b001);
	wire insn_blt = (insn_opcode == OpBranch) && (insn_from_imem[14:12] == 3'b100);
	wire insn_bge = (insn_opcode == OpBranch) && (insn_from_imem[14:12] == 3'b101);
	wire insn_bltu = (insn_opcode == OpBranch) && (insn_from_imem[14:12] == 3'b110);
	wire insn_bgeu = (insn_opcode == OpBranch) && (insn_from_imem[14:12] == 3'b111);
	wire insn_lb = (insn_opcode == OpLoad) && (insn_from_imem[14:12] == 3'b000);
	wire insn_lh = (insn_opcode == OpLoad) && (insn_from_imem[14:12] == 3'b001);
	wire insn_lw = (insn_opcode == OpLoad) && (insn_from_imem[14:12] == 3'b010);
	wire insn_lbu = (insn_opcode == OpLoad) && (insn_from_imem[14:12] == 3'b100);
	wire insn_lhu = (insn_opcode == OpLoad) && (insn_from_imem[14:12] == 3'b101);
	wire insn_sb = (insn_opcode == OpStore) && (insn_from_imem[14:12] == 3'b000);
	wire insn_sh = (insn_opcode == OpStore) && (insn_from_imem[14:12] == 3'b001);
	wire insn_sw = (insn_opcode == OpStore) && (insn_from_imem[14:12] == 3'b010);
	wire insn_addi = (insn_opcode == OpRegImm) && (insn_from_imem[14:12] == 3'b000);
	wire insn_slti = (insn_opcode == OpRegImm) && (insn_from_imem[14:12] == 3'b010);
	wire insn_sltiu = (insn_opcode == OpRegImm) && (insn_from_imem[14:12] == 3'b011);
	wire insn_xori = (insn_opcode == OpRegImm) && (insn_from_imem[14:12] == 3'b100);
	wire insn_ori = (insn_opcode == OpRegImm) && (insn_from_imem[14:12] == 3'b110);
	wire insn_andi = (insn_opcode == OpRegImm) && (insn_from_imem[14:12] == 3'b111);
	wire insn_slli = ((insn_opcode == OpRegImm) && (insn_from_imem[14:12] == 3'b001)) && (insn_from_imem[31:25] == 7'd0);
	wire insn_srli = ((insn_opcode == OpRegImm) && (insn_from_imem[14:12] == 3'b101)) && (insn_from_imem[31:25] == 7'd0);
	wire insn_srai = ((insn_opcode == OpRegImm) && (insn_from_imem[14:12] == 3'b101)) && (insn_from_imem[31:25] == 7'b0100000);
	wire insn_add = ((insn_opcode == OpRegReg) && (insn_from_imem[14:12] == 3'b000)) && (insn_from_imem[31:25] == 7'd0);
	wire insn_sub = ((insn_opcode == OpRegReg) && (insn_from_imem[14:12] == 3'b000)) && (insn_from_imem[31:25] == 7'b0100000);
	wire insn_sll = ((insn_opcode == OpRegReg) && (insn_from_imem[14:12] == 3'b001)) && (insn_from_imem[31:25] == 7'd0);
	wire insn_slt = ((insn_opcode == OpRegReg) && (insn_from_imem[14:12] == 3'b010)) && (insn_from_imem[31:25] == 7'd0);
	wire insn_sltu = ((insn_opcode == OpRegReg) && (insn_from_imem[14:12] == 3'b011)) && (insn_from_imem[31:25] == 7'd0);
	wire insn_xor = ((insn_opcode == OpRegReg) && (insn_from_imem[14:12] == 3'b100)) && (insn_from_imem[31:25] == 7'd0);
	wire insn_srl = ((insn_opcode == OpRegReg) && (insn_from_imem[14:12] == 3'b101)) && (insn_from_imem[31:25] == 7'd0);
	wire insn_sra = ((insn_opcode == OpRegReg) && (insn_from_imem[14:12] == 3'b101)) && (insn_from_imem[31:25] == 7'b0100000);
	wire insn_or = ((insn_opcode == OpRegReg) && (insn_from_imem[14:12] == 3'b110)) && (insn_from_imem[31:25] == 7'd0);
	wire insn_and = ((insn_opcode == OpRegReg) && (insn_from_imem[14:12] == 3'b111)) && (insn_from_imem[31:25] == 7'd0);
	wire insn_mul = ((insn_opcode == OpRegReg) && (insn_from_imem[31:25] == 7'd1)) && (insn_from_imem[14:12] == 3'b000);
	wire insn_mulh = ((insn_opcode == OpRegReg) && (insn_from_imem[31:25] == 7'd1)) && (insn_from_imem[14:12] == 3'b001);
	wire insn_mulhsu = ((insn_opcode == OpRegReg) && (insn_from_imem[31:25] == 7'd1)) && (insn_from_imem[14:12] == 3'b010);
	wire insn_mulhu = ((insn_opcode == OpRegReg) && (insn_from_imem[31:25] == 7'd1)) && (insn_from_imem[14:12] == 3'b011);
	wire insn_div = ((insn_opcode == OpRegReg) && (insn_from_imem[31:25] == 7'd1)) && (insn_from_imem[14:12] == 3'b100);
	wire insn_divu = ((insn_opcode == OpRegReg) && (insn_from_imem[31:25] == 7'd1)) && (insn_from_imem[14:12] == 3'b101);
	wire insn_rem = ((insn_opcode == OpRegReg) && (insn_from_imem[31:25] == 7'd1)) && (insn_from_imem[14:12] == 3'b110);
	wire insn_remu = ((insn_opcode == OpRegReg) && (insn_from_imem[31:25] == 7'd1)) && (insn_from_imem[14:12] == 3'b111);
	wire insn_ecall = (insn_opcode == OpEnviron) && (insn_from_imem[31:7] == 25'd0);
	wire insn_fence = insn_opcode == OpMiscMem;
	reg [31:0] pcNext;
	reg [31:0] pcCurrent;
	reg branch_decision;
	always @(*) begin
		if (_sv2v_0)
			;
		if (branch_decision)
			pcNext = pcCurrent + imm_b_sext;
		else
			pcNext = pcCurrent + 32'h00000004;
	end
	always @(posedge clk)
		if (rst)
			pcCurrent <= 32'd0;
		else
			pcCurrent <= pcNext;
	assign pc_to_imem = pcCurrent;
	reg [31:0] cycles_current;
	reg [31:0] num_insns_current;
	always @(posedge clk)
		if (rst) begin
			cycles_current <= 0;
			num_insns_current <= 0;
		end
		else begin
			cycles_current <= cycles_current + 1;
			if (!rst)
				num_insns_current <= num_insns_current + 1;
		end
	wire [31:0] rs1_data;
	wire [31:0] rs2_data;
	reg [31:0] data_reg_write;
	reg enable_reg_write;
	RegFile rf(
		.clk(clk),
		.rst(rst),
		.we(enable_reg_write),
		.rd(insn_rd),
		.rd_data(data_reg_write),
		.rs1(insn_rs1),
		.rs2(insn_rs2),
		.rs1_data(rs1_data),
		.rs2_data(rs2_data)
	);
	reg illegal_insn;
	wire [31:0] cla_result;
	cla adder(
		.a(rs1_data),
		.b(imm_i_sext),
		.cin(1'b0),
		.sum(cla_result)
	);
	wire [31:0] cla_result_reg;
	cla adder_reg(
		.a(rs1_data),
		.b(rs2_data),
		.cin(1'b0),
		.sum(cla_result_reg)
	);
	wire [31:0] cla_result_reg2;
	cla subber_reg(
		.a(rs1_data),
		.b(~rs2_data + 32'b00000000000000000000000000000001),
		.cin(1'b0),
		.sum(cla_result_reg2)
	);
	wire eq_condition = rs1_data == rs2_data;
	wire neq_condition = rs1_data != rs2_data;
	wire lt_signed = $signed(rs1_data) < $signed(rs2_data);
	wire ge_signed = $signed(rs1_data) >= $signed(rs2_data);
	wire lt_unsigned = rs1_data < rs2_data;
	wire ge_unsigned = rs1_data >= rs2_data;
	always @(*) begin
		if (_sv2v_0)
			;
		if (insn_ecall)
			halt = 1'b1;
		else
			halt = 1'b0;
		illegal_insn = 1'b0;
		enable_reg_write = 1'b0;
		data_reg_write = 32'b00000000000000000000000000000000;
		branch_decision = 1'b0;
		case (insn_opcode)
			OpLui: begin
				enable_reg_write = 1'b1;
				data_reg_write = {insn_from_imem[31:12], 12'b000000000000};
			end
			OpRegImm:
				case (insn_from_imem[14:12])
					3'b000: begin
						enable_reg_write = 1'b1;
						data_reg_write = cla_result;
					end
					3'b010: begin
						enable_reg_write = 1'b1;
						data_reg_write = ($signed(rs1_data) < $signed(imm_i_sext) ? 32'b00000000000000000000000000000001 : 32'b00000000000000000000000000000000);
					end
					3'b011: begin
						enable_reg_write = 1'b1;
						data_reg_write = (rs1_data < imm_i_sext ? 32'b00000000000000000000000000000001 : 32'b00000000000000000000000000000000);
					end
					3'b100: begin
						enable_reg_write = 1'b1;
						data_reg_write = rs1_data ^ imm_i_sext;
					end
					3'b110: begin
						enable_reg_write = 1'b1;
						data_reg_write = rs1_data | imm_i_sext;
					end
					3'b111: begin
						enable_reg_write = 1'b1;
						data_reg_write = rs1_data & imm_i_sext;
					end
					3'b001:
						if (insn_from_imem[31:25] == 7'd0) begin
							enable_reg_write = 1'b1;
							data_reg_write = rs1_data << imm_shamt;
						end
						else
							illegal_insn = 1'b1;
					3'b101:
						if (insn_from_imem[31:25] == 7'd0) begin
							enable_reg_write = 1'b1;
							data_reg_write = rs1_data >> imm_shamt;
						end
						else if (insn_from_imem[31:25] == 7'b0100000) begin
							enable_reg_write = 1'b1;
							data_reg_write = $signed(rs1_data) >>> imm_shamt;
						end
						else
							illegal_insn = 1'b1;
					default: illegal_insn = 1'b1;
				endcase
			OpRegReg:
				case (insn_from_imem[14:12])
					3'b000:
						if (insn_from_imem[31:25] == 7'd0) begin
							enable_reg_write = 1'b1;
							data_reg_write = cla_result_reg;
						end
						else if (insn_from_imem[31:25] == 7'b0100000) begin
							enable_reg_write = 1'b1;
							data_reg_write = cla_result_reg2;
						end
						else
							illegal_insn = 1'b1;
					3'b001:
						if (insn_from_imem[31:25] == 7'd0) begin
							enable_reg_write = 1'b1;
							data_reg_write = rs1_data << rs2_data[4:0];
						end
						else if (insn_from_imem[31:25] == 7'd1)
							illegal_insn = 1'b1;
						else
							illegal_insn = 1'b1;
					3'b010:
						if (insn_from_imem[31:25] == 7'd0) begin
							enable_reg_write = 1'b1;
							data_reg_write = ($signed(rs1_data) < $signed(rs2_data) ? 32'd1 : 32'd0);
						end
						else if (insn_from_imem[31:25] == 7'd1)
							illegal_insn = 1'b1;
						else
							illegal_insn = 1'b1;
					3'b011:
						if (insn_from_imem[31:25] == 7'd0) begin
							enable_reg_write = 1'b1;
							data_reg_write = (rs1_data < rs2_data ? 32'd1 : 32'd0);
						end
						else if (insn_from_imem[31:25] == 7'd1)
							illegal_insn = 1'b1;
						else
							illegal_insn = 1'b1;
					3'b100:
						if (insn_from_imem[31:25] == 7'd0) begin
							enable_reg_write = 1'b1;
							data_reg_write = rs1_data ^ rs2_data;
						end
						else if (insn_from_imem[31:25] == 7'd1)
							illegal_insn = 1'b1;
						else
							illegal_insn = 1'b1;
					3'b101:
						if (insn_from_imem[31:25] == 7'd0) begin
							enable_reg_write = 1'b1;
							data_reg_write = rs1_data >> rs2_data[4:0];
						end
						else if (insn_from_imem[31:25] == 7'b0100000) begin
							enable_reg_write = 1'b1;
							data_reg_write = $signed(rs1_data) >>> rs2_data[4:0];
						end
						else
							illegal_insn = 1'b1;
					3'b110:
						if (insn_from_imem[31:25] == 7'd0) begin
							enable_reg_write = 1'b1;
							data_reg_write = rs1_data | rs2_data;
						end
						else if (insn_from_imem[31:25] == 7'd1)
							illegal_insn = 1'b1;
						else
							illegal_insn = 1'b1;
					3'b111:
						if (insn_from_imem[31:25] == 7'd0) begin
							enable_reg_write = 1'b1;
							data_reg_write = rs1_data & rs2_data;
						end
						else if (insn_from_imem[31:25] == 7'd1)
							illegal_insn = 1'b1;
						else
							illegal_insn = 1'b1;
					default: illegal_insn = 1'b1;
				endcase
			OpBranch:
				case (insn_from_imem[14:12])
					3'b000: branch_decision = eq_condition;
					3'b001: branch_decision = neq_condition;
					3'b100: branch_decision = lt_signed;
					3'b101: branch_decision = ge_signed;
					3'b110: branch_decision = lt_unsigned;
					3'b111: branch_decision = ge_unsigned;
					default: branch_decision = 1'b0;
				endcase
			default: illegal_insn = 1'b1;
		endcase
	end
	initial _sv2v_0 = 0;
endmodule
module MemorySingleCycle (
	rst,
	clock_mem,
	pc_to_imem,
	insn_from_imem,
	addr_to_dmem,
	load_data_from_dmem,
	store_data_to_dmem,
	store_we_to_dmem
);
	reg _sv2v_0;
	parameter signed [31:0] NUM_WORDS = 512;
	input wire rst;
	input wire clock_mem;
	input wire [31:0] pc_to_imem;
	output reg [31:0] insn_from_imem;
	input wire [31:0] addr_to_dmem;
	output reg [31:0] load_data_from_dmem;
	input wire [31:0] store_data_to_dmem;
	input wire [3:0] store_we_to_dmem;
	reg [31:0] mem_array [0:NUM_WORDS - 1];
	initial $readmemh("mem_initial_contents.hex", mem_array);
	always @(*)
		if (_sv2v_0)
			;
	localparam signed [31:0] AddrMsb = $clog2(NUM_WORDS) + 1;
	localparam signed [31:0] AddrLsb = 2;
	always @(posedge clock_mem)
		if (rst)
			;
		else
			insn_from_imem <= mem_array[{pc_to_imem[AddrMsb:AddrLsb]}];
	always @(negedge clock_mem)
		if (rst)
			;
		else begin
			if (store_we_to_dmem[0])
				mem_array[addr_to_dmem[AddrMsb:AddrLsb]][7:0] <= store_data_to_dmem[7:0];
			if (store_we_to_dmem[1])
				mem_array[addr_to_dmem[AddrMsb:AddrLsb]][15:8] <= store_data_to_dmem[15:8];
			if (store_we_to_dmem[2])
				mem_array[addr_to_dmem[AddrMsb:AddrLsb]][23:16] <= store_data_to_dmem[23:16];
			if (store_we_to_dmem[3])
				mem_array[addr_to_dmem[AddrMsb:AddrLsb]][31:24] <= store_data_to_dmem[31:24];
			load_data_from_dmem <= mem_array[{addr_to_dmem[AddrMsb:AddrLsb]}];
		end
	initial _sv2v_0 = 0;
endmodule
`default_nettype none
module SystemResourceCheck (
	external_clk_25MHz,
	btn,
	led
);
	input wire external_clk_25MHz;
	input wire [6:0] btn;
	output wire [7:0] led;
	wire clk_proc;
	wire clk_mem;
	wire clk_locked;
	MyClockGen clock_gen(
		.input_clk_25MHz(external_clk_25MHz),
		.clk_proc(clk_proc),
		.clk_mem(clk_mem),
		.locked(clk_locked)
	);
	wire [31:0] pc_to_imem;
	wire [31:0] insn_from_imem;
	wire [31:0] mem_data_addr;
	wire [31:0] mem_data_loaded_value;
	wire [31:0] mem_data_to_write;
	wire [3:0] mem_data_we;
	MemorySingleCycle #(.NUM_WORDS(128)) memory(
		.rst(!clk_locked),
		.clock_mem(clk_mem),
		.pc_to_imem(pc_to_imem),
		.insn_from_imem(insn_from_imem),
		.addr_to_dmem(mem_data_addr),
		.load_data_from_dmem(mem_data_loaded_value),
		.store_data_to_dmem(mem_data_to_write),
		.store_we_to_dmem(mem_data_we)
	);
	DatapathSingleCycle datapath(
		.clk(clk_proc),
		.rst(!clk_locked),
		.pc_to_imem(pc_to_imem),
		.insn_from_imem(insn_from_imem),
		.addr_to_dmem(mem_data_addr),
		.store_data_to_dmem(mem_data_to_write),
		.store_we_to_dmem(mem_data_we),
		.load_data_from_dmem(mem_data_loaded_value),
		.halt(led[0])
	);
endmodule