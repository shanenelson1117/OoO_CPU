#include <fstream>
#include <vector>
#include <cstdint>
#include <iostream>

#include "load_program.h"

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
