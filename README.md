# OoO_CPU: Out-of-Order RV32IM Processor
## Overview
OoO_CPU is an Out-of-Order processor implementing the RISCVIM ISA. The design leverages Tomasulo’s algorithm and speculative execution to maximize instruction-level parallelism. Built on the RISC-V RV32I architecture, it supports the full base integer instruction set plus a subset of the M extension (MUL, MULH, DIV, REMU).
## Key Feautures:
* Out-of-Order Execution: Instructions can execute as soon as their operands are ready, improving pipeline utilization. This is facilitated with a common data bus, reg status table, and reservation stations.
* Branch Prediction: Branch instructions are predicted with a (10,2) correlating branch predictor, executed speculatively and validated via the ROB.
* Return Address Prediction: Jumps are predicted using a return address stack and validated via the ROB.
* Commit Logic: Ensures architectural state updates (registers/memory) occur in program order.
## Repository Structure:
* ```source/core.sv```: Top-level module representing one RISCV hart(core).
* ```source/```: All modules used by the top level module.
* ```design-docs/```: Documents laying out choices made and tradeoffs faced for recent additions to OoO_CPU.
* ```test/```: All resources used for testing the CPU, including testbenches and various tests and benchmarks. SEE ```test/README.md``` for more info on testing structure.
## Building OoO_CPU
To build the cpu run ```make build-no-warn``` this builds the verilator files and strips unnecessary warnings that prevent the build from succeeding. The output files will be in ```obj_dir/``` .
### Diff Testing vs. Spike
Script to be created later...

## Future Work
* Support for `ecall` and `ebreak` via the `zicsr` extension.
* Support for Supervisor (S) and Machine (M) mode privilege levels.
* Support for precise exceptions.
* Support for the A memory atomics instructions.
