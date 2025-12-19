// Shane Nelson
// Loads an ELF into a vector of 32bit integers
#ifndef LOAD_PROGRAM_H_
#define LOAD_PROGRAM_H_

// Takes a path to an ELF and loads it into a vector of integers
std::vector<uint32_t> load_program(const char* filename);

#endif  // LOAD_PROGRAM_H_

