# Coverting Hand Assembled Binaries to ELF
To run the hand compiled benchmarks on spike, we need to convert them into a loadable format:
```
riscv64-unknown-elf-as hand.s -o hand.o
riscv64-unknown-elf-ld hand.o -Ttext=0x0 -o hand.elf
spike hand.elf
```