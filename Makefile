# ==========================================
# =					MAKEFILE			   =
# ==========================================

# --- 1. CONFIGURATION ---
# List all your design source files here 
# Example: dco_nco.v pfd.v loop_filter.v
PROJECT_SRCS = dco_nco.v

# Default testbench to run if none is specified
# Usage: make run TEST=tb_pfd
TEST ?= tb_dco

# Toolchain
IV = iverilog
VVP = vvp
GTKWAVE = gtkwave
YOSYS = yosys

# Flags
# -g2012 : Use SystemVerilog 2012 standard
IV_FLAGS = -g2012 -Wall

# Colors
GREEN = \033[0;32m
BLUE = \033[0;34m
YELLOW = \033[0;33m
RED = \033[0;31m
NC = \033[0m

# --- 2. PATHS ---
SRC_DIR = src
TB_DIR = test
BUILD_DIR = build
SYNTH_DIR = synth

# Auto-resolve paths
SOURCES = $(addprefix $(SRC_DIR)/, $(PROJECT_SRCS))
TESTBENCH = $(TB_DIR)/$(TEST).v
OUT_FILE = $(BUILD_DIR)/$(TEST).out
VCD_FILE = $(BUILD_DIR)/$(TEST).vcd

# ==========================================
# --- 3. TARGETS ---
# ==========================================

.PHONY: all compile run view synth clean help

# Default: Compile and Run the specified TEST
all: run

# Ensure build directories exist
$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

$(SYNTH_DIR):
	mkdir -p $(SYNTH_DIR)

# --- SIMULATION ---

# Compile: Combines the specific testbench with ALL source files
test: $(BUILD_DIR)
	@echo "$(GREEN)========================================$(NC)"
	@echo "$(BLUE)  Compiling ($(TEST))...$(NC)"
	@echo "$(GREEN)========================================$(NC)"
	$(IV) $(IV_FLAGS) -o $(OUT_FILE) -I $(SRC_DIR) $(TESTBENCH) $(SOURCES)
	@echo "$(GREEN)========================================$(NC)"
	@echo "$(YELLOW) $(TEST) Done. Output at $(OUT_FILE)$(NC)"
	@echo "$(YELLOW) Running waveform viewer...$(NC)"
	@echo "$(GREEN)========================================$(NC)"
	$(VVP) $(OUT_FILE)
	@echo "$(GREEN)========================================$(NC)"
	@echo "$(YELLOW)  Done. Output at $(VCD_FILE)$(NC)"	
	@echo "$(GREEN)========================================$(NC)"
# Run: Executes the simulation
#run: compile
#	@echo "  Running Simulation..."
#	$(VVP) $(OUT_FILE)
#	@echo "  Done. Output at $(VCD_FILE)"

# View: Opens waveform (checks if VCD exists first)
#view: 
#	@if [ -f $(VCD_FILE) ]; then \
		echo "  Opening Waveform..."; \
		$(GTKWAVE) $(VCD_FILE) & \
	else \
		echo "Error: $(VCD_FILE) not found. Run 'make run' first."; \
	fi

# --- SYNTHESIS ---

# Scalable Synthesis Target (Yosys)
# This generates a netlist for the TOP MODULE of your design.
# Usage: make synth TOP=dco_nco
#TOP ?= dco_nco
#synth: $(SYNTH_DIR)
#	@echo "========================================"
#	@echo "  Synthesizing Top Module: $(TOP)..."
#	@echo "========================================"
#	$(YOSYS) -p "read_verilog $(SOURCES); synth -top $(TOP); write_verilog $(SYNTH_DIR)/$(TOP)_netlist.v"

# --- UTILS ---

clean:
	@echo "  Cleaning build files..."
	rm -rf $(BUILD_DIR) $(SYNTH_DIR)

help:
	@echo "Usage:"
	@echo "  make run TEST=tb_name    -> Run specific testbench (default: $(TEST))"
	@echo "  make view TEST=tb_name   -> View waveforms for specific test"
	@echo "  make synth TOP=mod_name  -> Synthesize specific module"
	@echo "  make clean               -> Remove all build artifacts"