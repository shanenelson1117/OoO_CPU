# Out-of-Order RISC-V CPU

This project implements a superscalar-style out-of-order execution CPU for academic and learning purposes. The processor is written in SystemVerilog and targets the RISC-V RV32I ISA with partial support for the M extension. The design follows Tomasulo’s algorithm with speculative execution and in-order commit via a reorder buffer (ROB), enabling high instruction-level parallelism while maintaining precise architectural state.

## Key Features

- **Out-of-Order Execution**
  - Reservation stations and register-status table
  - Dynamic scheduling via Tomasulo’s algorithm
  - Overlapping long-latency operations (e.g., MUL/DIV) with independent instructions

- **Speculative Execution**
  - (10,2) correlating branch predictor
  - Return address stack (RAS)
  - Speculative instruction issue with precise recovery on misprediction

- **In-Order Commit**
  - FIFO reorder buffer (ROB) implemented as a synchronous circular queue
  - Ensures correct architectural state updates
  - Prevents speculative instructions from committing on branch misprediction

- **RISC-V ISA Support**
  - Full RV32I base integer instruction set
  - Partial M extension: `MUL`, `MULH`, `DIV`, `REMU`
  - Unsupported instructions (e.g., `FENCE`) are treated as NOPs due to the absence of caches and I/O devices

## Architecture Overview

The processor decouples instruction issue, execution, and commit:
- Instructions are issued speculatively into reservation stations
- Execution proceeds out of program order when operands become ready
- Results are written back to the ROB
- Instructions commit in program order once they reach the head of the ROB and all speculative conditions are resolved

This structure allows the processor to exploit instruction-level parallelism while preserving precise architectural semantics.

## Repository Structure

- `core.sv` – Top-level processor module
- `source/` – All supporting modules, including:
  - Reservation stations
  - ROB
  - Branch predictor
  - Register file and execution units
- `source/tl_test.sv` – Testbench
- `source/benchmarks/` – RISC-V machine code benchmarks
- `runlab.do` – ModelSim automation script
- Waveform files for debugging and verification

## Verification

The CPU is verified incrementally using diff-testing against Spike. A simulation-only trace buffer tracks architectural state per ROB entry, storing instruction metadata at issue and updating results via the CDB. Only instructions that commit are logged to a file, ensuring OoO execution does not affect trace order. This is facilitated using Spike, verilator, and a python testing scaffolding script.

## Future Work

Planned extensions include:
- RISC-V privileged ISA support (`ecall`, `ebreak`, `Zicsr`)
- A extension (atomics)
- Supervisor and machine privilege modes
- Memory hierarchy (caches and virtual memory)

`FENCE` is currently unimplemented due to the absence of a cache and I/O subsystem but is a natural extension once a memory system is added.

## Notes

This project was designed to explore realistic microarchitectural tradeoffs, including speculation, recovery, and precise state management, rather than serving as a minimal teaching CPU.
