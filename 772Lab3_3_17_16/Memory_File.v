`timescale 1ns / 1ns
//////////////////////////////////////////////////////////////////////////////////
// Engineer:		Rushi Patel 
// 
// Create Date:		15:53:34 10/13/2015 
// Design Name:		Memory File
// Module Name:		Memory_File 
// Project Name: 	Lab3
// Description: 
// 		Parameterized version of a memory file.
// 		Custom size for bits of Input and Output
// 		Custom number of memory locations available in memory.
// 		This includes changing the size of the Select bits to select all
// 		memory locations.
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module Memory_File(Address, WriteData, WriteEnable, ReadData1, clk, reset, 
				I_MEM_Write_Enable, I_MEM_Data_In, I_MEM_Write_Addr);
parameter BITSIZE = 32;
parameter REGSIZE = 16;
input [REGSIZE-1:0] Address;
input [BITSIZE-1:0] WriteData;
input WriteEnable;
output [BITSIZE-1:0] ReadData1;
reg [BITSIZE-1:0] ReadData1;
input clk, reset;
//#(.BITSIZE(32), .REGSIZE(65536))
//ADDED for testbench from TA
input I_MEM_Write_Enable;
input [31:0] I_MEM_Data_In;
input [15:0] I_MEM_Write_Addr;

reg [BITSIZE-1:0] memory_file [0:65536-1];	// Entire list of memory

// Asyncronous read of memory. Was not specified.
always @(Address or memory_file[Address])
begin
	ReadData1 = memory_file[Address];
end

// Write back to memory on clk edge.
always @(posedge clk)
begin
	if (WriteEnable)
		memory_file[Address] <= WriteData;	//If writeback is enabled and not 0 register.
	if (I_MEM_Write_Enable)
		memory_file[I_MEM_Write_Addr] <= I_MEM_Data_In;
end

//MY method of filling the memory instead of through a test bench
//initial
//	begin
//		$readmemb("memory.txt", memory_file);
//	end

endmodule
