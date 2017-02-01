`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:00:05 04/19/2016 
// Design Name: team CPU
// Module Name:    approx_mul 
// Project Name: 772 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////

//Approximate computation algorithm for Multiplication:

module approx_mul(clk, reset, in_a, in_b, shift_a, shift_b, shift_A, shift_B, out_A, out_B);

input clk, reset;
input [15:0] in_a, in_b;

output [15:0] out_A, out_B;
reg [15:0] out_A, out_B;
output [4:0] shift_a, shift_b;
reg [4:0] shift_a,shift_b;
output [4:0] shift_A, shift_B;
reg [4:0] shift_A, shift_B; 
reg [4:0] shifta,shiftb;
always@(posedge clk)
	begin

//getting the length of input A
	if (reset)
		begin
		out_A = 0;
		out_B = 0;
		end
	else 
	begin
		if(in_a[15] == 1'b1)
			shift_a = 5'd16;
		else if (in_a[14] == 1'b1)	
			shift_a = 5'd15;
		else if (in_a[13] == 1'b1)	
			shift_a = 5'd14;
		else if (in_a[12] == 1'b1)	
			shift_a = 5'd13;
		else if (in_a[11] == 1'b1)	
			shift_a = 5'd12;
		else if (in_a[10] == 1'b1)	
			shift_a = 5'd11;
		else if (in_a[9] == 1'b1)	
			shift_a = 5'd10;
		else if (in_a[8] == 1'b1)	
			shift_a = 5'd9;
		else if (in_a[7] == 1'b1)	
			shift_a = 5'd8;
		else if (in_a[6] == 1'b1)	
			shift_a = 5'd7;
		else if (in_a[5] == 1'b1)	
			shift_a = 5'd6;
		else if (in_a[4] == 1'b1)	
			shift_a = 5'd5;
		else if (in_a[3] == 1'b1)	
			shift_a = 5'd4;
		else if (in_a[2] == 1'b1)	
			shift_a = 5'd3;
		else if (in_a[1] == 1'b1)	
			shift_a = 5'd2;
		else if (in_a[0] == 1'b1)	
			shift_a = 5'd1;
		else
			shift_a = 5'd0;
			
//getting the length of input B

		if(in_b[15] == 1'b1)
			shift_b = 5'd16;
		else if (in_b[14] == 1'b1)	
			shift_b = 5'd15;
		else if (in_b[13] == 1'b1)	
			shift_b = 5'd14;
		else if (in_b[12] == 1'b1)	
			shift_b = 5'd13;
		else if (in_b[11] == 1'b1)	
			shift_b = 5'd12;
		else if (in_b[10] == 1'b1)	
			shift_b = 5'd11;
		else if (in_b[9] == 1'b1)	
			shift_b = 5'd10;
		else if (in_b[8] == 1'b1)	
			shift_b = 5'd9;
		else if (in_b[7] == 1'b1)	
			shift_b = 5'd8;
		else if (in_b[6] == 1'b1)	
			shift_b = 5'd7;
		else if (in_b[5] == 1'b1)	
			shift_b = 5'd6;
		else if (in_b[4] == 1'b1)	
			shift_b = 5'd5;
		else if (in_b[3] == 1'b1)	
			shift_b = 5'd4;
		else if (in_a[2] == 1'b1)	
			shift_b = 5'd3;
		else if (in_b[1] == 1'b1)	
			shift_b = 5'd2;
		else if (in_b[0] == 1'b1)	
			shift_b = 5'd1;
		else
			shift_b = 5'd0;
			
// Shifting the bits to create new outputs			
//		shift_A = 5'd16 - shift_a;
//		shift_B = 5'd16 - shift_b;
//shift_a and shift_b have the msb 
		//finding the bits to be shifted in inputA
		case(shift_a)
			
			5'd16 : shift_A = 5'd8; // if 16 bit number drop 8 bits from the lsb
			
			5'd15 : shift_A = 5'd7;
			
			5'd14 : shift_A = 5'd6;
			
			5'd13 : shift_A = 5'd5;
			
			5'd12 : shift_A = 5'd4;
			
			5'd11 : shift_A = 5'd3;
			
			5'd10 : shift_A = 5'd2;
			
			5'd9	: shift_A = 5'd1;
			
			default : shift_A = 5'd0;
		endcase
		
		//finding the bits to be shifted in inputB
		case(shift_b)
			
			5'd16 : shift_B = 5'd8; // if 16 bit number drop 8 bits from the lsb
			
			5'd15 : shift_B = 5'd7;
			
			5'd14 : shift_B = 5'd6;
			
			5'd13 : shift_B = 5'd5;
			
			5'd12 : shift_B = 5'd4;
			
			5'd11 : shift_B = 5'd3;
			
			5'd10 : shift_B = 5'd2;
			
			5'd9	: shift_B = 5'd1;
			
			default : shift_B	= 5'd0;
		endcase
		
		
		
	end

end

always@(posedge clk)
	begin
	
	if(!reset)
	shifta = shift_A-1;
	shiftb = shift_B-1;
	out_A = in_a;
	out_B = in_b;
	out_A[5:0] = 0;
	out_B[5:0] = 0;
	
	end
endmodule
