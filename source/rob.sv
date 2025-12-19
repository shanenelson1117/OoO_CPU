// Author: Shane Nelson
// Project: OoO CPU
// File: Reorder Buffer

`include "structs.svh"

module rob #(parameter DEPTH = 16) (
    input ROB_entry_t new_entry,    // from rs scheduler
    input CDB_packet_t CDB_in,      // Read CDB
    input logic clk, reset, 
    input logic rd_en,              // dequeue from commit unit
    input logic [3:0] Q_j, Q_k,     // Query(ies) from issue unit
    output ROB_entry_t head,        // Combinational read of head
    output logic head_ready,        // Are we ready to commit head?
    output logic full, empty,      
    output logic ROB_head_store,    // Is the head a store instruction
    output logic [3:0] ROB_entry,    // Available rob entry to issue unit
    output logic [31:0] rs1rob_data, rs2rob_data,   // Response to issue query(ies)
    output logic rs1rob_ready, rs2rob_ready
);
    logic [3:0] wptr, rptr;
    logic wr_en;
  

    ROB_entry_t rob_data [DEPTH];

    assign wr_en = new_entry.ROB_number == wptr;
    
    // Forwarding to issue stage logic
    assign rs1rob_data = rob_data[Q_j].value;
    assign rs2rob_data = rob_data[Q_k].value;
    assign rs1rob_ready = rob_data[Q_j].ready;
    assign rs2rob_ready = rob_data[Q_k].ready;

    // Write logic
    always_ff @(posedge clk) begin
        if (reset) begin
            wptr <= 1;
            for (int i = 0; i < DEPTH; i++) begin
                rob_data[i].ready <= 0;
            end
        end else if (wr_en && !full) begin
            rob_data[wptr] <= new_entry;
            wptr <= (wptr == DEPTH - 1) ? 1 : wptr + 1;
        end
    end

    // CDB forwarding logic
    always_ff @(posedge clk) begin
        if (~reset) begin
		  

            for (int i = 1; i < DEPTH; i++) begin
                if (wptr != i) begin
                // branch
                    if (rob_data[i].itype == 2'b00) begin
                        if ((rob_data[i].ROB_number == CDB_in.dest_ROB_entry) && (~CDB_in.load_step1)) begin
                            rob_data[i].branch_result <= CDB_in.branch_result;
                            rob_data[i].ready <= 1;
                        end
                    end
                    // load, reg_dest
                    else if (rob_data[i].itype[1]) begin
                        if ((rob_data[i].ROB_number == CDB_in.dest_ROB_entry) && (~CDB_in.load_step1)) begin
                            rob_data[i].value <= CDB_in.result;
                            rob_data[i].ready <= 1;
                        end
                    end
                end

            end
        end
    end

    // read logic 
    assign head = rob_data[rptr];

    always_ff @(posedge clk) begin
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
