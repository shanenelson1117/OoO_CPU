# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vcore.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Tracing output mode?  0/1 (from --trace-fst/--trace-saif/--trace-vcd)
VM_TRACE = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 1
# Tracing output mode in SAIF format?  0/1 (from --trace-saif)
VM_TRACE_SAIF = 0
# Tracing output mode in VCD format?  0/1 (from --trace-vcd)
VM_TRACE_VCD = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
  Vcore \
  Vcore___024root__0 \
  Vcore___024root__1 \
  Vcore___024root__2 \
  Vcore_core__0 \
  Vcore_add__0 \
  Vcore_cdb_scheduler__0 \
  Vcore_commit__0 \
  Vcore_csr__0 \
  Vcore_csr_regstat__0 \
  Vcore_fetch__0 \
  Vcore_fu_scheduler__0 \
  Vcore_hold__0 \
  Vcore_issue__0 \
  Vcore_jalrq__0 \
  Vcore_lsq__0 \
  Vcore_lsq_scheduler__0 \
  Vcore_memory__0 \
  Vcore_new_pc__0 \
  Vcore_pipeline_reg__0 \
  Vcore_regfile__0 \
  Vcore_regstat__0 \
  Vcore_rob__0 \
  Vcore_rs_module__0 \
  Vcore_shift__0 \
  Vcore_adder_32bit__0 \
  Vcore_bpb__0 \
  Vcore_bpb__1 \
  Vcore_bpb__2 \
  Vcore_datamem__0 \
  Vcore_divide__0 \
  Vcore_gbhsr__0 \
  Vcore_multiply__0 \
  Vcore_pc__0 \
  Vcore_ras__0 \
  Vcore_register__0 \
  Vcore_reg_status_entry__0 \
  Vcore_five_to_thirtytwo_decoder__0 \
  Vcore_rs__0 \
  Vcore_datapath__0 \
  Vcore_control__0 \
  Vcore_D_FF__0 \
  Vcore_full_add__0 \
  Vcore_demux_10_to_1024__0 \
  Vcore_datapath_dv__0 \
  Vcore_control_dv__0 \
  Vcore_instructmem__0 \
  Vcore_mult_datapath__0 \
  Vcore_mult_control__0 \
  Vcore_two_bit_predictor__0 \
  Vcore_two_bit_predictor__1 \
  Vcore_two_bit_predictor__2 \
  Vcore_two_bit_predictor__3 \
  Vcore_two_bit_predictor__4 \
  Vcore_two_bit_predictor__5 \
  Vcore_two_bit_predictor__6 \
  Vcore_two_bit_predictor__7 \
  Vcore_two_bit_predictor__8 \
  Vcore_two_bit_predictor__9 \
  Vcore_half_add__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
  Vcore__ConstPool_0 \
  Vcore___024root__Slow \
  Vcore___024root__0__Slow \
  Vcore___024root__1__Slow \
  Vcore_core__Slow \
  Vcore_core__0__Slow \
  Vcore___024unit__Slow \
  Vcore___024unit__0__Slow \
  Vcore_add__Slow \
  Vcore_add__0__Slow \
  Vcore_cdb_scheduler__Slow \
  Vcore_cdb_scheduler__0__Slow \
  Vcore_commit__Slow \
  Vcore_commit__0__Slow \
  Vcore_csr__Slow \
  Vcore_csr__0__Slow \
  Vcore_csr_regstat__Slow \
  Vcore_csr_regstat__0__Slow \
  Vcore_fetch__Slow \
  Vcore_fetch__0__Slow \
  Vcore_fu_scheduler__Slow \
  Vcore_fu_scheduler__0__Slow \
  Vcore_hold__Slow \
  Vcore_hold__0__Slow \
  Vcore_issue__Slow \
  Vcore_issue__0__Slow \
  Vcore_jalrq__Slow \
  Vcore_jalrq__0__Slow \
  Vcore_lsq__Slow \
  Vcore_lsq__0__Slow \
  Vcore_lsq_scheduler__Slow \
  Vcore_lsq_scheduler__0__Slow \
  Vcore_memory__Slow \
  Vcore_memory__0__Slow \
  Vcore_new_pc__Slow \
  Vcore_new_pc__0__Slow \
  Vcore_pipeline_reg__Slow \
  Vcore_pipeline_reg__0__Slow \
  Vcore_regfile__Slow \
  Vcore_regfile__0__Slow \
  Vcore_regstat__Slow \
  Vcore_regstat__0__Slow \
  Vcore_rob__Slow \
  Vcore_rob__0__Slow \
  Vcore_rs_module__Slow \
  Vcore_rs_module__0__Slow \
  Vcore_shift__Slow \
  Vcore_shift__0__Slow \
  Vcore_adder_32bit__Slow \
  Vcore_adder_32bit__0__Slow \
  Vcore_bpb__Slow \
  Vcore_bpb__0__Slow \
  Vcore_bpb__1__Slow \
  Vcore_datamem__Slow \
  Vcore_datamem__0__Slow \
  Vcore_divide__Slow \
  Vcore_divide__0__Slow \
  Vcore_gbhsr__Slow \
  Vcore_gbhsr__0__Slow \
  Vcore_multiply__Slow \
  Vcore_multiply__0__Slow \
  Vcore_pc__Slow \
  Vcore_pc__0__Slow \
  Vcore_ras__Slow \
  Vcore_ras__0__Slow \
  Vcore_register__Slow \
  Vcore_register__0__Slow \
  Vcore_reg_status_entry__Slow \
  Vcore_reg_status_entry__0__Slow \
  Vcore_five_to_thirtytwo_decoder__Slow \
  Vcore_five_to_thirtytwo_decoder__0__Slow \
  Vcore_rs__Slow \
  Vcore_rs__0__Slow \
  Vcore_datapath__Slow \
  Vcore_datapath__0__Slow \
  Vcore_control__Slow \
  Vcore_control__0__Slow \
  Vcore_D_FF__Slow \
  Vcore_D_FF__0__Slow \
  Vcore_full_add__Slow \
  Vcore_full_add__0__Slow \
  Vcore_demux_10_to_1024__Slow \
  Vcore_demux_10_to_1024__0__Slow \
  Vcore_datapath_dv__Slow \
  Vcore_datapath_dv__0__Slow \
  Vcore_control_dv__Slow \
  Vcore_control_dv__0__Slow \
  Vcore_instructmem__Slow \
  Vcore_instructmem__0__Slow \
  Vcore_mult_datapath__Slow \
  Vcore_mult_datapath__0__Slow \
  Vcore_mult_control__Slow \
  Vcore_mult_control__0__Slow \
  Vcore_two_bit_predictor__Slow \
  Vcore_two_bit_predictor__0__Slow \
  Vcore_two_bit_predictor__1__Slow \
  Vcore_two_bit_predictor__2__Slow \
  Vcore_structs_pkg__Slow \
  Vcore_structs_pkg__0__Slow \
  Vcore_half_add__Slow \
  Vcore_half_add__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
  Vcore__Dpi \
  Vcore__Trace__0 \
  Vcore__Trace__1 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
  Vcore__Syms \
  Vcore__Trace__0__Slow \
  Vcore__TraceDecls__0__Slow \
  Vcore__Trace__1__Slow \
  Vcore__Trace__2__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
  verilated \
  verilated_dpi \
  verilated_fst_c \
  verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \

# Verilated -*- Makefile -*-
