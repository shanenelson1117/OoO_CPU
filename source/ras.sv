module ras (
    input  logic clk,
    input  logic reset,
    input  logic  push,          // push a return address
    input  logic  pop,           // pop a return address
    input  logic [31:0] ras_update,     // address to push
    input  logic mispredicted,         // restore pointer (flush speculative entries)
    input  logic [3:0] flush_ptr, // pointer to restore on flush
    output logic [31:0] ras_new_pc,           // top of stack
    output logic [3:0] ptr   // current pointer
);

    logic [31:0] stack [15:0];
    logic [3:0] sp;
    logic full, empty;

    always_ff @(posedge clk) begin
        if (reset) begin
            sp <= 0; // empty stack
        end else if (mispredicted) begin
            sp <= flush_ptr;
        end else begin
            if (push && !pop && !full) begin
                sp <= sp + 1;
                stack[sp + 1] <= ras_update;
            end else if (!push && pop && !empty) begin
                sp <= sp - 1;
            end else if (push && pop) begin
                stack[sp] <= ras_update; // overwrite top
            end
        end
    end

    always_comb begin
        if (reset)
            ras_new_pc = 32'h0;
        else if (mispredicted)
            ras_new_pc = stack[flush_ptr-1];
        else
            ras_new_pc = stack[sp];
    end
    

    assign ptr = sp;
    assign empty = sp == 4'b0;
    assign full = sp == 4'b1111;

endmodule
