// Author: Shane Nelson
// Project: OoO CPU
// File: Commit Unit

`include "structs.sv"

module commit (
    input ROB_entry_t head,
    input logic rob_head_ready, empty, 
    input logic jalrq_ready, // is jalr at head ready?
    input logic rd_en_rob, // from memory unit, is store at head of queue done?
    input logic illegal_access_e,
    output logic RegWrite, // register file write enable
    output logic [3:0] commit_ROB, 
    output logic [4:0] rd,
    output logic commit_is_branch, commit_prediction, commit_result, commit_jalr,
    output logic [31:0] WriteData, committed_pc, commit_imm_se,
    output logic rd_en, valid_commit, // dequeue head
    output logic rd_en_jalrq, // dequeue head of jalrq
    output logic [3:0] commit_ras_pointer,
    output logic csr_valid_write,   // Are we writing to csrs
    output logic [1:0] special,     // Are we committing an mret, ecall
    output logic [31:0] mepc_WriteData, // Current pc for exceptions
    output logic [31:0] csr_WriteData,   // What are we writing to CSRs?
    output logic [CSR_BITS:0] csr_write_select,   // Which csr are we writing
    output logic [7:0] mcause,
    output logic exception
);  
    // Generate signals that are used to write to the reg file or correct a misprediction
    // and also send dequeue signal to the ROB if head is committed
    always_comb begin
        special = NONE;
        commit_is_branch = 0;
        commit_prediction = 0;
        commit_result = 0;
        RegWrite = 0;
        committed_pc = '0;
        commit_imm_se = '0;
        rd_en = 0;
        valid_commit = 0;
        WriteData = 32'b0;
        csr_WriteData = '0;
        csr_write_sel = '0;
        exception = 0;
        mepc_WriteData = head.pc;
        mcause = '0;
        if (rob_head_ready & ~empty) begin
            rd_en = 1;
            valid_commit = 1;
            exception = head.exception;

            if (head.jalr) begin
                rd_en_jalrq = jalrq_ready;
            end
            else begin
                rd_en_jalrq = 0;
            end
            if (head.exception) begin
                mcause = head.mcause;
                exception = 1;
                valid_commit = 0;
            end
            // BRANCH
            else if (head.itype == 2'b00) begin
                commit_is_branch = 1;
                commit_prediction = head.branch_pred;
                commit_result = head.branch_result;
                committed_pc = head.destination;
                commit_imm_se = head.value;
            end
            // STORE
            else if (head.itype == 2'b01) begin
                rd_en = rd_en_rob;
                valid_commit = rd_en_rob;
            end
            // ECALL or EBREAK
            else if (head.special[0]) begin
                special = head.special;
                rd_en = 1;
                exception = 1;
                mcause = head.mcause;
            end
            // MRET
            else if (head.special == MRET) begin
                // if this is illegal then special = NONE
                special = {illegal_access_e, 1'b0};
                // We should only commit if this is legal
                rd_en = ~illegal_access_e;
                valid_commit = rd_en;
            end
            // CSR WRITE INSTRUCTION
            else if (head.csr_valid_write) begin
                // important that we handle exceptions first because
                // illegal access e will still be high if we do not dequeue
                // Only commit if we have privilege to change csrs
                RegWrite = ~illegal_access_e;
                csr_valid_write = RegWrite;
                csr_WriteData = head.value;
                WriteData = head.destination;
                // NEED TO IMPLEMENT HEAD.CSR_WRITE_SELECT -> CSR_WRITE_SELECT
                csr_write_select = head.csr_write_select;
                rd_en = RegWrite;
                valid_commit = RegWrite;
            end
            // For now allow privilege escalations for reads
            else if (head.csr_valid_read) begin
                RegWrite = 1;
                WriteData = head.destination;
                valid_commit = 1;
            end
            // Load / Reg Dest
            else begin
                RegWrite = 1;
                WriteData = head.value;
                if (head.jalr) begin
                    rd_en = jalrq_ready;
                end
                else begin
                    rd_en = 1;
                end
            end
        end
    end

    // TO DO:
    // MCAUSE AND EXCEPTION AND MEPC WRITE DATA

    assign commit_ROB = rd_en ? head.ROB_number : '0;
    assign rd = rd_en ? head.reg_dest : '0;
    assign commit_jalr = (rob_head_ready && jalrq_ready) ? head.jalr : 0;
    assign commit_ras_pointer = rd_en ? head.ras_pointer : '0;
endmodule
