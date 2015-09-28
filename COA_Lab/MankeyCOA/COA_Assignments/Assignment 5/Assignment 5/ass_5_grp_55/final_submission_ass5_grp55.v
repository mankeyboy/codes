`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:15:09 08/13/2015 
// Design Name: 
// Module Name:    module1 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
		module notGate(output out, input a);
				  assign   out = ~a;
			 endmodule

		module and2Gate(output out, input a, input b);
				  assign   out = a & b;
			 endmodule

		module or2Gate(output out, input a, input b);
				  assign   out = a | b;
			 endmodule
			 
		module nor2Gate(output out, input a, input b);
				  wire a1;
				  or2Gate or1(a1, a, b);
				  notGate not1(out, a1);
			 endmodule

		module and3Gate(output out, input a, input b, input c);
				  wire a1;
				  and2Gate and1(a1, a, b);
				  assign   out = a1 & c;
			 endmodule

		module or3Gate(output out, input a, input b, input c);
				  wire a1;
				  or2Gate or1(a1, a, b);
				  assign   out = a1 | c;
			 endmodule
			 
		module nor3Gate(output out, input a, input b, input c);
				  wire a1;
				  or3Gate or2(a1, a, b, c);
				  notGate not1(out, a1);
			 endmodule

		module A(output out, input x0, input x1, input x2, input x3);
				  wire     a1, a2, a3;
				  nor3Gate nor1(a1, x0, x2, x3);
				  and3Gate and2(a2, x1, x2, x3);
				  or2Gate or1(a3, a1, a2);
				  notGate not1(out, a3);
			 endmodule

		module B(output out, input x0, input x1, input x2);
				  wire a1, a2;
				  nor2Gate nor2(a1, x1, x2);
				  and2Gate and1(a2, x0, a1);
				  notGate not1(out, a2);
			 endmodule

		module C(output out, input x0, input x2, input x3);
				  wire a1, a2;
				  nor2Gate nor2(a1, x0, x2);
				  and2Gate and1(a2, x3, a1);
				  notGate not1(out, a2);
			 endmodule

		module D(output out, input x0, input x1, input x2, input x3);
			wire a1, a2, x3_rnm0, a3, a4;
			nor3Gate nor1(a1, x0, x2, x3);
			and3Gate and2(a2, x1, x2, x3);
			notGate not1(x3_rnm0, x3);
			and3Gate and3(a3, x0,x2, x3_rnm0);
			or3Gate or2(a4, a1, a2, a3);
			notGate not2(out, a4);
		endmodule

		module E(output out, input x0, input x1, input x2, input x3);
			wire a1, x0_rnm0, x3_rnm0, a3;
			notGate not1(x0_rnm0, x0);
			and3Gate and2(a1, x0_rnm0, x1, x2);
			notGate not2(x3_rnm0, x3);
			or2Gate or1(a3, x3_rnm0, a1);
			notGate not3(out, a3);
		endmodule

		module F(output out, input x0, input x1, input x2, input x3);
			wire a1, a2, a3, x2_rnm0, a4;
			notGate not1(x2_rnm0, x2);
			nor2Gate nor2(a1, x2_rnm0, x3);
			nor2Gate nor3(a2, x0, x2);
			and2Gate and1(a3, a2, x1);
			or2Gate or1(a4, a3, a1);
			notGate not2(out, a4);
		endmodule

		module G(output out, input x0, input x1, input x2, input x3);
			wire a1, a2, x3_rnm0, a3, a4;
			nor2Gate nor2(a1, x0, x1);
			nor3Gate nor3(a2, x0, x2, x3);
			notGate not1(x3_rnm0, x3);
			and3Gate and2(a3, x0, x2, x3_rnm0);
			or3Gate or2(a4, a1, a2, a3);
			notGate not2(out, a4);
		endmodule

		module black_box(output outa, output outb, output outc, output outd, output oute, output outf, output outg, input x0, input x1, input x2, input x3, output switch);
			A	oa(outa, x0, x1, x2, x3);
			B	ob(outb, x0, x1, x2);
			C	oc(outc, x0, x2, x3);
			D	od(outd, x0, x1, x2, x3);
			E	oe(oute, x0, x1, x2, x3);
			F	of(outf, x0, x1, x2, x3);
			G	og(outg, x0, x1, x2, x3);
			assign switch = 1;
		endmodule
		
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
	 