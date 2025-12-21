// Author: Shane Nelson
// Project: OoO CPU
// File: Common Data Bus Scheduler 

`include "structs.sv"

module cdb_scheduler (
    input logic [5:0] valid_out_bus,
    input CDB_packet_t adder_0_out,
    input CDB_packet_t adder_1_out,
    input CDB_packet_t mult_out,
    input CDB_packet_t div_out,
    input CDB_packet_t mem_out,
    input CDB_packet_t shift_out,
    output CDB_packet_t new_CDB,
    output logic [5:0] yummi_in_bus
);
    always_comb begin
        // load packet
        if (valid_out_bus[4]) begin
            new_CDB = mem_out;
            yummi_in_bus = 6'b010000;
        end
        // shift packet
        else if (valid_out_bus[5]) begin
            new_CDB = shift_out;
            yummi_in_bus = 6'b100000;
        // div packet
        end
        else if (valid_out_bus[3]) begin
            new_CDB = div_out;
            yummi_in_bus = 6'b001000;
        end
        // mult packet
        else if (valid_out_bus[2]) begin
            new_CDB = mult_out;
            yummi_in_bus = 6'b000100;
        end
        // adder packets
        else if (valid_out_bus[1]) begin
            new_CDB = adder_1_out;
            yummi_in_bus = 6'b000010;
        end
        else if (valid_out_bus[0]) begin
            new_CDB = adder_0_out;
            yummi_in_bus = 6'b000001;
        end
        // no valid packets
        else begin
            new_CDB.dest_ROB_entry = '0;
            new_CDB.result = '0;
            new_CDB.branch_result = '0;
            yummi_in_bus = '0;
        end
    end

endmodule
