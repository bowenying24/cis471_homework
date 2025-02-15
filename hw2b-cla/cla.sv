`timescale 1ns / 1ps

/**
 * @param a first 1-bit input
 * @param b second 1-bit input
 * @param g whether a and b generate a carry
 * @param p whether a and b would propagate an incoming carry
 */
module gp1(input wire a, b,
           output wire g, p);
   assign g = a & b;
   assign p = a | b;
endmodule

/**
 * Computes aggregate generate/propagate signals over a 4-bit window.
 * @param gin incoming generate signals
 * @param pin incoming propagate signals
 * @param cin the incoming carry
 * @param gout whether these 4 bits internally would generate a carry-out (independent of cin)
 * @param pout whether these 4 bits internally would propagate an incoming carry from cin
 * @param cout the carry outs for the low-order 3 bits
 */
module gp4(input wire [3:0] gin, pin,
           input wire cin,
           output wire gout, pout,
           output wire [2:0] cout);

   // TODO: your code here

   assign cout[0] = gin[0] | (pin[0] & cin);
   assign cout[1] = gin[1] | (pin[1] & gin[0]) | (pin[1] & pin[0] & cin);
   assign cout[2] = gin[2] | (pin[2] & gin[1]) | (pin[2] & pin[1] & gin[0]) | (pin[2] & pin[1] & pin[0] & cin);

   assign gout = gin[3] | (pin[3] & gin[2]) | (pin[3] & pin[2] & gin[1]) | (pin[3] & pin[2] & pin[1] & gin[0]);
   assign pout = &pin; 


endmodule

/** Same as gp4 but for an 8-bit window instead */
module gp8(input wire [7:0] gin, pin,
           input wire cin,
           output wire gout, pout,
           output wire [6:0] cout);

   // TODO: your code here

    wire g_lower, p_lower, g_upper, p_upper;
    wire c_mid;

    gp4 gp_segment_low (
        .gin(gin[3:0]), .pin(pin[3:0]), .cin(cin),
        .gout(g_lower), .pout(p_lower), .cout(cout[2:0])
    );

    gp4 gp_segment_high (
        .gin(gin[7:4]), .pin(pin[7:4]), .cin(c_mid),
        .gout(g_upper), .pout(p_upper), .cout(cout[6:4])
    );

   assign c_mid = g_lower | (p_lower & cin);
   assign cout[3] = c_mid;
   assign gout = g_upper | (p_upper & g_lower);
   assign pout = p_upper & p_lower;





endmodule

module cla
  (input wire [31:0]  a, b,
   input wire         cin,
   output wire [31:0] sum);

   // TODO: your code here

   wire [31:0] g, p;     
   wire [31:0] carry;
   wire [3:0] gout, pout;   
   wire c8, c16, c24;       

    genvar i;
    generate
        for (i = 0; i < 32; i = i + 1) begin : gp1_loop
            gp1 gp_inst(
                .a(a[i]), 
                .b(b[i]), 
                .g(g[i]), 
                .p(p[i])
            );
        end
    endgenerate

    gp8 gp8_low (
        .gin(g[7:0]), .pin(p[7:0]), .cin(cin),
        .gout(gout[0]), .pout(pout[0]), .cout(carry[7:1]) 
    );

    assign c8 = gout[0] | (pout[0] & cin);
    gp8 gp8_mid1 (
        .gin(g[15:8]), .pin(p[15:8]), .cin(c8),
        .gout(gout[1]), .pout(pout[1]), .cout(carry[15:9])
    );

    assign c16 = gout[1] | (pout[1] & c8);
    gp8 gp8_mid2 (
        .gin(g[23:16]), .pin(p[23:16]), .cin(carry[16]),
        .gout(gout[2]), .pout(pout[2]), .cout(carry[23:17])
    );

    assign c24 = gout[2] | (pout[2] & c16);
    gp8 gp8_high (
        .gin(g[31:24]), .pin(p[31:24]), .cin(c24),
        .gout(gout[3]), .pout(pout[3]), .cout(carry[31:25])
    );
   
    assign carry[0] = cin;
    assign carry[8] = c8;
    assign carry[16] = c16;
    assign carry[24] = c24;

    generate
        for (i = 0; i < 32; i = i + 1) begin : sum_loop
            assign sum[i] = a[i] ^ b[i] ^ carry[i];  
        end
    endgenerate


endmodule
