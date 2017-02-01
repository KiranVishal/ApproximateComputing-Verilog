`timescale 1ns / 1ns
//////////////////////////////////////////////////////////////////////////////////
// Engineer:		Rushi Patel 
// 
// Create Date:    16:58:00 10/13/2015 
// Design Name: 	ALU
// Module Name:     ALU 
// Project Name: 	Lab3
// Description:		ALU unit for Pipelined Datapath 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
// 		Used localparams for the ALU case options:
// 		Parameterized the Input and Output to be able to use ALU for any
// 		sized values.
//
//////////////////////////////////////////////////////////////////////////////////
module ALU(A, B, Control, Out, Zero);
parameter SIZE = 32;

// Localparams to represent ALU functions available
/*localparam NOOP = 6'h0;
localparam MOV = 6'h10, ADD = 6'h12, SUB = 6'h13, OR = 6'h14, MUL = 6'h15;
localparam BEQ = 6'h20;
localparam ADDI = 6'h32, SUBI = 6'h33, ORI = 6'h34, MULI = 6'h35;
localparam LI = 6'h39, LWI = 6'h3B, SWI = 6'h3C;*/

input [SIZE-1:0] A, B;
input [5:0] Control;
output [SIZE-1:0] Out;
reg [SIZE-1:0] Out;
output Zero;
reg Zero;

always @(A or B or Control)
begin
	case (Control)
		6'h0: Out = 0;					//NOOP do nothing
		6'h10 : Out = A;					//MOV : R1 = R2
		6'h39, 6'h3B, 6'h3C : Out = B;			//LI  : R1 = IMM
		6'h12, 6'h32 : Out = A + B;		//ADD : R1 = R2 + R3
		6'h13, 6'h20, 6'h33 : Out = A - B;	//SUB : R1 = R2 - R3
		6'h14, 6'h34  : Out = A | B;			//OR  : R1 = R2 | R3
		6'h15, 6'h35 : Out = A * B;		//MUL : R1 = R2 & R3
		default : Out = 'bx;			//Default : R1 = x
	endcase
end

// New Zero signal which activates if output is equal to zero
always @(A or B or Control)
begin
	if (Out == 0)
		Zero <= 1;
	else
		Zero <= 0;
end

endmodule
