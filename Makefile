# ==========================================
# =                 MAKEFILE               =
# ==========================================

# Default PDK if none is specified
PDK ?= sky130A

# --- 1. CONFIGURATION ---
PROJECT_SRCS = dco_nco.v pfd.v divider.v loop_filter.v pll_top.v
TEST ?= tb_pll_top

# Toolchain
IV = iverilog
VVP = vvp
GTKWAVE = gtkwave
VERILATOR = verilator

# Paths
SRC_DIR = src
TB_DIR = test
BUILD_DIR = build

# --- LIBRELANE / OPENLANE CONFIGURATION ---
# The absolute path where LibreLane is installed
LIBRELANE_DIR = /Users/refikyalcin/vlsi/tools/librelane

# The absolute path to your project's config file
# $(abspath ...) ensures it works even when called from inside other folders
OL_CONFIG = $(abspath openlane/config.yaml)

# Flags
IV_FLAGS = -g2012 -Wall
VERIL_FLAGS = -cc --exe --trace -Wall -j 4 

# Colors
GREEN = \033[0;32m
BLUE = \033[0;34m
YELLOW = \033[0;33m
NC = \033[0m

# Auto-resolve paths
SOURCES = $(addprefix $(SRC_DIR)/, $(PROJECT_SRCS))
TESTBENCH = $(TB_DIR)/$(TEST).v
OUT_FILE = $(BUILD_DIR)/$(TEST).out
VCD_FILE = $(BUILD_DIR)/$(TEST).vcd

# ==========================================
# --- 3. TARGETS ---
# ==========================================

.PHONY: all run clean help verilator-dco verilator-div verilator-filter verilator-pfd verilator-pll synth

# Default target
all: run

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

# --- ICARUS VERILOG SIMULATION ---
run: $(BUILD_DIR)
	@echo "$(GREEN)========================================$(NC)"
	@echo "$(BLUE)  [Icarus] Compiling ($(TEST))...$(NC)"
	@echo "$(GREEN)========================================$(NC)"
	$(IV) $(IV_FLAGS) -o $(OUT_FILE) -I $(SRC_DIR) $(TESTBENCH) $(SOURCES)
	@echo "$(YELLOW) Compilation Done. Output at $(OUT_FILE)$(NC)"
	@echo "$(BLUE)  [Icarus] Running Simulation...$(NC)"
	cd $(BUILD_DIR) && $(VVP) $(notdir $(OUT_FILE))
	@echo "$(YELLOW)  Done. Waveform generated in $(BUILD_DIR)$(NC)" 

# --- 4. VERILATOR SIMULATION ---

verilator-divider: $(BUILD_DIR)
	@echo "$(GREEN)=== Testing Divider ===$(NC)"
	mkdir -p $(BUILD_DIR)/verilator_divider
	$(VERILATOR) $(VERIL_FLAGS) --Mdir $(BUILD_DIR)/verilator_divider -I$(SRC_DIR) -o ../divider_sim $(abspath $(SRC_DIR)/divider.v) $(abspath $(TB_DIR)/divider_tb.cpp)
	$(MAKE) -C $(BUILD_DIR)/verilator_divider -f Vdivider.mk
	@echo "$(BLUE)Running...$(NC)"
	cd $(BUILD_DIR) && ./divider_sim

verilator-dco: $(BUILD_DIR)
	@echo "$(GREEN)=== Testing DCO ===$(NC)"
	mkdir -p $(BUILD_DIR)/verilator_dco
	$(VERILATOR) $(VERIL_FLAGS) --Mdir $(BUILD_DIR)/verilator_dco -I$(SRC_DIR) -o ../dco_sim $(abspath $(SRC_DIR)/dco_nco.v) $(abspath $(TB_DIR)/dco_func_tb.cpp)
	$(MAKE) -C $(BUILD_DIR)/verilator_dco -f Vdco_nco.mk
	@echo "$(BLUE)Running...$(NC)"
	cd $(BUILD_DIR) && ./dco_sim

verilator-filter: $(BUILD_DIR)
	@echo "$(GREEN)=== Testing Loop Filter ===$(NC)"
	mkdir -p $(BUILD_DIR)/verilator_filter
	$(VERILATOR) $(VERIL_FLAGS) --Mdir $(BUILD_DIR)/verilator_filter -I$(SRC_DIR) -o ../filter_sim $(abspath $(SRC_DIR)/loop_filter.v) $(abspath $(TB_DIR)/loop_filter_tb.cpp)
	$(MAKE) -C $(BUILD_DIR)/verilator_filter -f Vloop_filter.mk
	@echo "$(BLUE)Running...$(NC)"
	cd $(BUILD_DIR) && ./filter_sim

verilator-pfd: $(BUILD_DIR)
	@echo "$(GREEN)=== Testing PFD ===$(NC)"
	mkdir -p $(BUILD_DIR)/verilator_pfd
	$(VERILATOR) $(VERIL_FLAGS) --Mdir $(BUILD_DIR)/verilator_pfd -I$(SRC_DIR) -o ../pfd_sim $(abspath $(SRC_DIR)/pfd.v) $(abspath $(TB_DIR)/pfd_tb.cpp)
	$(MAKE) -C $(BUILD_DIR)/verilator_pfd -f Vpfd.mk
	@echo "$(BLUE)Running...$(NC)"
	cd $(BUILD_DIR) && ./pfd_sim

verilator-chain: $(BUILD_DIR)
	@echo "$(GREEN)=== Testing Chain (DCO->Div) ===$(NC)"
	mkdir -p $(BUILD_DIR)/verilator_chain
	$(VERILATOR) $(VERIL_FLAGS) --Mdir $(BUILD_DIR)/verilator_chain --top-module chain -I$(SRC_DIR) -o ../chain_sim $(abspath $(SRC_DIR)/dco_nco.v) $(abspath $(SRC_DIR)/divider.v) $(abspath $(SRC_DIR)/chain.v) $(abspath $(TB_DIR)/chain_tb.cpp)
	$(MAKE) -C $(BUILD_DIR)/verilator_chain -f Vchain.mk
	@echo "$(BLUE)Running...$(NC)"
	cd $(BUILD_DIR) && ./chain_sim

verilator-pll: $(BUILD_DIR)
	@echo "$(GREEN)=== Testing Full PLL System ===$(NC)"
	mkdir -p $(BUILD_DIR)/verilator_pll
	$(VERILATOR) $(VERIL_FLAGS) --Mdir $(BUILD_DIR)/verilator_pll --top-module pll_top -I$(SRC_DIR) -o ../pll_sim $(abspath $(SRC_DIR)/pfd.v) $(abspath $(SRC_DIR)/loop_filter.v) $(abspath $(SRC_DIR)/dco_nco.v) $(abspath $(SRC_DIR)/divider.v) $(abspath $(SRC_DIR)/pll_top.v) $(abspath $(TB_DIR)/pll_tb.cpp)
	$(MAKE) -C $(BUILD_DIR)/verilator_pll -f Vpll_top.mk
	@echo "$(BLUE)Running...$(NC)"
	cd $(BUILD_DIR) && ./pll_sim

# ==========================================
# --- 5. SYNTHESIS (LIBRELANE) ---
# ==========================================

synth:
	@echo "$(GREEN)========================================$(NC)"
	@echo "$(BLUE)  [OpenLane] Starting Synthesis...$(NC)"
	@echo "$(BLUE)  Target PDK: $(PDK)$(NC)"
	@echo "$(BLUE)  Config: $(OL_CONFIG)$(NC)"
	@echo "$(GREEN)========================================$(NC)"
	
	# We pass --pdk $(PDK) to the openlane command
	cd $(LIBRELANE_DIR) && \
	nix-shell --run "openlane $(OL_CONFIG) --pdk $(PDK)"

# --- UTILS ---
clean:
	@echo "  Cleaning build files..."
	rm -rf $(BUILD_DIR) *.vcd

help:
	@echo "Usage:"
	@echo "  make verilator-pll   -> Run PLL simulation"
	@echo "  make synth           -> Run OpenLane synthesis"

#EOF