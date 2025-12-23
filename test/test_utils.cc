#include <fstream>
#include <vector>
#include <cstdint>
#include <iostream>
#include <iomanip>

#include "../obj_dir/Vcore.h"     // top-level module
#include "verilated.h"
#include <cassert>
#include "test_utils.h"

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