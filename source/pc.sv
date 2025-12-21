// Author: Shane Nelson
// Project: OoO CPU
// File: Program Counter & Instruction Fetch
// Stage: Fetch

`include "structs.sv"

module pc (
	output logic [31:0] instruction,
	output logic [31:0] pc,
	output logic read_exception,
	output logic [7:0] mcause,
	input logic reset, clk, stall, mispredicted,
	input logic [31:0] pc_update, mtvec_ReadData,
	input logic [31:0] mepc_ReadData,
	input logic exception,
	input logic mret
);

	logic [31:0] new_pc;

	// Do not stall on a mispredicted branch or the correct pc will be lost
	assign new_pc = stall & ~mispredicted ? pc : pc_update;
 
	// set up PC register
	always_ff @(posedge clk) begin
        if (reset) begin
          pc <= 32'h8000_0000;
        end
				else if (exception) begin
					pc <= mtvec_ReadData;
				end
				else if (mret) begin
					pc <= mepc_ReadData;
				end
        else begin
          pc <= new_pc;
        end  
   end
	
	// fetch next instruction
	instructmem inst (.address(pc), .instruction, .clk, .exception(read_exception). .mcause);
	
endmodule // PC
