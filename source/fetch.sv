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
    input logic update, valid_in,   // are we updating gbshr or have we just committed a branch
    input logic [31:0] pc_update,  // new pc, 
    input logic [31:0] committed_pc, // used to update prediction fsm
    output pipe_in_t pipe_in   // pc, instruction, branch prediction (taken?)
);
    logic [31:0] pc, instruction;
    logic branch, prediction, jump; // is the instruction a branch/jump
    logic [9:0] history, index_read;

    pc program_counter (.*);

    // predecode
    assign branch = instruction[6] & instruction[5] & instruction[1] & instruction[0];
    assign jump = branch & instruction[2] & instruction[3];

    gbhsr history_reg (.*);

    assign index_read = history ^ pc[9:0];
    assign index_write = history ^ committed_pc;

    bpb pred_buffer (.clk, .reset, .update_value(update), .update_valid(valid_in)
                    .index_read, .index_write, .prediction);

    pipe_in_t pipe_in;

    always_comb begin
        pipe_in.pc = pc;
        pipe_in.instruction = instruction;
        pipe_in.prediction = (predicition & branch) | jump;  // always jump if jal
        pipe_in.branch = branch; // might as well not compute these again later
        pipe_in.jump = jump;
    end

endmodule
