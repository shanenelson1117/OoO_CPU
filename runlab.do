# Create work library
vlib work

# Compile Verilog
#     All Verilog files that are part of this design should have
#     their own "vlog" line below.
vlog "source/divide.sv"
vlog "source/add.sv"
vlog "source/branch_prediction_buffer.sv"
vlog "source/cdb_scheduler.sv"
vlog "source/commit.sv"
vlog "source/D_FF.sv"
vlog "source/datamem.sv"
vlog "source/fetch.sv"
vlog "source/fu_scheduler.sv"
vlog "source/gbhsr.sv"
vlog "source/instructmem.sv"
vlog "source/lsq.sv"
vlog "source/lsq_scheduler.sv"
vlog "source/memory.sv"
vlog "source/multiply.sv"
vlog "source/new_pc.sv"
vlog "source/out_of_order.sv"
vlog "source/pc.sv"
vlog "source/pipeline_reg.sv"
vlog "source/regfile.sv"
vlog "source/regstat.sv"
vlog "source/rob.sv"
vlog "source/rob_scheduler.sv"
vlog "source/rs.sv"
vlog "source/rs_scheduler.sv"
vlog "source/structs.svh"
vlog "source/tl_test.sv"
vlog "source/two_bit_predictor.sv"

# Call vsim to invoke simulator
#     Make sure the last item on the line is the name of the
#     testbench module you want to execute.
vsim -voptargs="+acc" -t 1ps -lib work tl_test

# Source the wave do file
#     This should be the file that sets up the signal window for
#     the module you are testing.
do waves/tl_wave.do

# Set the window types
view wave
view structure
view signals

# Run the simulation
run -all

# End
