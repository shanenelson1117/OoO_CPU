from pathlib import Path

# Create example RISC-V assembly programs as .S files
programs = {
    "program1_arithmetic_memory.S": """
# Program 1: Arithmetic + Load/Store
ADDI x1, x0, 10     # x1 = 10
ADDI x2, x0, 5      # x2 = 5
ADD  x3, x1, x2     # x3 = 15
SUB  x4, x1, x2     # x4 = 5
MUL  x5, x1, x2     # x5 = 50
MULH x6, x1, x2     # x6 = 0 (upper 32 bits of 10 * 5)

SW   x3, 0(x0)      # mem[0] = 15
LW   x7, 0(x0)      # x7 = mem[0] = 15
""",

    "program2_div_rem.S": """
# Program 2: Division and Remainder
ADDI x1, x0, 22     # x1 = 22
ADDI x2, x0, 6      # x2 = 6
DIV  x3, x1, x2     # x3 = 3
REMU x4, x1, x2     # x4 = 4
""",

    "program3_branches.S": """
# Program 3: Branches (BEQ, BNE, BLT)
ADDI x1, x0, 5      # x1 = 5
ADDI x2, x0, 5      # x2 = 5
ADDI x3, x0, 7      # x3 = 7
ADDI x4, x0, 0      # x4 = 0

BEQ  x1, x2, label1     # taken
ADDI x4, x0, 1          # skipped

label1:
BNE  x1, x3, label2     # taken
ADDI x4, x0, 2          # skipped

label2:
BLT  x2, x3, label3     # taken
ADDI x4, x0, 3          # skipped

label3:
ADDI x5, x0, 42         # executed
""",

    "program4_jal.S": """
# Program 4: JAL (Jump and Link)
ADDI x1, x0, 99

JAL  x5, label       # jump to label, x5 = return address
ADDI x1, x0, 0       # skipped

label:
ADDI x2, x0, 42
""",

    "program5_all_in_one.S": """
# Program 5: All-in-One
ADDI x1, x0, 6       # x1 = 6
ADDI x2, x0, 2       # x2 = 2
MUL  x3, x1, x2      # x3 = 12
DIV  x4, x3, x2      # x4 = 6
REMU x5, x3, x2      # x5 = 0
SW   x3, 0(x0)       # mem[0] = 12
LW   x6, 0(x0)       # x6 = 12
BEQ  x4, x6, next    # taken
ADDI x7, x0, 1       # skipped

next:
JAL x10, end
ADDI x8, x0, 1       # skipped

end:
ADDI x9, x0, 123     # final instruction
"""
}

# Save each file
output_dir = Path("../../Projects/programs")
output_dir.mkdir(parents=True, exist_ok=True)

for filename, code in programs.items():
    (output_dir / filename).write_text(code.strip() + "\n")

output_dir

