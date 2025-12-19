// Author: Shane Nelson
// Project: OoO CPU
// File: two-bit saturated branch prediction fsm
// Stage: Fetch

`include "structs.svh"

module two_bit_predictor (
    output logic prediction,                // fsm output
    input logic update, valid, clk, reset   // was branch taken? are we updating state?
);

    enum logic [1:0] {N = 2'b00, n = 2'b01, t = 2'b10, T = 2'b11} ps, ns;

    always_ff @(posedge clk) begin
        if (reset) 
            ps <= n;
        else if (valid)
            ps <= ns;
    end

    // state transitions
    always_comb begin
        case (ps)
            N: ns = update ? n : N;
            n: ns = update ? t : N;
            t: ns = update ? T : n;
            T: ns = update ? T : t;
        endcase
    end

    assign prediction = ps[1];

endmodule
