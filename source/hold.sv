`include "structs.sv"

module hold (
  input clk, reset,
  input pipe_in_t pipe_out,
  input stall,
  output pipe_in_t hold_out,
  output pc_pipe_stall,
  output logic [4:0] rs1, rs2,
  output logic issue_csr_op,
  output logic [CSR_BITS:0] csr_read_select
);  
    import structs_pkg::*;
      // Handshake with pipeline reg to not advance instruction on stall
    typedef enum logic [0:0] { S_EMPTY=1'b0, S_HOLD=1'b1 } state_t;
    state_t ps, ns;

    // Latched instruction and metadata
    pipe_in_t instr_hold;

    always_ff @(posedge clk) begin
        if (reset) begin
            ps <= S_EMPTY;
            instr_hold <= '0;
        end else begin
            ps <= ns;
            // Capture the instruction when first entering HOLD
            if (ps == S_EMPTY && ns == S_HOLD) begin
                instr_hold <= pipe_out;
            end
        end
    end

    // Next state logic
    always_comb begin
        ns = ps;
        case (ps)
            S_EMPTY: if (stall) ns = S_HOLD;
            S_HOLD : if (!stall) ns = S_EMPTY;
        endcase
    end

    // Stall signal comes from registered state
    assign pc_pipe_stall = (ps == S_HOLD);

    assign hold_out = (ps == S_HOLD) ? instr_hold : pipe_out;
    assign rs1 = hold_out.instruction[19:15];
    assign rs2 = hold_out.instruction[24:20];
    assign issue_csr_op = (hold_out.instruction[6:0] == 7'b1110011) && (hold_out.instruction[14:12] != 3'b000);
    assign csr_read_select = issue_csr_op ? index(hold_out.instruction[31:20]) : '1;

endmodule 
