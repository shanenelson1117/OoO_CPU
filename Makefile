# ========================
# User configuration
# ========================
TOP        := core
RTL_DIR    := source
SIM_DIR    := test
BUILD_DIR  := obj_dir

CXX        := g++
CXXFLAGS   := -O3 -std=c++17

VERILATOR  := verilator
VFLAGS     := -Wall --cc --exe --trace \
              -I$(RTL_DIR) \
              -O3

RTL_SRCS   := $(wildcard $(RTL_DIR)/*.sv)
TB_SRC     := $(SIM_DIR)/testbench.cc

# ========================
# Targets
# ========================

all: build

build:
	$(VERILATOR) $(VFLAGS) \
		--top-module $(TOP) \
		$(RTL_SRCS) \
		$(TB_SRC)
	$(MAKE) -C $(BUILD_DIR) -f V$(TOP).mk -j

run: build
	./$(BUILD_DIR)/V$(TOP)

clean:
	rm -rf $(BUILD_DIR)

.PHONY: all build run clean
