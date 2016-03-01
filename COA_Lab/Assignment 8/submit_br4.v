//Group 55
//Mayank Roy (13CS30021


//Declation of modules to be used simply as a working black box in the Booth's Multiplier Radix 4

//16Bit CLA for adder in the multiplier design
module bit16_CLA(Cin,A,B,Cout,S);

    input [15:0] A,B;
    input Cin;
    output Cout;
    output [15:0] S;
    wire [15:0] A,B,S;
    wire [3:0] C,P,G;
    4bit_CLA a1(Cin,A[3:0],B[3:0],P[0],G[0],S[3:0]);
    4bit_CLA a2(C[0],A[7:4],B[7:4],P[1],G[1],S[7:4]);
    4bit_CLA a3(C[1],A[11:8],B[11:8],P[2],G[2],S[11:8]);
    4bit_CLA a4(C[2],A[15:12],B[15:12],P[3],G[3],S[15:12]);

    cla_unit u1(P,G,Cin,C);
endmodule

//4Bit CLA for the 16 Bit CLA
module 4bit_CLA(Cin,A,B,PG,GG,S);
    input [3:0] A,B;
    input Cin;
    output PG,GG;
    output [3:0] S;
    wire [3:0] A,B,S,P,G,C;
    full_adder_CLA a5(A[0],B[0],Cin,P[0],G[0],S[0]);
    full_adder_CLA a6(A[1],B[1],C[0],P[1],G[1],S[1]);
    full_adder_CLA a7(A[2],B[2],C[1],P[2],G[2],S[2]);
    full_adder_CLA a8(A[3],B[3],C[2],P[3],G[3],S[3]);
    
    cla_unit u2(P,G,Cin,C);
    assign PG=P[0]&P[1]&P[2]&P[3];
    assign GG=G[3]|(G[2]&P[3])|(G[1]&P[3]&P[2])|(G[0]&P[3]&P[2]&P[1]);
endmodule

//Full Adder for the 4 bit CLA
module full_adder_CLA(A,B,Cin,P,G,S);
    input A,B,Cin;
    output P,G,S;
    wire temp;
    assign temp=A^B;
    assign G=A&B;
    assign S=temp^Cin;
    assign P=temp;
endmodule

//The CLA_Unit for the Carry calculation in each of the CLA adder
module cla_unit(P[3:0],G[3:0],Cin,C[3:0]);
    input [3:0] P,G;
    input Cin;
    output [3:0] C;
    wire [3:0] P,G,C;
    assign C[0]=G[0]|(P[0]&Cin);
    assign C[1]=G[1]|(G[0]&P[1])|(P[1]&P[0]&Cin);
    assign C[2]=G[2]|(G[1]&P[2])|(P[2]&P[1]&G[0])|(P[2]&P[1]&P[0]&Cin);
    assign C[3]=G[3]|(G[2]&P[3])|(P[3]&P[2]&G[1])|(G[0]&P[2]&P[1]&P[3])|(P[3]&P[2]&P[1]&P[0]&Cin);
endmodule

//MAIN BOOTH'S MULTIPLIER RADIX4 FSM MODULE FOR USE BY THE TEST BENCH 
module boothmult_radix4(prod, done, multiplicand, multiplier, start, clk);
    //Start with the basic input, output and control lines the blackbox will have as a system
    
    output wire[15:0] prod;
    output        done;
    input [15:0]  multiplicand, multiplier;//We'll use 16 bit multiplier and multiplicand even though we're going to save the multipliplier in the 15:0 part of the 32 bit product, easier to assign
    input         start, clk;
    reg [31:0]    product;
    	
    wire[15:0] br_out;
	
    reg shift,negate,read;
    reg[3:0] count;
    reg lbit;
	
    wire cin,cout;
    assign cin=1'b0;
    //wire out_clk;
    //clk_divider new(clk, out_clk);
    bit_reg intermedite(multiplicand, shift, neg, read, clk, br_out);
    bit16_CLA adder(cin, br_out, product[29:14],cout,prod);
    
    always @(posedge clk)
        begin
        if( start ) begin
            count     = 4'b0000;
            product = {16'b0000000000000000, multiplier};
            lbit = 0;
	 end 
        else if(~count[3])
	begin
	case ( {product[1:0],lbit} )
                3'b001: begin read=1;negate=0;shift=0; end
                3'b010: begin read=1;negate=0;shift=0; end
                3'b011: begin read=1;negate=0;shift=1; end
                3'b100: begin read=1;negate=1;shift=1; end
                3'b101: begin read=1;negate=1;shift=0; end
                3'b110: begin read=1;negate=1;shift=0; end
		 default: read = 0;
            endcase
	 lbit = product[1];
            product = { product[31], product[31], product[31:2] };
	 count = count + 1;
	end
        end

endmodule
//Main booth's multiplier radix 4 module over

//TESTBENCH

`timescale 1ns / 1ps
module tb_radix4_boothmult;

	// Inputs
	reg [15:0] multiplicand;
	reg [15:0] multiplier;
	reg start;
	reg clk;

	// Outputs
	wire [15:0] prod;
	wire done;

	// Instantiate the Unit Under Test (UUT)
	boothmult_radix4 uut (
		.prod(prod), 
		.done(done), 
		.multiplicand(multiplicand), 
		.multiplier(multiplier), 
		.start(start), 
		.clk(clk)
	);

	initial begin
		// Initialize Inputs
		multiplicand = 16'b0000000000000111;
		multiplier   = 16'b0000000000000011;
		start = 1;
		clk = 0;
		#50
		start = 0;
		#500;
    end
      
	always #10 clk = ~clk;
endmodule