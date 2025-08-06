// Author: Shane Nelson
// Project: OoO CPU
// File: Memory Controller

`include "structs.svh"

module memory (
    input  logic clk, reset,
    input  logic ROB_head_store,       // Is ROB head a store
    input  logic head_load,            // Is LSQ head a load
    input  logic head_ready,           // Is LSQ/ROB head ready
    input  logic yummy_in,
    input  lsq_packet_t mem_in,        // LSQ head data
    output CDB_packet_t mem_read_out,  // Data to CDB
    output logic rd_en,                // Tell LSQ to remove head
    output logic rd_en_rob,            // Tell ROB to remove head (only for stores)
    output logic valid_out             // Valid signal for memory read
);
    logic write_enable, read_enable;
    logic [31:0] mem_result_reg, read_data;
    logic [3:0] mem_rob_entry_reg;
    logic mem_valid_reg;


    assign read_enable   = head_load & head_ready;
    assign write_enable  = ROB_head_store & head_ready;
    assign valid_out     = mem_valid_reg;

    // lsq, rob dequeue signals
    assign rd_en     = mem_valid_reg | write_enable;
    assign rd_en_rob = write_enable;

    datamem the_mem (
        .clk(clk),
        .address(mem_in.address),
        .write_data(mem_in.result),  
        .write_enable(write_enable),
        .read_enable(read_enable),
        .xfer_size(4'b0100),               
        .read_data(read_data)
    );

    always_ff @(posedge clk) begin
        if (reset) begin
            mem_result_reg     <= '0;
            mem_rob_entry_reg  <= '0;
            mem_valid_reg      <= 0;
        end else if (read_enable) begin
            mem_result_reg     <= read_data;
            mem_rob_entry_reg  <= mem_in.ROB_entry;
            mem_valid_reg      <= 1;
        end else if (yummy_in) begin
            mem_valid_reg      <= 0;
        end
    end

    assign mem_read_out.dest_ROB_entry = mem_rob_entry_reg;
    assign mem_read_out.result         = mem_result_reg;
    assign mem_read_out.branch_result  = 1'bX;
    assign mem_read_out.from_memory    = mem_valid_reg;

endmodule
