typedef struct packed {
    logic [31:0] pc;
    logic [31:0] instruction;
    logic        prediction;
} pipe_in_t;
