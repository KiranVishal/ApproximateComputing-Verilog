`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   00:07:25 10/10/2015
// Design Name:   Control_SM
// Module Name:   E:/Yoshi/Documents/Dropbox/SchoolWork/Boston/EC551/Lab3/Control_SM_Test.v
// Project Name:  Lab3
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Control_SM
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Control_SM_Test;

	// Inputs
	reg [5:0] OP_Code;
	reg clk;
	reg reset;

	// Outputs
	wire MemRead;
	wire MemWrite;
	wire PC_Reg_Write;
	wire PC_Reg_Write_BEQ;
	wire Instruction_Reg_Write;
	wire Memory_Data_Reg_Write;
	wire A_Reg_Write;
	wire B_Reg_Write;
	wire ALU_Op_Reg_Write;
	wire Register_File_Write;
	wire IorD_Mux_Select;
	wire Write_Data_Mux_Select;
	wire ALU_A_Mux_Select;
	wire [1:0] ALU_B_Mux_Select;
	wire [1:0] PC_Source_Mux_Select;

	// Instantiate the Unit Under Test (UUT)
	Control_SM uut (
		.OP_Code(OP_Code), 
		.MemRead(MemRead), 
		.MemWrite(MemWrite), 
		.PC_Reg_Write(PC_Reg_Write), 
		.PC_Reg_Write_BEQ(PC_Reg_Write_BEQ), 
		.Instruction_Reg_Write(Instruction_Reg_Write), 
		.Memory_Data_Reg_Write(Memory_Data_Reg_Write), 
		.A_Reg_Write(A_Reg_Write), 
		.B_Reg_Write(B_Reg_Write), 
		.ALU_Op_Reg_Write(ALU_Op_Reg_Write), 
		.Register_File_Write(Register_File_Write), 
		.IorD_Mux_Select(IorD_Mux_Select), 
		.Write_Data_Mux_Select(Write_Data_Mux_Select), 
		.ALU_A_Mux_Select(ALU_A_Mux_Select), 
		.ALU_B_Mux_Select(ALU_B_Mux_Select), 
		.PC_Source_Mux_Select(PC_Source_Mux_Select), 
		.clk(clk), 
		.reset(reset)
	);

	always
	#5 clk = ~clk;

	initial begin
		// Initialize Inputs
		OP_Code = 0;
		clk = 0;
		reset = 0;

		#5 reset = 1;
		#10 reset = 0;
		
		OP_Code = 6'h12;
		
		#20;
		
		OP_Code = 6'h3B;
		
		#40;
		
		OP_Code = 6'h3C;
		
		#200;
		$finish;

	end
      
endmodule

