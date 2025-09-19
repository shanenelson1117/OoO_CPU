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
    input logic [1:0] [31:0] commit_pc, commit_imm_se,
    input logic [1:0] [31:0]  jalr_actual_address, jalr_taken_address,
    input logic [1:0] commit_taken, commit_result, commit_jalr, committed_is_branch,
    input pipe_in_t pipe_in,
    input logic  clk, // comes from struct of ROB header
    output logic [1:0] mispredicted,
    output logic [1:0] [31:0] curr_branch_imm_se, // still needed in case of mispredicted branch
    output logic [1:0] [31:0] pc_update
);  

    logic [1:0] [31:0] pipe_pc, instruction;
    logic [1:0] pipe_taken, jump, branch, mis_taken;
    logic [1:0] [31:0] pc_pre, to_be_added, i;

    always_comb begin
        for (int j = 0; j < 2; j++) begin

            pipe_pc[j] = pipe_in.pc[j];
            instruction[j] = pipe_in.instruction[j];
            jump[j] = pipe_in.jump[j];
            branch[j] = pipe_in.branch[j];
            pipe_taken[j] = pipe_in.prediction[j];

            i[j] = instruction[j];
            mis_taken[j] = commit_taken[j] & ~commit_result[j];

        // if we are committing a mispredicted branch
            if (committed_is_branc[j]] & (commit_taken[j] ^ commit_result[j])) begin
                mispredicted[j] = 1;
                // incorrectly taken
                if (mis_taken[j]) begin
                    pc_pre[j] = commit_pc[j];
                    to_be_added[j] = 4;
                end
                // incorrectly not taken
                else begin
                    pc_pre[j] = commit_pc[j];
                    to_be_added[j] = commit_imm_se[j];
                end
            end
            // mispredicted jalr
            else if (commit_jalr[j] && (jalr_taken_address[j] != jalr_actual_address[j])) begin
                mispredicted[j] = 1;
                pc_pre[j] = 32'b0;
                to_be_added[j] = jalr_actual_address[j];
            end
            else begin
                mispredicted[j] = 0;
                // if we have a branch that is predicted taken
                if (branch[j] & pipe_taken[j])  begin
                    pc_pre[j] = pipe_pc[j];
                    // branch immediate
                    to_be_added[j] = {{19{i[j][31]}}, i[j][31], i[j][7], i[j][30:25], i[j][11:8], 1'b0};
                end
                // unconditional jump
                else if (jump[j]) begin
                    pc_pre[j] = pipe_pc[j];
                    // jump immediate
                    to_be_added[j] = {{11{i[j][31]}}, i[j][31], i[j][19:12], i[j][20], i[j][30:21], 1'b0};
                end
                // no branch or predicted not taken
                else begin
                    pc_pre[j]= pipe_pc[j];
                    to_be_added[j] = 4;
                end
            end

            curr_branch_imm_se[j] = branch[j] ? {{19{i[j][31]}}, i[j][31], i[j][7], i[j][30:25], i[j][11:8], 1'b0} : to_be_added[j];
            pc_update[j] = pc_pre[j] + to_be_added[j];
        end
    end

endmodule
