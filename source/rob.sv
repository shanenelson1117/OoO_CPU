// Author: Shane Nelson
// Project: OoO CPU
// File: Reorder Buffer

`include "structs.svh"
// This module is updated/finished but untested for SMT
/*
REVISED IDEA: HAVE EACH THREAD RESTART TO A DIFFERENT LOCATION. PARTITION ROB SO THREADS ONLY CAN ACCESS THEIR SPOT.
MAINTAIN TWO READ POINTERS AND TWO WRITE POINTERS. ON A ROLL BACK JUST HAVE THE WPTR RETURN TO ITS RESET POINT. NEED TO
CHANGE MOST OF THIS DESIGN
*/
module rob #(parameter DEPTH = 32) (
    input ROB_entry_t [1:0] new_entry, // from rs scheduler
    input CDB_packet_t CDB_in,
    input logic [3:0] [4:0] ROB_probe, // forward finished results to rs scheduler
    input logic clk, reset,
    input logic [1:0] mispredicted,
    input logic [1:0] rd_en,      // dequeue from commit unit
    output ROB_entry_t [1:0] head, // combinational read of the head
    output logic [1:0] head_ready,
    output logic [1:0] full,  // can ROB accept 0, 1, or 2 new entries
    output logic [1:0] empty, // will ROB be empty after 0, 1, or 2 commits
    output logic [1:0] ROB_head_store,
    output logic [1:0] [4:0] ROB_entry, // available rob entry to rs scheduler
    output logic [3:0] [31:0] ROB_probe_response
);
    logic [4:0] wptr0, wptr1, rptr0, rptr1;
    logic [1:0] wr_en;
  
    

    // rob data
    ROB_entry_t rob_data [DEPTH];

    assign wr_en[0] = new_entry[0].ROB_number == wptr0;
    assign wr_en[1] = new_entry[1].ROB_number == wptr1;


    // Write logic
    always_ff @(posedge clk) begin
        if (reset) begin
            wptr0 <= 1;
            wptr1 <= 16;
            for (int i = 0; i < DEPTH; i++) begin
                rob_data[i].ready <= 0;
            end
        end else begin
            if (mispredicted[0]) begin
                wptr0 <= 1;
                for (int i = 1; i < 16; i++) begin
                    rob_data[i].ready <= 0;
                end
            end else if (wr_en[0] && !full[0]) begin
                rob_data[wptr0] <= new_entry[0];
                wptr0 <= (wptr0 == 15) ? 1 : wptr0 + 1;
            end

            if (mispredicted[1]) begin
                wptr1 <= 16;
                for (int i = 16; i < DEPTH; i++) begin
                    rob_data[i].ready <= 0;
                end
            end else if (wr_en[1] && !full[1]) begin
                rob_data[wptr1] <= new_entry[1];
                wptr1 <= (wptr1 == DEPTH - 1) ? 16 : wptr1 + 1;
            end
        end
    end

    // CDB forwarding logic
    always_ff @(posedge clk) begin
        if (~reset) begin
		  

            for (int i = 1; i < DEPTH; i++) begin
                if (wptr != i) begin
                // branch
                    if (rob_data[i].itype == 2'b00) begin
                        if ((rob_data[i].ROB_number == CDB_in.dest_ROB_entry) && (~CDB_in.load_step1) && ~CDB_in.from_commit) begin
                            rob_data[i].branch_result <= CDB_in.branch_result;
                            rob_data[i].ready <= 1;
                        end
                    end
                    // load, reg_dest
                    else if (rob_data[i].itype[1]) begin
                        if ((rob_data[i].ROB_number == CDB_in.dest_ROB_entry) && (~CDB_in.load_step1) && ~CDB_in.from_commit) begin
                            rob_data[i].value <= CDB_in.result;
                            rob_data[i].ready <= 1;
                        end
                    end
                end

            end
        end
    end

    // read logic 
    assign head[0] = rob_data[rptr0];
    assign head[1] = rob_data[rptr1];

    // Answer issue stage forwarding request
    always_comb begin
        for (int i = 0; i < 4; i++) begin
            if (ROB_probe[i] != '0) begin
                ROB_probe_response[i] = rob_data[ROB_probe[i]].value;
            end else begin
                ROB_probe_response[i] = '0;
            end
        end
    end

    always_ff @(posedge clk) begin
        if (reset) begin
            rptr0 <= 1;
            rptr1 <= 16
        end 
        // move both rptr
        else begin
            if (rd_en[0] && !empty[0]) begin
                if (rptr0 == 15)
                rptr0 <= 1;  // wrap to 1 instead of 0
            else
                rptr0 <= rptr0 + 1;
            end
            
            if (rd_en[1] && !empty[1]) begin
                if (rptr1 == DEPTH - 1)
                    rptr1 <= 16;  // wrap to 1 instead of 0
                else
                    rptr1 <= rptr1 + 1;
            end
        end
    end

    // if not full send wptr to rs scheduler to enable renaming
    assign ROB_entry[0] = full[0] ? '0 : wptr0;
    assign ROB_entry[1] = full[1] ? '0 : wptr1;

    // Status outputs
    assign full[0] = ((wptr0 + 1 == 16 ? 1 : wptr0 + 1) == rptr0);
    assign full[1] = ((wptr1 + 1 == DEPTH ? 16 : wptr1 + 1) == rptr1);
    assign empty = {(wptr1 == rptr1), (wptr0 == rptr0)};
    assign head_ready  = {head[1].ready, head[0].ready};
    assign ROB_head_store = {head[1].itype == 2'b01, head[0].itype == 2'b01};

endmodule
