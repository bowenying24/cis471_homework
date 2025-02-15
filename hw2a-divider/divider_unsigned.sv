
/* JONATHAN HONG (johon), BOWEN YING (bying24) */

`timescale 1ns / 1ns

// quotient = dividend / divisor

module divider_unsigned (
    input  wire [31:0] i_dividend,
    input  wire [31:0] i_divisor,
    output wire [31:0] o_remainder,
    output wire [31:0] o_quotient
);

    int unsigned dividend_output [32];
    int unsigned remainder_output [32];
    int unsigned quotient_output [32];

    generate
        for (genvar i = 0; i < 32; i++) begin : gen_divu1_iters
            if (i == 0) begin : first_iter
                divu_1iter d (
                    .i_dividend(i_dividend),
                    .i_divisor(i_divisor),
                    .i_remainder(0),
                    .i_quotient(0),
                    .o_dividend(dividend_output[i]),
                    .o_remainder(remainder_output[i]),
                    .o_quotient(quotient_output[i])
                );
            end else begin : next_iters
                divu_1iter d (
                    .i_dividend(dividend_output[i - 1]),
                    .i_divisor(i_divisor),
                    .i_remainder(remainder_output[i - 1]),
                    .i_quotient(quotient_output[i - 1]),
                    .o_dividend(dividend_output[i]),
                    .o_remainder(remainder_output[i]),
                    .o_quotient(quotient_output[i])
                );
            end
        end
    endgenerate

    assign o_remainder = remainder_output[31];
    assign o_quotient = quotient_output[31];

endmodule


module divu_1iter (
    input  wire [31:0] i_dividend,
    input  wire [31:0] i_divisor,
    input  wire [31:0] i_remainder,
    input  wire [31:0] i_quotient,
    output wire [31:0] o_dividend,
    output wire [31:0] o_remainder,
    output wire [31:0] o_quotient
);
  /*
    for (int i = 0; i < 32; i++) {
        remainder = (remainder << 1) | ((dividend >> 31) & 0x1);
        if (remainder < divisor) {
            quotient = (quotient << 1);
        } else {
            quotient = (quotient << 1) | 0x1;
            remainder = remainder - divisor;
        }
        dividend = dividend << 1;
    }
    */

    int unsigned remainder_tmp;
    int unsigned o_quotient_tmp;
    int unsigned o_remainder_tmp;
    int unsigned o_dividend_tmp;

    assign o_dividend = o_dividend_tmp;
    assign o_remainder = o_remainder_tmp;
    assign o_quotient = o_quotient_tmp;

    always_comb begin

        remainder_tmp = (i_remainder << 1) | ((i_dividend >> 31) & 1);
        if (remainder_tmp < i_divisor) begin
            o_quotient_tmp = (i_quotient << 1);
            o_remainder_tmp = remainder_tmp;
        end else begin
            o_quotient_tmp = (i_quotient << 1) | 1;
            o_remainder_tmp = remainder_tmp - i_divisor;
        end

        o_dividend_tmp = i_dividend << 1;

    end

endmodule
