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
    logic [2:0] ALU_op; // what operation must be performed
    // 000: add, 001: sub, 100: mul, 101: mul_h, 011: div, 010: remu
    logic [1:0] branch_type; // 00 (not branch) 01 (bne) 10 (beq) 11 (blt) control signals for alu
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
    logic [1:0] type; // branch (00), store (01), register dest (10), load (11)
    // use type[1] as a regwrite signal
    logic [2:0] ROB_of_store_val;
    logic ready;
    //logic value_ready; unnecessary, if ROB_of_store != 0 then value is not ready
} ROB_entry_t;

typedef struct packed {
    logic [2:0] dest_ROB_entry;
    logic [31:0] result;
    logic branch_result;
    logic from_memory;
} CDB_packet_t;

typedef struct packed {
    logic [2:0] ROB_number;
    logic busy;
} reg_stat_t;

typedef struct packed {
    logic [1:0] branch_type;
    logic [2:0] ALU_op;
    logic [2:0] ROB_entry;
    logic [31:0] rs1;
    logic [31:0] rs2;
    logic valid_operands;
} rs_out_t;
