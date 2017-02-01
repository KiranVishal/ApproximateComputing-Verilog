`timescale 1ns / 1ns

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:44:34 10/12/2015
// Design Name:   Memory_File
// Module Name:   E:/Yoshi/Documents/Dropbox/SchoolWork/Boston/EC551/Lab3/Memory_File_Test.v
// Project Name:  Lab3
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Memory_File
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Memory_File_Test;

	// Inputs
	reg [31:0] ReadSelect1;
	reg [31:0] WriteSelect;
	reg [31:0] WriteData;
	reg WriteEnable;
	reg clk;
	reg reset;

	// Outputs
	wire [31:0] ReadData1;

	// Instantiate the Unit Under Test (UUT)
	Memory_File uut (
		.ReadSelect1(ReadSelect1), 
		.WriteSelect(WriteSelect), 
		.WriteData(WriteData), 
		.WriteEnable(WriteEnable), 
		.ReadData1(ReadData1), 
		.clk(clk), 
		.reset(reset)
	);
	
	always
		#5 clk = ~clk;

	initial begin
		// Initialize Inputs
		ReadSelect1 = 0;
		WriteSelect = 0;
		WriteData = 0;
		WriteEnable = 0;
		clk = 0;
		reset = 0;

		#5 reset = 1;
		#10 reset = 0;
		#20;
		ReadSelect1 = 3;
		#20;

		// Wait 100 ns for global reset to finish
		#1000;
      $finish;
		// Add stimulus here

	end
      
endmodule

