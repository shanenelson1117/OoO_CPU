// Author: Shane Nelson
// Project: OoO CPU
// File: Branch Prediction Buffer
// Stage: Fetch

`include "structs.svh"

module bpb (
    input logic [9:0] index_read, index_write,  // indices into FSM array for read, write
    input clk, reset, update_value,             // was the committed branch taken?
    input update_valid,                         // are we commiting a branch instruction
    output logic prediction                     // prediction output
);
    logic [1023:0] update_bus, pred_bus;
    demux_10_to_1024 update_valid_demux (.en(update_valid), .sel(index_write), .out(update_bus));

    genvar i;

    // generate array of branch predictors
    generate 
        for (i = 0; i < 1024; i++) begin : bpb_fsms
            two_bit_predictor fsm (.clk, .reset, .update(update_valid), .valid(update_bus[i]), .prediction(pred_bus[i]));
        end
    endgenerate

    assign prediction = pred_bus[index_read];

endmodule

// 10 bit binary to 1024 one-hot decoder
module demux_10_to_1024 (
    input  logic       en,         
    input  logic [9:0] sel,        
    output logic [1023:0] out     
);

    always_comb begin
        out = 1024'b0;             // default to all zero
        if (en)
            out[sel] = 1'b1;       // set selected output bit high
    end
endmodule

