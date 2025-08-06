// Author: Shane Nelson
// Project: OoO CPU
// File: Add/Sub functional unit
// Stage: Execute

`include "structs.svh"

module add (  // adder FSM
    input logic clk, reset, valid_in, yumi_in, ALU_op,
    input logic [3:0] rs_rob_entry, 
    input logic [31:0] rs1, rs2,
    input logic [1:0] branch_type, // branch controls, need sub to be high for any branch
    output logic valid_out, ready,
    output CDB_packet_t out
);
    logic [31:0] s, result;
    logic zero, negative, overflow, sub;
    logic b_inter;
    logic [3:0] curr_rob;

    adder_32bit adder (.*);

    assign bne = (branch_type == 2'b01) & valid_in;
    assign beq = (branch_type == 2'b10) & valid_in;
    assign blt = (branch_type == 2'b11) & valid_in;

    assign b_inter = (bne & ~zero) | (beq & zero) | (blt & (negative ^ overflow));

    always_ff @(posedge clk) begin
        if (reset | yumi_in) begin
            valid_out <= 0;
            b_taken <= 0;
            curr_rob <= 4'b0;
            consumed <= 0;
            sub <= 0;
            ready <= 1;
        end else if (valid_in) begin
            result <= s;
            valid_out <= 1;
            b_taken <= b_inter;
            curr_rob <= rs_rob_entry;
            consumed <= 1;
            sub <= ALU_op; 
            ready <= 0;
        end
    end

    assign out.dest_ROB_entry = curr_rob;
    assign out.result = result;
    assign out.branch_result = b_taken;
    assign out.from_memory = 1'b0;
endmodule

module adder_32bit ( // full adder
	input logic [31:0] rs1, rs2,
	input logic sub,
	output logic [31:0] s,
	output logic zero, overflow, negative
	);
	
	logic [32:0] c_bus;
	
	assign c_bus[0] = sub;

    assign b = sub ? b : ~b;
	
	genvar i;
	
	generate 
		for (i=0; i < 32; i++)begin:add_loop
			full_add addi (s[i], c_bus[i+1], a[i], b[i], c_bus[i]);
		end
	endgenerate 
	
	assign carry = c_bus[32];
	
	xor of (overflow, c_bus[32], c_bus[31]);
    zero_detect z_flag (.bus(s), .zero(zero));
	assign negative = s[31];
	
endmodule 

module full_add (sum, c_out, a, b, c_in); // full adder
	input logic a, b, c_in;
	output logic c_out, sum;
	
	logic i1, i2, i3;
	
	half_add add1 (i1, i2, a, b);
	half_add add2 (sum, i3, c_in, i1);
	
	or final_or (c_out, i2, i3);
	
endmodule

module half_add (sum, c_out, a, b); // half adder
	input logic a, b;
	output logic sum, c_out;
	
	xor sum_calc (sum, a, b);
	and carry_calc (c_out, a, b);

endmodule 

module zero_detect (
	input logic [63:0] bus,
	output logic zero
	);
	
	logic [15:0] inner_or;
	logic or1, or2, or3, or4, or_final;
	
	genvar i;
	
	generate
		for (i = 0; i < 16; i++) begin:or_loop
			or (inner_or[i], bus[4*i], bus[(4*i)+1], bus[(4*i)+2], bus[(4*i)+3]);
		end
	endgenerate
	
	or (or1, inner_or[0], inner_or[1], inner_or[2], inner_or[3]);
	or (or2, inner_or[4], inner_or[5], inner_or[6], inner_or[7]);
	or (or3, inner_or[8], inner_or[9], inner_or[10], inner_or[11]);
	or (or4, inner_or[12], inner_or[13], inner_or[14], inner_or[15]);
	
	or (or_final, or1, or2, or3, or4);
	not (zero, or_final);

endmodule 