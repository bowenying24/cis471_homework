// diamond 3.7 accepts this PLL
// diamond 3.8-3.9 is untested
// diamond 3.10 or higher is likely to abort with error about unable to use feedback signal
// cause of this could be from wrong CPHASE/FPHASE parameters
module MyClockGen
(
    input input_clk_25MHz, // 25 MHz, 0 deg
    output clk_proc, // 4.16667 MHz, 0 deg
    output clk_mem, // 4.01003 MHz, 90 deg
    output locked
);
wire clkfb;
(* FREQUENCY_PIN_CLKI="25" *)
(* FREQUENCY_PIN_CLKOP="4.16667" *)
(* FREQUENCY_PIN_CLKOS="4.01003" *)
(* ICP_CURRENT="12" *) (* LPF_RESISTOR="8" *) (* MFG_ENABLE_FILTEROPAMP="1" *) (* MFG_GMCREF_SEL="2" *)
EHXPLLL #(
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
    ) pll_i (
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
