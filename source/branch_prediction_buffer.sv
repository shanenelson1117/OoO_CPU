// Author: Shane Nelson
// Project: OoO CPU
// File: Branch Prediction Buffer
// Stage: Fetch

`include "structs.svh"

module bpb (
    input logic [1:0] [9:0] index_read, index_write,  // indices into FSM array for read, write
    input logic clk, reset,            // was the committed branch taken?
    input logic [1:0] update_valid, update_value,                         // are we commiting a branch instruction
    output logic [1:0] prediction                     // prediction output
);
    logic [1023:0] update_bus, pred_bus;
    demux_10_to_1024 update_valid_demux_0 (.en(update_valid), .sel0(index_write[0]), .sel1(index_write[1]) .out(update_bus));


    genvar i;

    // generate array of branch predictors
    generate 
        for (i = 0; i < 1024; i++) begin : bpb_fsms
            two_bit_predictor fsm (.clk, .reset, .update(update_valid), .valid(update_bus[i]), .prediction(pred_bus[i]));
        end
    endgenerate

    assign prediction[0] = pred_bus[index_read[0]];
    assign prediction[1] = pred_bus[index_read[1]];

endmodule

// 10 bit binary to 1024 one-hot decoder
module demux_10_to_1024 (
    input  logic  [1:0]     en,         
    input  logic [9:0] sel0, sel1,        
    output logic [1023:0] out     
);

    always_comb begin
        out = 1024'b0;             // default to all zero
        if (en[0])
            out[sel0] = 1'b1;       // set selected output bit high
        if (en[1])
            out[sel1] = 1'b1;
    end
endmodule

