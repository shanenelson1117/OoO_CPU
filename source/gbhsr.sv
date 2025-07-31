// Author: Shane Nelson
// Project: OoO CPU
// File: Global Branch History Shift Register

module gbhsr (
    input logic clk, reset, update, valid_in,
    output logic [9:0] history
);
    logic [9:0] d;
    genvar i;

    assign d = valid_in ? {history[8:0], update} : history;

    generate 
        for (i = 0; i < 10; i++) begin:gbhsr_dffs
            D_FF bit (.d(d[i]), .q(history[i]), .clk, .reset);
        end
    endgenerate

endmodule