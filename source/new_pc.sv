// Author: Shane Nelson
// Project: OoO CPU
// File: PC update calculation and logic
// Stage: Issue

/*
need logic that will tell PC to enable writes even if issue queue is full
in the case that we are committing a mispredicted branch. On the next cycle the 
issue queue will not be full so it is safe to update PC. 
queue_full = queue full signal from issue queue controller & ~mispredicted

also mispredicted should be used as a ROB and Issue Queue flush signal
*/

`include "structs.svh"

module new_pc (
    input logic [31:0] commit_pc, commit_imm_se,
    input logic commit_taken, commit_result, 
    input pipe_in_t pipe_out,
    input logic committed_is_branch, // comes from struct of ROB header
    output logic mispredicted,
    output logic [31:0] curr_branch_pc, curr_branch_imm_se, // still needed in case of mispredicted branch
    output logic [31:0] pc_update
);  

    logic [31:0] pipe_pc, instruction;
    logic pipe_taken, jump, branch;
    logic mis_taken, mis_passed;
    logic [31:0] pc_pre, to_be_added, i;

    assign pipe_pc = pipe_out.pc;
    assign instruction = pipe_out.instruction;
    assign jump = pipe_out.jump;
    assign branch = pipe_out.branch;
    assign pipe_taken = pipe_out.prediction;

    assign i = instruction;
    assign mis_taken = commit_taken & ~commit_result;
    assign mis_passed = ~commit_taken & commit_result;

    always_comb begin
        // if we are committing a mispredicted branch
        if (committed_is_branch & (commit_taken ^ commit_result)) begin
            // incorrectly taken
            if (mis_taken) begin
                pc_pre = commit_pc;
                to_be_added = 4;
            end
            // incorrectly not taken
            else begin
                pc_pre = commit_pc;
                to_be_added = commit_imm_se;
            end
        end
        else begin
            // if we have a branch that is predicted taken
            if (branch & pipe_taken)  begin
                pc_pre = pipe_pc;
                // branch immediate
                to_be_added = {19{i[31]}, i[31], i[7], i[30:25], i[11:8], 1'b0};
            end
            // unconditional jump
            else if (jump) begin
                pc_pre = pipe_pc;
                // jump immediate
                to_be_added = {11{i[31]}, i[31], i[19:12], i[20], i[30:21], 1'b0};
            end
            // no branch or predicted not taken
            else begin
                pc_pre = pipe_pc;
                to_be_added = 4;
            end
        end
    end

    assign pc_update = pc_pre + to_be_added;
    assign mispredicted_flush = mis_taken | mis_passed & committed_is_branch;

    always_ff @(posedge clk) begin
        mispredicted <= mispredict_flush;
    end 
endmodule