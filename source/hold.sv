module hold (
  input clk, reset,
  input pipe_in_t pipe_out,
  input stall,
  output pipe_in_t hold_out,
  output pc_pipe_stall,
  output logic [4:0] rs1, rs2
);
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
    assign rs1 = hold_out;

endmodule 
