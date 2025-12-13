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

# Flags
IV_FLAGS = -g2012 -Wall

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

# Auto-resolve paths
SOURCES = $(addprefix $(SRC_DIR)/, $(PROJECT_SRCS))
TESTBENCH = $(TB_DIR)/$(TEST).v
OUT_FILE = $(BUILD_DIR)/$(TEST).out
VCD_FILE = $(BUILD_DIR)/$(TEST).vcd

# ==========================================
# --- 3. TARGETS ---
# ==========================================

.PHONY: all run view clean help

# Default target
all: run

# Ensure build directories exist
$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

# --- SIMULATION ---

# "run" now handles Compiling AND Executing
run: $(BUILD_DIR)
	@echo "$(GREEN)========================================$(NC)"
	@echo "$(BLUE)  Compiling ($(TEST))...$(NC)"
	@echo "$(GREEN)========================================$(NC)"
	$(IV) $(IV_FLAGS) -o $(OUT_FILE) -I $(SRC_DIR) $(TESTBENCH) $(SOURCES)
	@echo "$(YELLOW) Compilation Done. Output at $(OUT_FILE)$(NC)"
	@echo "$(GREEN)========================================$(NC)"
	@echo "$(BLUE)  Running Simulation...$(NC)"
	$(VVP) $(OUT_FILE)
	@echo "$(YELLOW)  Done. Waveform generated at $(VCD_FILE)$(NC)" 
	@echo "$(GREEN)========================================$(NC)"

# View Waveforms
view: 
	@if [ -f $(VCD_FILE) ]; then \
		echo "  Opening Waveform..."; \
		$(GTKWAVE) $(VCD_FILE) & \
	else \
		echo "Error: $(VCD_FILE) not found. Run 'make run' first."; \
	fi

# --- UTILS ---

clean:
	@echo "  Cleaning build files..."
	rm -rf $(BUILD_DIR) $(SYNTH_DIR)

help:
	@echo "Usage:"
	@echo "  make run TEST=tb_name    -> Run specific testbench"
	@echo "  make view TEST=tb_name   -> View waveforms"
	@echo "  make clean               -> Remove artifacts"