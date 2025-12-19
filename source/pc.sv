// Author: Shane Nelson
// Project: OoO CPU
// File: Program Counter & Instruction Fetch
// Stage: Fetch

`include "structs.svh"

module pc (
	output logic [31:0] instruction,
	output logic [31:0] pc,
	input logic reset, clk, stall, mispredicted,
	input logic [31:0] pc_update
);

	logic [31:0] new_pc;

	// Do not stall on a mispredicted branch or the correct pc will be lost
	assign new_pc = stall & ~mispredicted ? pc : pc_update;
 
	// set up PC register
	always_ff @(posedge clk) begin
        if (reset) begin
            pc <= 32'b0;
        end
        else begin
            pc <= new_pc;
        end
        
    end
	
	// fetch next instruction
	instructmem inst (.address(pc), .instruction, .clk);
	
endmodule // PC