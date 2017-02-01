`timescale 1ns / 1ps

`include "Control_SM.v"
`include "General_Modules.v"
`include "ALU.v"
`include "Memory_File.v"
`include "Register_File.v"

module Multicycle_Datapath(clk, rst, start, I_MEM_Write_Enable, I_MEM_Data_In, I_MEM_Write_Addr, ALUOut, PC_out);
input clk, rst, start;
input I_MEM_Write_Enable;
input [31:0] I_MEM_Data_In;
input [15:0] I_MEM_Write_Addr;
output [31:0] ALUOut, PC_out;

wire MemRead, MemWrite, PC_Reg_Write, PC_Reg_Write_BEQ, Instruction_Reg_Write, Memory_Data_Reg_Write;
wire A_Reg_Write, B_Reg_Write, ALU_Op_Reg_Write, Register_File_Write;
wire IorD_Mux_Select, Reg_File_B_Mux_Select, Write_Data_Mux_Select, ALU_A_Mux_Select, PC_Source_Mux_Select;
wire [1:0] ALU_B_Mux_Select;
wire [5:0] ALU_Opcode;

wire [31:0] PC_reg_out, PC_Source;
wire PC_reg_write_enable, Zero;
wire [15:0] Mem_Addr;
wire [31:0] Mem_Out, Mem_Data, Instr_Out;
wire [31:0] Register_Write_Data;
wire [4:0] Reg_File_B_Addr;
wire [31:0] A_D_in, A_D_out, B_D_in, B_D_out;
wire [31:0] ALU_A, ALU_B, ALU_out, ALU_reg_out;

Control_SM control(.OP_Code(Instr_Out[31:26]), 
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
	.Reg_File_B_Mux_Select(Reg_File_B_Mux_Select),
	.Write_Data_Mux_Select(Write_Data_Mux_Select), 
	.ALU_A_Mux_Select(ALU_A_Mux_Select),
	.ALU_B_Mux_Select(ALU_B_Mux_Select), 
	.PC_Source_Mux_Select(PC_Source_Mux_Select), 
	.ALU_Opcode(ALU_Opcode),
	.clk(clk), .reset(rst), .start(start));

assign PC_out = PC_reg_out;
assign ALUOut = ALU_reg_out;
assign PC_reg_write_enable = PC_Reg_Write | (PC_Reg_Write_BEQ & Zero);

FFwReset_en PC_reg(.In(PC_Source), .Out(PC_reg_out), .clk(clk), .reset(rst), 
					.write_enable(PC_reg_write_enable));

input16_mux Mem_in(.A_0(PC_reg_out), .B_1(ALU_reg_out), .Select(IorD_Mux_Select), .Out(Mem_Addr));

Memory_File memory(.Address(Mem_Addr), .WriteData(B_D_out), 
					.WriteEnable(MemWrite), .ReadData1(Mem_Out), .clk(clk), .reset(rst),
				.I_MEM_Write_Enable(I_MEM_Write_Enable), .I_MEM_Data_In(I_MEM_Data_In), 
				.I_MEM_Write_Addr(I_MEM_Write_Addr));

FFwReset_en Mem_Data_Reg(.In(Mem_Out), .Out(Mem_Data), .clk(clk), .reset(rst), 
					.write_enable(Memory_Data_Reg_Write));

FFwReset_en Instr_Reg(.In(Mem_Out), .Out(Instr_Out), .clk(clk), .reset(rst), 
					.write_enable(Instruction_Reg_Write));

input5_mux  Read_B_Select(.A_0(Instr_Out[15:11]), .B_1(Instr_Out[25:21]), 
						.Select(Reg_File_B_Mux_Select), .Out(Reg_File_B_Addr));

input2_mux Write_Data(.A_0(ALU_reg_out), .B_1(Mem_Data), .Select(Write_Data_Mux_Select), 
						.Out(Register_Write_Data));

Register_File reg_file(.ReadSelect1(Instr_Out[20:16]), .ReadSelect2(Reg_File_B_Addr), 
					.WriteSelect(Instr_Out[25:21]), .WriteData(Register_Write_Data), 
					.WriteEnable(Register_File_Write), .ReadData1(A_D_in), .ReadData2(B_D_in), 
					.clk(clk), .reset(rst));

FFwReset_en Read_A(.In(A_D_in), .Out(A_D_out), .clk(clk), .reset(rst), .write_enable(A_Reg_Write));
FFwReset_en Read_B(.In(B_D_in), .Out(B_D_out), .clk(clk), .reset(rst), .write_enable(B_Reg_Write));

input2_mux ALU_A_select(.A_0(A_D_out), .B_1(PC_reg_out), .Select(ALU_A_Mux_Select), .Out(ALU_A));
input4_mux ALU_B_select(.A_0(B_D_out), .B_1(1), .C_2({16'h0, Instr_Out[15:0]}), 
						.D_3({{16{Instr_Out[15]}},Instr_Out[15:0]}), .Select(ALU_B_Mux_Select), .Out(ALU_B));

ALU alu(.A(ALU_A), .B(ALU_B), .Control(ALU_Opcode), .Out(ALU_out), .Zero(Zero), .clk(clk), .reset(rst));

input2_mux Next_PC_select(.A_0(ALU_out), .B_1(ALU_reg_out), .Select(PC_Source_Mux_Select), .Out(PC_Source));

FFwReset_en ALU_reg(.In(ALU_out), .Out(ALU_reg_out), .clk(clk), .reset(rst), 
					.write_enable(ALU_Op_Reg_Write));

endmodule
