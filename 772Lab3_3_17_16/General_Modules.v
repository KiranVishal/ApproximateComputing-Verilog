`timescale 1ns / 1ns
//////////////////////////////////////////////////////////////////////////////////
// Engineer:		Rushi Patel 
// 
// Create Date:    	17:41:14 10/13/2015 
// Design Name:		two/four input mux and DFF
// Module Name:		input2_mux, input4_mux and FFwReset
// Project Name: 	Lab3
// Description:		
// 		Verilog file containing parameterized versions of 2/4 input mux and
// 		DFF with Reset 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module input2_mux(A_0, B_1, Select, Out);
parameter SIZE = 32;
input [SIZE-1:0] A_0, B_1;
input Select;
output [SIZE-1:0] Out;

// Select = 0: Out = A_0
// Select = 1: Out = B_1
assign Out = (Select) ? B_1 : A_0;

endmodule

module input5_mux(A_0, B_1, Select, Out);
parameter SIZE = 5;
input [SIZE-1:0] A_0, B_1;
input Select;
output [SIZE-1:0] Out;

// Select = 0: Out = A_0
// Select = 1: Out = B_1
assign Out = (Select) ? B_1 : A_0;

endmodule


module input4_mux(A_0, B_1, C_2, D_3, Select, Out);
parameter SIZE = 32;
input [SIZE-1:0] A_0, B_1, C_2, D_3;
input [1:0] Select;
output [SIZE-1:0] Out;
reg [SIZE-1:0] Out;

// Select = 0: Out = A_0
// Select = 1: Out = B_1
// Select = 2: Out = C_2
// Select = 3: Out = D_3
always @(A_0 or B_1 or C_2 or D_3 or Select)
begin
	case (Select)
		0 : Out = A_0;
		1 : Out = B_1;
		2 : Out = C_2;
		3 : Out = D_3;
		default : Out = 'bx;
	endcase
end

endmodule




module FFwReset_en(In, Out, clk, reset, write_enable);
parameter SIZE = 32;
input [SIZE-1:0] In;
output [SIZE-1:0] Out;
reg [SIZE-1:0] Out;
input clk, reset, write_enable;

always @(posedge clk)
begin
	if (reset)
		Out <= 0;	// Clear output on reset
	else
	begin
		if (write_enable)
			Out <= In;	// Latch the input on clk
		else
			Out <= Out;
	end
end
endmodule
