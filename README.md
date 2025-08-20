# OoO_CPU
This project is an Out of Order Execution processor implemented using Tomasulo's algorithm and speculative execution. The processor is based on a subset of the RISC-V architecture, implementing the entire base RV32I instruction set as well as a subset of the M extension. I implement speculative execution with a (10,2) correlating branch predictor, return address stack, and FIFO reorder buffer (ROB). The use of reservation stations and a register-status register along with Tomasulo's algorithm allows the processor to execute long running multiplication and division instructions while progressing on other (shorter running) instructions. Before allowing instructions after a branch to change architectural state (register/memory values) the processor ensures that the branch was correctly predicted, this process is facilitated by the ROB which is implemented as a synchronous circular FIFO queue which holds instructions to be committed in program order. 

## Instructions
The processor is capable of executing: The [RV32I Base Integer Instruction Set](https://riscv-software-src.github.io/riscv-unified-db/manual/html/isa/isa_20240411/chapters/rv32.html) as well as the M extension instructions `MUL, MULH, DIV, REMU`. The processor cannot run the `FENCE` instruction and will treat this as a NOP. 

## Files
`out_of_order.sv` is the top level module. All modules used by the top level are included in the "source" folder, including the testbench, `tl_test.sv`.
The benchmark riscv machine code files can be found in "source/benchmarks".

## Benchmarks
Included are a set of benchmarks, which when run by the testbench, validate the processors correctness. To change which testbench is run, edit `instructmem.sv` to change the included file to be the chosen benchmark. Also change the testbench to include the correct register assertions and necessary amount of cycles. Included is a modelsim `runlab.do` file and necessary wave files.
