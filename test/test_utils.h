// Shane Nelson
// Test utilities

#ifndef TEST_UTILS_H_
#define TEST_UTILS_H_

#define EI_NIDENT 16
#define PT_LOAD   1

// Load elf into sv mem
void load_elf(const char* filename, Vcore* top, uint32_t imem_base);

// Load a raw binary into a vector of 32-bit little-endian words
std::vector<uint32_t> load_program(const char* filename);

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

#endif  // TEST_UTILS_H_
