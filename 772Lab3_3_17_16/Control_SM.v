`timescale 1ns / 1ns
//////////////////////////////////////////////////////////////////////////////////
// Engineer: 		Rushi Patel
// 
// Create Date:    	18:16:36 10/09/2015 
// Module Name:    	Control_SM 
// Project Name:	Lab3 
// Description: 
//				Control logic used to signal datapath for each state.
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module Control_SM(OP_Code, MemWrite, PC_Reg_Write, PC_Reg_Write_BEQ, Instruction_Reg_Write, 
	Memory_Data_Reg_Write, A_Reg_Write, B_Reg_Write, ALU_Op_Reg_Write, 
	Register_File_Write, IorD_Mux_Select, Reg_File_B_Mux_Select, Write_Data_Mux_Select, 
	ALU_A_Mux_Select, ALU_B_Mux_Select, ALU_Opcode, PC_Source_Mux_Select, clk, reset, start);
// localparams used for state transistions
//localparam FETCH = 0, DECODE = 1, ALU_MEM_LOCATION = 2, MEM_READ = 3, REG_MEM_WRITE_BACK = 4;
//localparam MEM_STORE = 5, EXECUTE_ALU_RTYPE = 6, WRITE_BACK_RTYPE = 7, ALU_BRANCH = 8;
//
//// localparams for ALU Control logic
//localparam NOOP = 6'h0;
//localparam MOV = 6'h10, ADD = 6'h12, SUB = 6'h13, OR = 6'h14, AND = 6'h15;
//localparam BEQ = 6'h20;
//localparam ADDI = 6'h32, SUBI = 6'h33, ORI = 6'h34, ANDI = 6'h35;
//localparam LI = 6'h39, LWI = 6'h3B, SWI = 6'h3C;

input [5:0] OP_Code;
input clk, reset, start;
output MemWrite, PC_Reg_Write, PC_Reg_Write_BEQ, Instruction_Reg_Write, Memory_Data_Reg_Write;
reg MemWrite, PC_Reg_Write, PC_Reg_Write_BEQ, Instruction_Reg_Write, Memory_Data_Reg_Write;
output A_Reg_Write, B_Reg_Write, ALU_Op_Reg_Write, Register_File_Write;
reg A_Reg_Write, B_Reg_Write, ALU_Op_Reg_Write, Register_File_Write;
output IorD_Mux_Select, Reg_File_B_Mux_Select, Write_Data_Mux_Select, ALU_A_Mux_Select, PC_Source_Mux_Select;
reg IorD_Mux_Select, Reg_File_B_Mux_Select, Write_Data_Mux_Select, ALU_A_Mux_Select, PC_Source_Mux_Select;
output [1:0] ALU_B_Mux_Select;
reg [1:0] ALU_B_Mux_Select;
output [5:0] ALU_Opcode;
reg [5:0] ALU_Opcode;

reg [3:0] State, NextState;

// Go to next state every clock tick
always @(posedge clk)
begin
	if (reset)
		State <= 0;
	else
		if (start)
			State <= NextState;
		else
			State <= State;
end

// NextState Logic 
always @(OP_Code or State or NextState or reset or start)
begin
	case(State)
		0:
		begin
			NextState = 4'b0001;
		end
		4'b0001:
		begin
			case (OP_Code)
				6'h10, 6'h12, 6'h13, 6'h14, 6'h15,
					6'h32, 6'h33, 6'h34, 6'h35, 6'h39: 	NextState = 4'b0110;
				6'h20: 						NextState = 4'b1000;
				6'h3B, 6'h3C: 					NextState = 4'b0010;
				default: NextState = 0;
			endcase
		end
		4'b0010:
		begin
			case (OP_Code)
				6'h3B: NextState = 4'b0011;
				6'h3C: NextState = 4'b0101;
				default: NextState = 0;
			endcase
		end
		4'b0011:
		begin
			NextState = 4'b0100;
		end
		4'b0100:
		begin
			NextState = 0;
		end
		4'b0101:
		begin
			NextState = 0;
		end
		4'b0110:
		begin
			NextState = 4'b0111;
		end
		4'b0111:
		begin
			NextState = 0;
		end
		4'b1000:
		begin
			NextState = 0;
		end
		default: NextState = 0;
	endcase

end

// Moore state control logic
always @(OP_Code or State or NextState or reset or start)
begin

	MemWrite <= 0;
	PC_Reg_Write <= 0;
	PC_Reg_Write_BEQ <= 0;
	Instruction_Reg_Write <= 0;
	Memory_Data_Reg_Write <= 0;
	A_Reg_Write <= 0;
	B_Reg_Write <= 0;
	ALU_Op_Reg_Write <= 0;
	Register_File_Write <= 0;
	IorD_Mux_Select <= 0;
	Reg_File_B_Mux_Select <= 0;
	Write_Data_Mux_Select <= 0;
	ALU_A_Mux_Select <= 0;
	ALU_B_Mux_Select <= 0;
	PC_Source_Mux_Select <= 0;
	ALU_Opcode <= OP_Code;

	if (start)
	begin
		case(State)
			0:
			begin
				// Get the next instruction and increment PC
				Instruction_Reg_Write <= 1;
				ALU_A_Mux_Select <= 1;
				ALU_B_Mux_Select <= 1;
				ALU_Opcode <= 6'h12;
				PC_Reg_Write <= 1;
			end
			4'b0001:
			begin
				// Send instruction register to register file and increment PC
				// with immediate for branch instructions
				if (OP_Code[5] == 1)
					Reg_File_B_Mux_Select <= 1;
				A_Reg_Write <= 1;
				B_Reg_Write <= 1;
				ALU_A_Mux_Select <= 1;
				ALU_B_Mux_Select <= 2;
				ALU_Opcode <= 6'h12;
				ALU_Op_Reg_Write <= 1;
			end
			4'b0010:
			begin
				// Store Memory location in ALU Register
				ALU_B_Mux_Select <= 2;
				ALU_Op_Reg_Write <= 1;
			end
			4'b0011:
			begin
				// Read memory and store in data register
				IorD_Mux_Select <= 1;
				Memory_Data_Reg_Write <= 1;
			end
			4'b0100:
			begin
				// Write Memory into register file
				Write_Data_Mux_Select <= 1;
				Register_File_Write <= 1;
			end
			4'b0101:
			begin
				// Write register into memory address
				IorD_Mux_Select <= 1;
				MemWrite <= 1;
			end
			4'b0110:
			begin
				// Perform ALU operation save into ALU reg
				if (OP_Code[5] == 1)
				begin
					if (OP_Code == 6'h32 || OP_Code == 6'h33)
						ALU_B_Mux_Select <= 3;
					ALU_B_Mux_Select <= 2;
				end
				ALU_Op_Reg_Write <= 1;
			end
			4'b0111:
			begin
				// Write back ALU reg into register file
				Register_File_Write <= 1;
			end
			4'b1000:
			begin
				// Check branch condition and change pc if true
				ALU_Opcode <= 6'h20;
				PC_Reg_Write_BEQ <= 1;
				PC_Source_Mux_Select <= 1;
			end
			default:
			begin
			end
		endcase
	end
end

endmodule
