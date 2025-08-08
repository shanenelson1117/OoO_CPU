// Author: Shane Nelson
// Project: OoO CPU
// File: IF to Issue pipeline register
// Stage: Fetch -> Issue

`include "structs.svh"

module pipeline_reg (
    input  pipe_in_t d,
    input  logic reset, clk, queue_full,
    output pipe_in_t q
);

    pipe_in_t q_reg;
    
    logic flush;


    always_ff @(posedge clk) begin
        if (reset) begin  // flush reg on reset or flush
            q_reg <= '0;
        end
        else begin  // if issue queue can accept new data, update
            q_reg <= d;
        end
    end

     assign q = q_reg;
endmodule