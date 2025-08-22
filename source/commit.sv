// Author: Shane Nelson
// Project: OoO CPU
// File: Commit Unit

`include "structs.svh"

module commit (
    input ROB_entry_t head,
    input logic rob_head_ready, empty, 
    input logic jalrq_ready, // is jalr at head ready?
    input logic rd_en_rob, // from memory unit, is store at head of queue done?
    output logic RegWrite, // register file write enable
    output logic [3:0] commit_ROB, 
    output logic [4:0] rd,
    output logic commit_is_branch, commit_prediction, commit_result, commit_jalr,
    output logic [31:0] WriteData, committed_pc, commit_imm_se,
    output logic rd_en, valid_commit, // dequeue head
    output logic rd_en_jalrq, // dequeue head of jalrq
    output CDB_packet_t commit_packet,
    output logic [3:0] commit_ras_pointer
);  
    // Generate signals that are used to write to the reg file or correct a misprediction
    // and also send dequeue signal to the ROB if head is committed
    always_comb begin
        if (rob_head_ready & ~empty) begin
            if (head.jalr) begin
                rd_en_jalrq = jalrq_ready;
            end
            else begin
                rd_en_jalrq = 0;
            end
            // BRANCH
            if (head.itype == 2'b00) begin
                commit_is_branch = 1;
                commit_prediction = head.branch_pred;
                commit_result = head.branch_result;
                RegWrite = 0;
                committed_pc = head.destination;
                commit_imm_se = head.value;
                WriteData = 32'b0;
                rd_en = 1;
                valid_commit = 1;
            end
            // STORE
            else if (head.itype == 2'b01) begin
                commit_is_branch = 0;
                commit_prediction = 0;
                commit_result = 0;
                RegWrite = 0;
                committed_pc = '0;
                commit_imm_se = '0;
                WriteData = 32'b0;
                rd_en = rd_en_rob;
                valid_commit = rd_en_rob;
            end
            // Load / Reg Dest
            else begin
                commit_is_branch = 0;
                commit_prediction = 0;
                commit_result = 0;
                RegWrite = 1;
                committed_pc = '0;
                commit_imm_se = '0;
                WriteData = head.value;
                rd_en = 1;
                valid_commit = 1;
                if (head.jalr) begin
                    rd_en = jalrq_ready;
                end
                else begin
                    rd_en = 1;
                end
            end
        end
            // Invalid (non-committing cycle)
        else begin
            commit_is_branch = 0;
            commit_prediction =0;
            commit_result = '0;
            RegWrite = 0;
            committed_pc = '0;
            commit_imm_se = '0;
            WriteData = '0;
            rd_en = 0;
            valid_commit = 0;
            rd_en_jalrq = 0;
        end
    end


    assign commit_ROB = rd_en ? head.ROB_number : '0;
    assign rd = rd_en ? head.destination[4:0] : '0;
    assign commit_jalr = (rob_head_ready && jalrq_ready) ? head.jalr : 0;
    assign commit_ras_pointer = rd_en ? head.ras_pointer : '0;


    // Set up CDB packet
    assign commit_packet.dest_ROB_entry = (rd_en && head.itype[1]) ? head.ROB_number : '0;
    assign commit_packet.result = WriteData;
    assign commit_packet.branch_result = 0;
    assign commit_packet.load_step1 = 0;
    assign commit_packet.from_commit = 1;



endmodule
