// Author: Shane Nelson
// Project: OoO CPU
// File: load-store queue scheduler

`include "structs.svh"

module lsq_scheduler (
    input lsq_input in,
    input logic lsq_full,
    output lsq_input out,
    output logic wr_en
);
    assign out = in;
    assign wr_en = in.load || in.store;
    
endmodule