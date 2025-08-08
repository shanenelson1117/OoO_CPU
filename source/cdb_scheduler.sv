// Author: Shane Nelson
// Project: OoO CPU
// File: Common Data Bus Scheduler 

`include "structs.svh"

module cdb_scheduler (
    input logic [4:0] valid_out_bus, // which fu's are ready?
    input CDB_packet_t adder_0_out, // FU cdb packet outputs 
    input CDB_packet_t adder_1_out,
    input CDB_packet_t mult_out,
    input CDB_packet_t div_out,
    input CDB_packet_t mem_out,
    output CDB_packet_t new_CDB, // chosen CDB
    output logic [4:0] yummi_in_bus // FU handshake signals
);
    always_comb begin
        // first send load packet
        if (valid_out_bus[4]) begin
            new_CDB = mem_out;
            yummi_in_bus = 5'b10000;
        end
        // Then div
        else if (valid_out_bus[3]) begin
            new_CDB = div_out;
            yummi_in_bus = 5'b01000;
        end
        // then mult
        else if (valid_out_bus[2]) begin
            new_CDB = mult_out;
            yummi_in_bus = 5'b00100;
        end
        // lastly adders
        else if (valid_out_bus[1]) begin
            new_CDB = adder_1_out;
            yummi_in_bus = 5'b00010;
        end
        else if (valid_out_bus[0]) begin
            new_CDB = adder_0_out;
            yummi_in_bus = 5'b00001;
        end
        // if no FU's are ready send a bogus packet
        else begin
            new_CDB.dest_ROB_entry = '0;
            new_CDB.result = '0;
            new_CDB.branch_result = '0;
            new_CDB.from_memory = '0;
            yummi_in_bus = '0;
        end
    end

endmodule