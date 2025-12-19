#include <fstream>
#include <vector>
#include <cstdint>
#include <iostream>
#include <iomanip>

#include "../obj_dir/Vcore.h"     // top-level module
#include "verilated.h"
#include <cassert>

#define EI_NIDENT 16
#define PT_LOAD   1
const int kCycles = 1000;

struct Elf32_Ehdr {
    uint8_t  e_ident[EI_NIDENT];
    uint16_t e_type;
    uint16_t e_machine;
    uint32_t e_version;
    uint32_t e_entry;
    uint32_t e_phoff;
    uint32_t e_shoff;
    uint32_t e_flags;
    uint16_t e_ehsize;
    uint16_t e_phentsize;
    uint16_t e_phnum;
    uint16_t e_shentsize;
    uint16_t e_shnum;
    uint16_t e_shstrndx;
};

struct Elf32_Phdr {
    uint32_t p_type;
    uint32_t p_offset;
    uint32_t p_vaddr;
    uint32_t p_paddr;
    uint32_t p_filesz;
    uint32_t p_memsz;
    uint32_t p_flags;
    uint32_t p_align;
};

// Takes a path to an ELF and loads it into a vector of integers
std::vector<uint32_t> load_program(const char* filename);
void load_elf(const char* filename, Vcore* top,uint32_t imem_base);

int main(int argc, char **argv) {

    Verilated::commandArgs(argc, argv);
    Vcore* top = new Vcore;

    std::ofstream trace_file(argv[2]);
    int cycles_ran = 0;

    load_elf(argv[1], top, 0x80000000);

    top->reset = 1;
    for (int i = 0; i < 5; i++) {  // adjust cycles as needed
        top->clk = 0; top->eval();
        top->clk = 1; top->eval();
    }

    top->reset = 0;

    while (cycles_ran < kCycles) {
        top->clk = 0;
        top->eval();       // falling edge
        top->clk = 1;
        top->eval();       // rising edge

        // Check if commit_valid is high
        if (top->valid_commit_out) {
            if (top->RegWrite_out) {
              trace_file << "core   0:"
                        << std::hex << std::setw(8) << "0x" << top->head_pc << " "
                        << std::dec << "x" << (int)top->rd_out<< " "
                        << std::hex << top->WriteData_out
                        << std::endl;
            } else {
              trace_file << "core   0:"
                        << std::hex << std::setw(8) << "0x" << top->head_pc << std::endl;
            }
        }
        cycles_ran++;
    }

    trace_file.close();
    delete top;
    return 0;
}


// Load a raw binary into a vector of 32-bit little-endian words
std::vector<uint32_t> load_program(const char* filename) {
    std::ifstream file(filename, std::ios::binary);
    if (!file.is_open()) {
        std::cerr << "Error opening file: " << filename << std::endl;
        return {};
    }

    std::vector<uint32_t> program;

    while (!file.eof()) {
        uint8_t bytes[4] = {0};
        file.read(reinterpret_cast<char*>(bytes), 4);
        if (file.gcount() == 4) {
            uint32_t instr = bytes[0] | (bytes[1]<<8) | (bytes[2]<<16) | (bytes[3]<<24);
            program.push_back(instr);
        }
    }

    return program;
}

void load_elf(
    const char* filename,
    Vcore* top,
    uint32_t imem_base
) {
    std::ifstream elf(filename, std::ios::binary);
    if (!elf) {
        std::cerr << "Failed to open ELF: " << filename << "\n";
        std::exit(1);
    }

    Elf32_Ehdr ehdr;
    elf.read(reinterpret_cast<char*>(&ehdr), sizeof(ehdr));

    // Basic ELF checks
    assert(ehdr.e_ident[0] == 0x7f);
    assert(ehdr.e_ident[1] == 'E');
    assert(ehdr.e_ident[2] == 'L');
    assert(ehdr.e_ident[3] == 'F');
    assert(ehdr.e_ident[4] == 1); // ELFCLASS32
    assert(ehdr.e_ident[5] == 1); // little endian

    // Read program headers
    elf.seekg(ehdr.e_phoff);
    std::vector<Elf32_Phdr> phdrs(ehdr.e_phnum);
    elf.read(reinterpret_cast<char*>(phdrs.data()),
             ehdr.e_phnum * sizeof(Elf32_Phdr));

    for (const auto& ph : phdrs) {
        if (ph.p_type != PT_LOAD)
            continue;

        std::vector<uint8_t> segment(ph.p_filesz);
        elf.seekg(ph.p_offset);
        elf.read(reinterpret_cast<char*>(segment.data()), ph.p_filesz);

        uint32_t vaddr = ph.p_vaddr;
        uint32_t offset = vaddr - imem_base;

        std::cout << "Loading segment @ VA 0x"
                  << std::hex << vaddr
                  << " (" << ph.p_filesz << " bytes)\n";

        // Write word-by-word
        for (uint32_t i = 0; i < ph.p_filesz; i += 4) {
            uint32_t word = 0;
            for (int b = 0; b < 4 && (i + b) < ph.p_filesz; b++) {
                word |= segment[i + b] << (8 * b);
            }

            uint32_t word_addr = (offset + i) >> 2;

            top->mem_wr_addr = word_addr;
            top->mem_wr_data = word;
            top->mem_wr_en   = 1;

            top->clk = 0; top->eval();
            top->clk = 1; top->eval();
        }
    }

    top->mem_wr_en = 0;

    std::cout << "ELF loaded successfully\n";
}
