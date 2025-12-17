# ==========================================
# =                 MAKEFILE               =
# ==========================================

# --- 1. CONFIGURATION ---
PROJECT_SRCS = dco_nco.v pfd.v divider.v loop_filter.v pll_top.v

# Default testbench (Only list ONE here to avoid file path errors)
TEST ?= tb_pll_top

# Toolchain
IV = iverilog
VVP = vvp
GTKWAVE = gtkwave
YOSYS = yosys
VERILATOR = verilator

# Flags
IV_FLAGS = -g2012 -Wall
# -cc: C++ output, --exe: executable, --trace: VCD support, -j: parallel build
VERIL_FLAGS = -cc --exe --trace -Wall -j 4 

# Colors
GREEN = \033[0;32m
BLUE = \033[0;34m
YELLOW = \033[0;33m
NC = \033[0m

# --- 2. PATHS ---
SRC_DIR = src
TB_DIR = test
BUILD_DIR = build
SYNTH_DIR = synth
# Directory for Verilator artifacts (to keep build clean)
V_OBJ_DIR = $(BUILD_DIR)/verilator_obj

# Auto-resolve paths
SOURCES = $(addprefix $(SRC_DIR)/, $(PROJECT_SRCS))
TESTBENCH = $(TB_DIR)/$(TEST).v
OUT_FILE = $(BUILD_DIR)/$(TEST).out
VCD_FILE = $(BUILD_DIR)/$(TEST).vcd

# ==========================================
# --- 3. TARGETS ---
# ==========================================

.PHONY: all run view clean help verilator-dco

# Default target
all: run

# Ensure build directories exist
$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

# --- ICARUS VERILOG SIMULATION (Standard) ---

# "run" now handles Compiling AND Executing
run: $(BUILD_DIR)
	@echo "$(GREEN)========================================$(NC)"
	@echo "$(BLUE)  [Icarus] Compiling ($(TEST))...$(NC)"
	@echo "$(GREEN)========================================$(NC)"
	$(IV) $(IV_FLAGS) -o $(OUT_FILE) -I $(SRC_DIR) $(TESTBENCH) $(SOURCES)
	@echo "$(YELLOW) Compilation Done. Output at $(OUT_FILE)$(NC)"
	@echo "$(GREEN)========================================$(NC)"
	@echo "$(BLUE)  [Icarus] Running Simulation...$(NC)"
	$(VVP) $(OUT_FILE)
	@echo "$(YELLOW)  Done. Waveform generated at $(VCD_FILE)$(NC)" 
	@echo "$(GREEN)========================================$(NC)"

# --- 4. VERILATOR SIMULATION ---

# Target: make verilator-dco
verilator-dco: $(BUILD_DIR)
	@echo "$(GREEN)========================================$(NC)"
	@echo "$(BLUE)  [Verilator] processing DCO...$(NC)"
	@echo "$(GREEN)========================================$(NC)"
	
	# 1. Run Verilator
	# We use $(abspath ...) to fix the "No rule to make target" error.
	# This ensures the generated Makefile sees the full path to source files.
	$(VERILATOR) $(VERIL_FLAGS) \
		--Mdir $(V_OBJ_DIR) \
		-I$(SRC_DIR) \
		-o ../dco_sim \
		$(abspath $(SRC_DIR)/dco_nco.v) \
		$(abspath $(TB_DIR)/dco_nco_tb.cpp)

	# 2. Compile the C++ binary
	@echo "$(BLUE)  [Verilator] Compiling C++ Model...$(NC)"
	$(MAKE) -C $(V_OBJ_DIR) -f Vdco_nco.mk

	@echo "$(GREEN)========================================$(NC)"
	@echo "$(BLUE)  [Verilator] Running Executable...$(NC)"
	@echo "$(GREEN)========================================$(NC)"
	
	# 3. Run the resulting executable
	$(BUILD_DIR)/dco_sim
	
	@echo "$(YELLOW)  Done. If enabled, waveform is at waveform.vcd$(NC)"


# Target: make verilator-div
verilator-div: $(BUILD_DIR)
	@echo "$(GREEN)========================================$(NC)"
	@echo "$(BLUE)  [Verilator] processing Divider...$(NC)"
	@echo "$(GREEN)========================================$(NC)"
	
	# 1. Run Verilator
	$(VERILATOR) $(VERIL_FLAGS) \
		--Mdir $(V_OBJ_DIR) \
		-I$(SRC_DIR) \
		-o ../div_sim \
		$(abspath $(SRC_DIR)/divider.v) \
		$(abspath $(TB_DIR)/divider_tb.cpp)

	# 2. Compile C++
	@echo "$(BLUE)  [Verilator] Compiling C++ Model...$(NC)"
	$(MAKE) -C $(V_OBJ_DIR) -f Vdivider.mk

	@echo "$(GREEN)========================================$(NC)"
	@echo "$(BLUE)  [Verilator] Running Executable...$(NC)"
	@echo "$(GREEN)========================================$(NC)"
	
	# 3. Run Executable
	$(BUILD_DIR)/div_sim

# Target: make verilator-filter
verilator-filter: $(BUILD_DIR)
	@echo "$(GREEN)========================================$(NC)"
	@echo "$(BLUE)  [Verilator] Testing Loop Filter...$(NC)"
	@echo "$(GREEN)========================================$(NC)"
	
	$(VERILATOR) $(VERIL_FLAGS) \
		--Mdir $(V_OBJ_DIR) \
		-I$(SRC_DIR) \
		-o ../filter_sim \
		$(abspath $(SRC_DIR)/loop_filter.v) \
		$(abspath $(TB_DIR)/loop_filter_tb.cpp)

	$(MAKE) -C $(V_OBJ_DIR) -f Vloop_filter.mk

	@echo "$(GREEN)Running Simulation...$(NC)"
	$(BUILD_DIR)/filter_sim

# Target: make verilator-chain
verilator-chain: $(BUILD_DIR)
	@echo "$(GREEN)========================================$(NC)"
	@echo "$(BLUE)  [Verilator] Testing Filter->DCO->Div...$(NC)"
	@echo "$(GREEN)========================================$(NC)"
	
	$(VERILATOR) $(VERIL_FLAGS) \
		--Mdir $(V_OBJ_DIR) \
		--top-module chain \
		-I$(SRC_DIR) \
		-o ../chain_sim \
		$(abspath $(SRC_DIR)/loop_filter.v) \
		$(abspath $(SRC_DIR)/dco_nco.v) \
		$(abspath $(SRC_DIR)/divider.v) \
		$(abspath $(SRC_DIR)/chain.v) \
		$(abspath $(TB_DIR)/chain_tb.cpp)

	$(MAKE) -C $(V_OBJ_DIR) -f Vchain.mk

	@echo "$(GREEN)Running Simulation...$(NC)"
	$(BUILD_DIR)/chain_sim

# --- UTILS ---

# View Waveforms
view: 
	@if [ -f $(VCD_FILE) ]; then \
		echo "  Opening Waveform..."; \
		$(GTKWAVE) $(VCD_FILE) & \
	else \
		echo "Error: $(VCD_FILE) not found. Run 'make run' first."; \
	fi

clean:
	@echo "  Cleaning build files..."
	rm -rf $(BUILD_DIR) $(SYNTH_DIR) waveform.vcd

help:
	@echo "Usage:"
	@echo "  make run TEST=tb_name     -> Run Icarus Verilog simulation"
	@echo "  make verilator-dco        -> Run Verilator DCO simulation"
	@echo "  make view TEST=tb_name    -> View waveforms"
	@echo "  make clean                -> Remove artifacts"