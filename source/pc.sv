// Author: Shane Nelson
// Project: OoO CPU
// File: Program Counter & Instruction Fetch

module pc (instruction, pc, reset, clk, pc_update, enable);
	output logic [31:0] instruction;
	output logic [31:0] pc;
	input logic reset, clk, enable;
	input logic [31:0] pc_update;

	// set up PC register
	always_ff @(posedge clk) begin
        if (reset) begin
            pc <= 32'b0;
        end
        else if (enable) begin
            pc <= pc_update;
        end
        else begin
            pc <= pc;
        end
    end
	
	// fetch
	instructmem inst (.address(pc), .instruction, .clk);
	
endmodule // PC