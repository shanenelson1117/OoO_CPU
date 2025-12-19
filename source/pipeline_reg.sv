// Author: Shane Nelson
// Project: OoO CPU
// File: IF to Issue pipeline register
// Stage: Fetch -> Issue

`include "structs.svh"
`timescale 1ps/1ps
// register reset should be high if instruction in issue stage is a taken branch or a jump.
// but not if the instruction queue is full. In that case we want to disable writes to the pipe
// register because we arent advancing the pipeline. if branch_taken & ~queue_full, then flush the reg.
// also flush when incorrect branch is committed.
module pipeline_reg (
    input  pipe_in_t d,
    input  logic reset, clk, stall,
    output pipe_in_t q
);



    always_ff @(posedge clk) begin
        if (reset) begin  // flush reg on reset or flush
            q <= '0;
        end
        else if (!stall) begin  // if issue queue can accept new data, update
            q <= d;
        end
    end

endmodule
