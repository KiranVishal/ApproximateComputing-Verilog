`timescale 1ns / 1ns

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:10:40 10/12/2015
// Design Name:   Multicycle_Datapath
// Module Name:   E:/Yoshi/Documents/Dropbox/SchoolWork/Boston/EC551/Lab3/Multicycle_Datapath_Test.v
// Project Name:  Lab3
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Multicycle_Datapath
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Multicycle_Datapath_Test;

	// Inputs
	reg clk;
	reg rst;
	reg start;

	wire [31:0] ALUOut, PC_out;

	// Instantiate the Unit Under Test (UUT)
	Multicycle_Datapath uut (
		.clk(clk), 
		.rst(rst),
		.start(start),
		.ALUOut(ALUOut),
		.PC_out(PC_out)
	);

	always
		#5 clk = ~clk;

	initial begin
		// Initialize Inputs
		clk = 0;
		rst = 0;

		#5 rst = 1;
		#10 rst = 0;
		start = 1;

		// Wait 100 ns for global reset to finish
		#1500;
        $finish;
		// Add stimulus here

	end
      
endmodule

