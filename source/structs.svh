typedef struct packed {
    logic [31:0] pc;
    logic [31:0] instruction;
    logic prediction;
    logic branch;
    logic jump;
} pipe_in_t;

typedef struct packed {
    logic [2:0] Q_j, Q_k; // ROB entry # for unready operands (0 if operand is ready)
    logic [31:0] V_j, V_k; // Value of ready operands
    logic [2:0] ROB_entry; // What is the ROB entry associated with this instruction
    logic [1:0] ALU_op; // what operation must be performed
    logic [2:0] branch_type; // 00 (not branch) 01 (bne) 10 (beq) 11 (blt) control signals for alu
    logic [31:0] A; // holds immediate on first round 
    logic busy;
} rs_data_t;

typedef struct packed {

} load_queue_data_t;

typedef struct packed {
    logic [2:0] ROB_number; // entry number
    logic branch_pred; // branch tracking
    logic branch_result;
    logic [31:0] destination; // register or address (for branches this could be the pc of the branch)
    logic [31:0] value; // value to be written or se immediate for branches
    logic [1:0] type; // branch (00), store (01), register dest (10)
    // use type[1] as a regwrite signal, use type[0] as a memwrite signal
    logic ready;
} ROB_entry_t;

typedef struct packed {
    logic [2:0] dest_ROB_entry;
    logic [31:0] result;
    logic branch_result;
} CDB_packet_t;

typedef struct packed {
    logic [2:0] ROB_number;
    logic busy;
} reg_stat_t;
