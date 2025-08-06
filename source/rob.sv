// Author: Shane Nelson
// Project: OoO CPU
// File: Reorder Buffer

`include "structs.svh"

module rob #(parameter DEPTH = 16) (
    input ROB_entry_t new_entry, // from rs scheduler
    input CDB_packet_t CDB_in,
    input logic clk, reset, 
    input logic wr_en,      // from rob scheduler
    input logic rd_en,      // dequeue from commit unit
    output ROB_entry_t head, // combinational read of the head
    output logic head_ready,
    output logic full,
    output logic ROB_head_store,
    output logic [3:0] ROB_entry // available rob entry to rs scheduler
);
    logic [3:0] wptr, rptr;
    logic empty;

    ROB_entry_t rob_data [DEPTH];

    // Write logic
    always_ff @(posedge clk or posedge reset) begin
        if (reset) begin
            wptr <= 1;
        end else if (wr_en && !full) begin
            rob_data[wptr] <= new_entry;
            wptr <= (wptr == DEPTH - 1) ? 1 : wptr + 1;
        end
    end

    // CDB forwarding logic
    always_ff @(posedge clk) begin
        if (~reset) begin
            for (int i = 1; i < DEPTH; i++) begin
                // branch
                if (rob_data[i].itype == 2'b00) begin
                    if (rob_data[i].ROB_number == CDB_in.dest_ROB_entry) begin
                        rob_data[i].branch_result <= CDB_in.branch_result;
                        rob_data[i].ready <= 1;
                    end
                end
                else if (rob_data[i].itype == 2'b10) begin
                    if (rob_data[i].ROB_number == CDB_in.dest_ROB_entry) begin
                        rob_data[i].value <= CDB_in.result;
                        rob_data[i].ready <= 1;
                    end
                end
                else if (rob_data[i].itype == 2'b11) begin
                    if (rob_data[i].ROB_number == CDB_in.dest_ROB_entry) begin
                        rob_data[i].value <= CDB_in.result;
                        rob_data[i].ready <= 1;
                    end
                end
            end
        end
    end

    // read logic 
    assign head = rob_data[rptr];

    always_ff @(posedge clk or posedge reset) begin
        if (reset) begin
            rptr <= 1;
        end 
        else if (rd_en && !empty) begin
            if (rptr == DEPTH - 1)
                rptr <= 1;  // wrap to 1 instead of 0
            else
                rptr <= rptr + 1;
        end
    end

    // if not full send wptr to rs scheduler to enable renaming
    assign ROB_entry = full ? '0 : wptr;

    // Status outputs
    assign full = ((wptr + 1 == DEPTH ? 1 : wptr + 1) == rptr);
    assign empty = (wptr == rptr);
    assign head_ready  = head.ready;
    assign ROB_head_store = head.itype == 2'b01;

endmodule