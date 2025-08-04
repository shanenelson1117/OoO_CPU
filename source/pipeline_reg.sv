// Author: Shane Nelson
// Project: OoO CPU
// File: IF to Issue pipeline register
// Stage: Fetch -> Issue

`include structs.svh

// register reset should be high if instruction in issue stage is a taken branch or a jump.
// but not if the instruction queue is full. In that case we want to disable writes to the pipe
// register because we arent advancing the pipeline. if branch_taken & ~queue_full, then flush the reg.
// also flush when incorrect branch is committed.
module pipeline_reg (
    input  pipe_in_t d,
    input  logic reset, clk, queue_full,
    output pipe_in_t q
);
    pipe_in_t q_reg;
    logic flush;

    assign q = q_reg;

    always_ff @(posedge clk) begin
        if (reset) begin  // flush reg on reset or flush
            q_reg.instruction <= 32'b0;
            q_reg.pc <= 32'b0;
            q_reg.prediction  <= 1'b0;
            q_req.branch <= 1'b0;  
            q_reg.jump <= 1'b0;
        end
        else if (!queue_full) begin  // if issue queue can accept new data, update
            q_reg <= d;
        end
    end
endmodule