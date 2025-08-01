typedef struct packed {
    logic [31:0] pc;
    logic [31:0] instruction;
    logic prediction;
    logic branch;
    logic jump;
} pipe_in_t;
