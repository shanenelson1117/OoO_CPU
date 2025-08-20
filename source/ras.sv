module ras #(
    parameter DEPTH = 16         
)(
    input  logic             clk,
    input  logic             reset,
    input  logic             push,          // push a return address
    input  logic             pop,           // pop a return address
    input  logic [31:0] ras_update,     // address to push
    input  logic     mispredicted,         // restore pointer (flush speculative entries)
    input  logic [3:0] flush_ptr, // pointer to restore on flush
    output logic [31:0] ras_new_pc,           // top of stack
    output logic [3:0] ptr   // current pointer
);

    logic [WIDTH-1:0] stack [DEPTH-1:0];
    logic [3:0] sp, np;

    always_comb begin
        if (push & ~pop & ~full) begin
            np = sp + 1;
        end else if (~push & pop & ~full) begin
            np = sp - 1;
        end else if (push && pop) begin
            // simultaneous push & pop: pointer unchanged, update top
            np = sp;
        end

    // push / pop logic
    always_ff @(posedge clk or posedge reset) begin
        if (reset) begin
            sp <= 0;
        end else if (mispredicted) begin
            sp <= flush_ptr;
        end else begin
            // normal push/pop
            if (push & ~pop & ~full) begin
                stack[sp] <= push_addr;
                sp <= np;
            end else if (~push & pop & ~full) begin
                sp <= np;
            end else if (push && pop) begin
                // simultaneous push & pop: pointer unchanged, update top
                stack[sp] <= push_addr;
            end
        end
    end

    // output top of stack
    assign ras_new_pc = stack[sp];
    assign ptr = np;
    assign full = sp == 4'b1111;

endmodule
