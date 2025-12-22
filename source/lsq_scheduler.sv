// Author: Shane Nelson
// Project: OoO CPU
// File: load-store queue scheduler

`include "structs.sv"

module lsq_scheduler (
    input lsq_packet_t in,
    output lsq_packet_t out,
    output logic wr_en
);  
    import structs_pkg::*;
    
    // Generate lsq write enable signal based on validity of incoming packet
    assign out = in;
    assign wr_en = in.load || in.store;
    
endmodule
