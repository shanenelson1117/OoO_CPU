// Author: Shane Nelson
// Project: OoO CPU
// File: JALR queue
// Stage: Execute

`include "structs.svh"


module jalrq #(parameter DEPTH = 4) (
    input  logic             clk,
    input  logic             reset,         // Active high reset
    input  logic             rd_en,        // Dequeue request, needs to come from commit unit
    input  CDB_packet_t      CDB_in,       // Common Data Bus input
    input  jalrq_packet_t      din,          // Entry to enqueue

    output logic             full,
    output logic             head_ready,
    output logic [31:0]     jalr_actual_address, jalr_taken_address
);

    logic [1:0] wptr, rptr;
    logic empty;

    assign wr_en = din.valid;
    jalrq_packet_t jalrq_data [DEPTH];

    // Write logic
    always_ff @(posedge clk) begin
        if (reset) begin
            wptr <= 0;
            for (int i = 0; i < DEPTH; i++) begin
                jalrq_data[i].valid <= 0;
            end
        end else if (wr_en && !full) begin
            jalrq_data[wptr] <= din;
            wptr <= (wptr == DEPTH - 1) ? 0 : wptr + 1;
        end
    end

    // CDB forwarding logic
    always_ff @(posedge clk) begin
        if (~reset) begin
            for (int i = 0; i < DEPTH; i++) begin
                // Forward store result
                if ((jalrq_data[i].Q_address == CDB_in.dest_ROB_entry) && (jalrq_data[i].Q_address != 4'b0000) && ~(CDB_in.load_step1)) begin
                    jalrq_data[i].Q_address <= 4'b0000;
                    jalrq_data[i].jalr_actual_address <= CDB_in.result;
                end
            end
        end
    end

    // read logic 
    assign dout = jalrq_data[rptr];

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
    assign head_ready  = ~empty & (jalrq_data[rptr].Q_address == 4'b0000) & jalrq_data[rptr].valid;
    assign jalr_actual_address = jalrq_data[rptr].jalr_actual_address + jalrq_data[rptr].imm;
    assign jalr_taken_address = jalrq_data[rptr].jalr_taken_address;

endmodule
