
`include "structs.sv"
// if the ROB head is a store, and the lsq head is ready, then write to dmem
// and flush ROB head
// if the lsq head is a load, then read from dmem and send the packet to the 
// cdb controller, ROB reads it from there are writes to regfile when at head

module lsq #(parameter DEPTH = 4) (
    input  logic             clk,
    input  logic             reset,         // Active high reset
    input  logic             wr_en,        // Enqueue request
    input  logic             rd_en,        // Dequeue request
    input  CDB_packet_t      CDB_in,       // Common Data Bus input
    input  lsq_packet_t      din,          // Entry to enqueue

    output logic             full,
    output logic             head_ready,
    output logic             head_load, empty, 
    output lsq_packet_t      dout          // combinational output
);
    import structs_pkg::*;
    
    logic [1:0] wptr, rptr;
    lsq_packet_t lsq_data [DEPTH];

    // Write logic
    always_ff @(posedge clk) begin
        if (reset) begin
            wptr <= 0;
            for (int i = 0; i < DEPTH; i++) begin
                lsq_data[i].address_valid <= 0;
            end
        end else if (wr_en && !full) begin
            lsq_data[wptr] <= din;
            wptr <= (wptr == DEPTH - 1) ? 0 : wptr + 1;
        end
    end

    // CDB forwarding logic
    always_ff @(posedge clk) begin
        if (~reset) begin
            for (int i = 0; i < DEPTH; i++) begin
                if (wptr != i) begin
                // Forward store result
                    if ((lsq_data[i].Q_store == CDB_in.dest_ROB_entry) && (lsq_data[i].Q_store != 4'b0000) && ~(CDB_in.load_step1)) begin
                        lsq_data[i].Q_store <= 4'b0000;
                        lsq_data[i].result <= CDB_in.result;
                    end
                    // Fill in computed load/store address
                    if ((lsq_data[i].ROB_entry == CDB_in.dest_ROB_entry) && ~lsq_data[i].address_valid && (CDB_in.load_step1)) begin
                        lsq_data[i].address <= CDB_in.result;
                        lsq_data[i].address_valid  <= 1'b1;
                    end
                end
            end
        end
    end

    // read logic 
    assign dout = lsq_data[rptr];

    always_ff @(posedge clk) begin
        if (reset) begin
            rptr <= 0;
        end else if (rd_en && !empty) begin
            rptr <= (rptr == DEPTH - 1) ? 0 : rptr + 1;
        end
    end

    // Status outputs
    assign full        = ((wptr + 1) % DEPTH) == rptr;
    assign empty       = (wptr == rptr);
    assign head_ready  = lsq_data[rptr].address_valid & (lsq_data[rptr].Q_store == 4'b0000);
    assign head_load   = lsq_data[rptr].load;

endmodule
