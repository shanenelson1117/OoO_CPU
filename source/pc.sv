// Author: Shane Nelson
// Project: OoO CPU
// File: Program Counter & Instruction Fetch
// Stage: Fetch

module pc (instruction, pc, reset, clk, pc_update, enable);
	output logic [31:0] instruction;
	output logic [31:0] pc;
	input logic reset, clk, queue_full;  // if issue queue full disable pc_writes
	input logic [31:0] pc_update;

	// set up PC register
	always_ff @(posedge clk) begin
        if (reset) begin
            pc <= 32'b0;
        end
        else if (!queue_full) begin
            pc <= pc_update;
        end
        
    end
	
	// fetch
	instructmem inst (.address(pc), .instruction, .clk);
	
endmodule // PC