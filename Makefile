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

NOWARNFLAGS := -Wall --cc --exe --trace \
              -I$(RTL_DIR) \
              -O3 \
    					-Wno-DECLFILENAME -Wno-TIMESCALEMOD -Wno-UNUSEDSIGNAL -Wno-UNDRIVEN -Wno-WIDTHEXPAND -Wno-WIDTHTRUNC -Wno-VARHIDDEN

WAVEFLAGS := --trace-fst \
	-I$(RTL_DIR) \
  --trace-structs \
  --trace-max-array 1024 \
  --public-flat-rw \
  -O0 \
  --cc \
  --exe \
	-Wno-DECLFILENAME -Wno-TIMESCALEMOD -Wno-UNUSEDSIGNAL -Wno-UNDRIVEN -Wno-WIDTHEXPAND -Wno-WIDTHTRUNC -Wno-VARHIDDEN


RTL_SRCS   := $(wildcard $(RTL_DIR)/*.sv)
TB_SRC     := $(SIM_DIR)/testbench.cc
TB_WAVE_SRC := $(SIM_DIR)/testbench_incwaves.cc
UTIL_SRC := $(SIM_DIR)/test_utils.cc

# ========================
# Targets
# ========================

all: build-no-warn

wave:
	$(VERILATOR) $(WAVEFLAGS) \
		--top-module $(TOP) \
		$(RTL_SRCS) \
		$(TB_WAVE_SRC) \
		$(UTIL_SRC)
	$(MAKE) -C $(BUILD_DIR) -f V$(TOP).mk -j

debug:
	$(VERILATOR) $(VFLAGS) \
		--top-module $(TOP) \
		$(RTL_SRCS) \
		$(TB_SRC) \
		$(UTIL_SRC)
	$(MAKE) -C $(BUILD_DIR) -f V$(TOP).mk -j

build-no-warn:
	$(VERILATOR) $(NOWARNFLAGS) \
		--top-module $(TOP) \
		$(RTL_SRCS) \
		$(TB_SRC) \
		$(UTIL_SRC)
	$(MAKE) -C $(BUILD_DIR) -f V$(TOP).mk -j

run: build
	./$(BUILD_DIR)/V$(TOP)

clean:
	rm -rf $(BUILD_DIR) $(SIM_DIR)/*.txt $(SIM_DIR)/*.res

.PHONY: all build run clean
