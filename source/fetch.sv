// Author: Shane Nelson
// Project: OoO CPU
// File: Instruction Fetch Stage
// Stage: Fetch

// notes: in issue module we need to pass immediate along with branch pc as well as branch pc with 4 
// to be able to feed new pc in the event of a mispredicted branch
// probably need muxes to decide between branch pc and pipeline pc, as well as branch immediate and pipeline immediate
// then for jump we need to use adder rs with dest = rd, rs1= pc, rs2 = 4

 `include "structs.sv"

module fetch (
    input logic clk, reset, 
    input logic update, valid_in,   // are we updating gbshr or have we just committed a branch
    input logic [31:0] pc_update,  // new pc, 
    input logic [31:0] committed_pc, // used to update prediction fsm
    input logic stall, mispredicted,
    input logic [31:0] mtvec_ReadData,
    input logic [31:0] mepc_ReadData,
    input logic [3:0] flush_ptr, // where to return ras pointer to on a misprediction
    input logic mret, exception,
    output pipe_in_t pipe_in   // pc, instruction, branch prediction (taken?)
);
    logic [31:0] pc, instruction, newpc;
    logic branch, prediction, jump, jalr; // is the instruction a branch/jump
    logic [9:0] history, index_read, index_write;
    logic read_exception;
    logic [7:0] mcause;

    pc program_counter (.instruction,
                         .pc, 
                         .reset, 
                         .clk,
                         .stall,
                         .mispredicted,
                         .pc_update(newpc),
                         .mtvec_ReadData,
                         .mepc_ReadData,
                         .exception,
                         .mret,
                         .read_exception,
                         .mcause);

    logic [6:0] opcode;
    logic push, pop;
    logic [31:0] ras_new_pc;
    logic [3:0] ptr;
    logic [4:0] rd, rs1;
    assign rd = instruction[11:7];
    assign rs1 = instruction[19:15];

    assign opcode = instruction[6:0];
    assign newpc = pop ? ras_new_pc : pc_update;

    // predecode
    assign branch = opcode == 7'b1100011;
    assign jump = opcode == 7'b1101111;
    assign jalr = opcode == 7'b1100111;

    gbhsr history_reg (.*);

    assign index_read = history ^ pc[9:0];
    assign index_write = history ^ committed_pc;

    bpb pred_buffer (.clk, .reset, .update_value(update), .update_valid(valid_in),
                    .index_read, .index_write, .prediction);


    // ras pop/push procedure as described by risc-v spec
    always_comb begin
        if (jump) begin
            push = ((rd == 5'd1) || (rd == 5'd5)) ? 1 : 0;
            pop = 0;
        end
        else if (jalr) begin
            push = ((rd == 5'd1) || (rd == 5'd5)) ? 1 : 0;
            if ((rd != 5'd1) && (rd != 5'd5) && ((rs1 == 5'd1) || (rs1 == 5'd5))) begin
                pop = 1;
            end
            else if ((((rd == 5'd1) || (rd == 5'd5)) && ((rs1 == 5'd1) || (rs1 == 5'd5))) && (rd != rs1)) begin
                pop = 1;
            end
            else begin
                pop = 0;
            end
        end
        else begin
            push = 0;
            pop = 0;
        end
    end

    ras ret_addr_s (.clk, .reset, .push, .pop, .ras_update(pc + 4), .mispredicted, .flush_ptr, .ras_new_pc, .ptr);


    always_comb begin
        pipe_in.pc = pc;
        pipe_in.instruction = instruction;
        pipe_in.prediction = (prediction & branch) | jump;  // always jump if jal
        pipe_in.branch = branch; // might as well not compute these again later
        pipe_in.jump = jump;
        pipe_in.ras_ptr = ptr;
        pipe_in.jalr_address = newpc;
        pipe_in.mcause = mcause;
        pipe_in.exception = read_exception;
    end

endmodule
