// Author: Shane Nelson
// Project: OoO CPU
// File: Instruction Fetch Stage
// Stage: Fetch

// notes: in issue module we need to pass immediate along with branch pc as well as branch pc with 4 
// to be able to feed new pc in the event of a mispredicted branch
// probably need muxes to decide between branch pc and pipeline pc, as well as branch immediate and pipeline immediate
// logic could look like 
/*
if (committed is branch) 
    if (~committed.taken and committed.result) 
        then pc_update = br_imm + br_pc
        flush issue queue, ROB, and pipeline
    else if (committed.taken and ~committed.result) 
        then pc_update = br_pc + 4
        flush issue queue, ROB, and pipeline
    else {
    if (pipelineinstruction.isbranch) {
        if (pipline.istaken) 
            then pc_update = pipeline.imm + pipeline.pc 
            flush pipeline 
        }
    } else {
        pc_update = pipeline.pc + 4
    }

    to decode immediate:

    we need a control signal that decodes jump vs branch used as mux select between 
    two different sign extenders either se(imm[20:1], 0) (jump) or se(imm[12:1], 0) (branch)

    then for jump we need to use adder rs with dest = rd, rs1= pc, rs2 = 4
*/
module fetch (
    input logic clk, reset, 
    input logic enable, // if instruction queue is full we may need to stall
    input logic update, valid_in,   // are we updating gbshr or have we just committed a b/j
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
    end

endmodule
