// Author: Shane Nelson
// Project: OoO CPU
// File: Instruction Fetch Stage
// Stage: Fetch

// notes: in issue module we need to pass immediate along with branch pc as well as branch pc with 4 
// to be able to feed new pc in the event of a mispredicted branch
// probably need muxes to decide between branch pc and pipeline pc, as well as branch immediate and pipeline immediate
// then for jump we need to use adder rs with dest = rd, rs1= pc, rs2 = 4

 `include "structs.svh"

module fetch (
    input logic clk, reset, 
    input logic enable, // if instruction queue is full we may need to stall
    input logic [1:0] update, valid_in,   // are we updating gbshr or have we just committed a branch
    input logic [1:0] [31:0] pc_update,  // new pc, 
    input logic [1:0] [31:0] committed_pc, // used to update prediction fsm
    input logic [1:0] stall,
    input logic [1:0] mispredicted,
    input logic [1:0] [3:0] flush_ptr, // where to return ras pointer to on a misprediction
    output pipe_in_t pipe_in   // pc, instruction, branch prediction (taken?)
);
    logic [1:0] [31:0] pc, instruction, newpc;
    logic [1:0] branch, prediction, jump, jalr; // is the instruction a branch/jump
    logic [9:0] history;
    logic [1:0] [9:0] index_read, index_write;

    pc program_counter_0 (.instruction(instruction[0]), .pc(pc[0]), .reset, .clk, .stall(stall[0]), .mispredicted, .pc_update(newpc[0]));
    pc program_counter_1 (.instruction(instruction[1]), .pc(pc[1]), .reset, .clk, .stall(stall[1]), .mispredicted, .pc_update(newpc[1]));

    logic [1:0] [6:0] opcode;
    logic [1:0] push, pop;
    logic [1:0] [31:0] ras_new_pc, ras_update;
    logic [1:0] [3:0] ptr;
    logic [1:0] [4:0] rd, rs1;


    // predecode
    assign branch = opcode == 7'b1100011;
    assign jump = opcode == 7'b1101111;
    assign jalr = opcode == 7'b1100111;

    gbhsr history_reg (.*);

    bpb pred_buffer (.clk, .reset, .update_value(update), .update_valid(valid_in),
                    .index_read, .index_write, .prediction);


    // ras pop/push procedure as described by risc-v spec
    always_comb begin
        for (int i = 0; i < 2; i++) begin
            
            opcode[i] = instruction[i][6:0];

            branch[i] = opcode[i] == 7'b1100011;
            jump[i] = opcode[i] == 7'b1101111;
            jalr[i] = opcode[i] == 7'b1100111;

            rd[i] = instruction[i][11:7];
            rs1[i] = instruction[i][19:15];

            index_read[i] = history ^ pc[i][9:0];
            index_write[i] = history ^ committed_pc[i];

            if (jump[i]) begin
                push[i] = ((rd[i] == 5'd1) || (rd[i] == 5'd5)) ? 1 : 0;
                pop[i] = 0;
            end
            else if (jalr[i]) begin
                push[i] = ((rd[i] == 5'd1) || (rd[i] == 5'd5)) ? 1 : 0;
                if ((rd[i] != 5'd1) && (rd[i] != 5'd5) && ((rs1[i] == 5'd1) || (rs1[i] == 5'd5))) begin
                    pop[i] = 1;
                end
                else if ((((rd[i] == 5'd1) || (rd[i] == 5'd5)) && ((rs1[i] == 5'd1) || (rs1[i] == 5'd5))) && (rd[i] != rs1[i])) begin
                    pop[i] = 1;
                end
                else begin
                    pop[i] = 0;
                end
            end
            else begin
                push[i] = 0;
                pop[i] = 0;
            end

            newpc[i] = pop[i] ? ras_new_pc[i] : pc_update[i];
        end
    end

    ras ras_0 (.clk, .reset, .push(push[0]), .pop(pop[0]), .ras_update(pc[0] + 4), .mispredicted(mispredicted[0]), .flush_ptr(flush_ptr[0]), .ras_new_pc(ras_new_pc[0]), .ptr(ptr[0]));
    ras ras_1 (.clk, .reset, .push(push[1]), .pop(pop[1]), .ras_update(pc[1] + 4), .mispredicted(mispredicted[1]), .flush_ptr(flush_ptr[1]), .ras_new_pc(ras_new_pc[1]), .ptr(ptr[1]));


    always_comb begin
        for (int i = 0; i < 2; i++) begin
            pipe_in.pc[i] = pc[i];
            pipe_in.instruction[i] = instruction[i];
            pipe_in.prediction[i] = (prediction[i] & branch[i]) | jump[i];  // always jump if jal
            pipe_in.branch[i] = branch[i]; // might as well not compute these again later
            pipe_in.jump[i] = jump[i];
            pipe_in.ras_ptr[i] = ptr[i];
            pipe_in.jalr_address[i] = newpc[i];
        end
    end

endmodule
