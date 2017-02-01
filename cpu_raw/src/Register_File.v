`timescale 1ns / 1ns
//////////////////////////////////////////////////////////////////////////////////
// Engineer:		Rushi Patel 
// 
// Create Date:		15:53:34 09/25/2015 
// Design Name:		Register File
// Module Name:		Register_File 
// Project Name: 	Lab2
// Description: 
// 		Parameterized version of a register file.
// 		Custom size for bits of Input and Output
// 		Custom number of registers available in register file.
// 		This includes changing the size of the Select bits to select all
// 		registers.
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module Register_File(ReadSelect1, ReadSelect2, WriteSelect, WriteData, WriteEnable, ReadData1, ReadData2, clk, reset);
parameter BITSIZE = 32;
parameter REGSIZE = 32;
input [4:0] ReadSelect1, ReadSelect2, WriteSelect;
input [BITSIZE-1:0] WriteData;
input WriteEnable;
output [BITSIZE-1:0] ReadData1, ReadData2;
reg [BITSIZE-1:0] ReadData1, ReadData2;
input clk, reset;

reg [BITSIZE-1:0] reg_file [REGSIZE-1:0];	// Entire list of registers

integer i;									// Used below to reset all registers

// Asyncronous read of register file.
always @(ReadSelect1 or reg_file[ReadSelect1])
begin
	ReadData1 = reg_file[ReadSelect1];
end

// Asyncronous read of register file.
always @(ReadSelect2 or reg_file[ReadSelect2])
begin
	ReadData2 = reg_file[ReadSelect2];
end

// Write back to register file on clk edge.
always @(posedge clk)
begin
	if (reset)
		for (i=0; i<REGSIZE; i=i+1) reg_file[i] <= 'b0;	// Reset all registers
	else
	begin
		if (WriteEnable && WriteSelect != 0)
			reg_file[WriteSelect] <= WriteData;	//If writeback is enabled and not 0 register.
	end
end

endmodule
