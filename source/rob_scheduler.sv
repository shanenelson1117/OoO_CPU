// Author: Shane Nelson
// Project: OoO CPU
// File: reorder buffer scheduler

`include "structs.svh"

module rob_scheduler (
    input ROB_entry_t in,
    input logic rob_full,
    output ROB_entry_t out,
    output logic wr_en
);
    assign out = in;
    assign wr_en = ~rob_full & (in.ROB_entry != 4'b0000);
    
endmodule