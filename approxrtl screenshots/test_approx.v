`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:27:43 04/19/2016
// Design Name:   approx_mul
// Module Name:   X:/EC772/approx/test_approx.v
// Project Name:  approx
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: approx_mul
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_approx;

	// Inputs
	reg clk;
	reg reset;
	reg [15:0] in_a;
	reg [15:0] in_b;

	// Outputs
	wire [4:0] shift_a;
	wire [4:0] shift_b;
	wire [15:0] out_A;
	wire [15:0] out_B;

	// Instantiate the Unit Under Test (UUT)
	approx_mul uut (
		.clk(clk), 
		.reset(reset), 
		.in_a(in_a), 
		.in_b(in_b), 
		.shift_a(shift_a), 
		.shift_b(shift_b), 
		.out_A(out_A), 
		.out_B(out_B)
	);

	always #5 clk = ~clk;

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 0;
		in_a = 0;
		in_b = 0;
		
		#10
		in_a = 16'b0001111111111111;
		in_b = 16'b1111111111111111;

		// Wait 100 ns for global reset to finish
		#10 $finish;
        
		// Add stimulus here

	end
      
      
endmodule

