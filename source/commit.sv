// Author: Shane Nelson
// Project: OoO CPU
// File: Commit Unit

`include "structs.svh"

module commit (
    input ROB_entry_t head,
    input logic rob_head_ready,
    input logic rd_en_rob, // from memory unit, is store at head of queue done?
    output logic RegWrite, // register file write enable
    output logic [3:0] commit_ROB,
    output logic [4:0] rd,
    output logic commit_is_branch, commit_prediction, commit_result,
    output logic [31:0] WriteData, committed_pc, commit_imm_se,
    output logic rd_en // dequeue head
);  
    always_comb begin
        if (rob_head_ready) begin
            if (head.type == 2'b00) begin
                commit_is_branch = 1;
                commit_prediction = head.branch_pred;
                commit_result = head.branch_result;
                RegWrite = 0;
                committed_pc = head.destination;
                commit_imm_se = head.value;
                WriteData = 32'b0;
                rd_en = 1;
            end
            else if (head.type == 2'b01) begin
                commit_is_branch = 0;
                commit_prediction = head.branch_pred;
                commit_result = head.branch_result;
                RegWrite = 0;
                committed_pc = head.destination;
                commit_imm_se = head.value;
                WriteData = 32'b0;
                rd_en = rd_en_rob;
            end
            else begin
                commit_is_branch = 0;
                commit_prediction = head.branch_pred;
                commit_result = head.branch_result;
                RegWrite = 1;
                committed_pc = head.destination;
                commit_imm_se = head.value;
                WriteData = head.value;
                rd_en = 1;
            end
        end
        else begin
            commit_is_branch = 0;
            commit_prediction = head.branch_pred;
            commit_result = head.branch_result;
            RegWrite = 0;
            committed_pc = head.destination;
            commit_imm_se = head.value;
            WriteData = 32'b0;
            rd_en = 0;
        end
    end

    assign commit_ROB = rd_en ? head.ROB_number : '0;
    assign rd = rd_en ? head.destination[4:0] : '0;

endmodule