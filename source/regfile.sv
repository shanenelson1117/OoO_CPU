// Author: Shane Nelson
// Project: OoO CPU
// File: Register File
// Stage: Issue/Commit

`include "structs.sv"

module regfile (
    input logic [4:0] rs1, rs2, // registers to read, from issue stage rs scheduler
    input logic [4:0] rd, // register to write, from commit stage
    input logic RegWrite, // does committed instruction write to regfile?
    input clk, reset,
    input logic [31:0] WriteData,
    output logic [31:0] rs1_data, rs2_data
);  
    import structs_pkg::*;
    
    logic [31:0] enable_bus;
    logic [31:0] RegData [31:0];

    five_to_thirtytwo_decoder regfile_enable_decode (.sel(rd), .enable(RegWrite), .out(enable_bus));

    // Generate regs
    genvar i;

    assign RegData[0] = 32'b0;

    generate
        for (i = 1; i < 32; i++) begin:registers
            register reg_i (.clk, .reset, .enable(enable_bus[i]), .d(WriteData), .q(RegData[i]));
        end
    endgenerate

    // Reads
    always_comb begin
        rs1_data = RegData[rs1];
        rs2_data = RegData[rs2];
    end

endmodule

module register (
    input logic clk, reset, enable,
    input logic [31:0] d,
    output logic [31:0] q
);
    logic [31:0] q_reg;

    always_ff @(posedge clk) begin
        if (reset) 
            q_reg <= 32'b0;
        else if (enable)
            q_reg <= d;
    end

    assign q = q_reg;
endmodule
