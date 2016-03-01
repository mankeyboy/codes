`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:24:22 08/13/2015
// Design Name:   black_box
// Module Name:   C:/Users/student/Desktop/COA_Assignments/Assignment 5/ass_5_grp_55/testbench_m1.v
// Project Name:  ass_5_grp_55
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: black_box
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module testbench_all();
        reg    x0, x1, x2, x3;
        wire   outa, outb, outc, outd, oute, outf, outg;
		  black_box bb(outa, outb,  outc,  outd,  oute,  outf,  outg,  x0,  x1,  x2,  x3);
        initial begin
            $monitor ($time," x0=%b x1=%b x2=%b x3=%b    a=%b b=%b c=%b d=%b e=%b f=%b g=%b", x0, x1, x2, x3, outa, outb, outc, outd, oute, outf, outg);
            x0 = 0; x1 = 0; x2 = 1; x3 = 1;
            #100 x0 = 0; x1 = 1; x2 = 0; x3 = 0;
            #100 x0 = 0; x1 = 1; x2 = 0; x3 = 1;
            #100 x0 = 0; x1 = 1; x2 = 1; x3 = 0;
            #100 x0 = 0; x1 = 1; x2 = 1; x3 = 1;
            #100 x0 = 1; x1 = 0; x2 = 0; x3 = 0;
            #100 x0 = 1; x1 = 0; x2 = 0; x3 = 1;
            #100 x0 = 1; x1 = 0; x2 = 1; x3 = 0;
            #100 x0 = 1; x1 = 0; x2 = 1; x3 = 1;
            #100 x0 = 1; x1 = 1; x2 = 0; x3 = 0;
        end

    endmodule
	 