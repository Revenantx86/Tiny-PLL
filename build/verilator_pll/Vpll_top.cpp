// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vpll_top__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vpll_top::Vpll_top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vpll_top__Syms(contextp(), _vcname__, this)}
    , sys_clk{vlSymsp->TOP.sys_clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , pll_out{vlSymsp->TOP.pll_out}
    , ref_clk{vlSymsp->TOP.ref_clk}
    , lock_detect{vlSymsp->TOP.lock_detect}
    , div_val{vlSymsp->TOP.div_val}
    , initial_freq{vlSymsp->TOP.initial_freq}
    , debug_dco_word{vlSymsp->TOP.debug_dco_word}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vpll_top::Vpll_top(const char* _vcname__)
    : Vpll_top(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vpll_top::~Vpll_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vpll_top___024root___eval_debug_assertions(Vpll_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vpll_top___024root___eval_static(Vpll_top___024root* vlSelf);
void Vpll_top___024root___eval_initial(Vpll_top___024root* vlSelf);
void Vpll_top___024root___eval_settle(Vpll_top___024root* vlSelf);
void Vpll_top___024root___eval(Vpll_top___024root* vlSelf);

void Vpll_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vpll_top::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vpll_top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vpll_top___024root___eval_static(&(vlSymsp->TOP));
        Vpll_top___024root___eval_initial(&(vlSymsp->TOP));
        Vpll_top___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vpll_top___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vpll_top::eventsPending() { return false; }

uint64_t Vpll_top::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vpll_top::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vpll_top___024root___eval_final(Vpll_top___024root* vlSelf);

VL_ATTR_COLD void Vpll_top::final() {
    Vpll_top___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vpll_top::hierName() const { return vlSymsp->name(); }
const char* Vpll_top::modelName() const { return "Vpll_top"; }
unsigned Vpll_top::threads() const { return 1; }
void Vpll_top::prepareClone() const { contextp()->prepareClone(); }
void Vpll_top::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vpll_top::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vpll_top___024root__trace_decl_types(VerilatedVcd* tracep);

void Vpll_top___024root__trace_init_top(Vpll_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vpll_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpll_top___024root*>(voidSelf);
    Vpll_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vpll_top___024root__trace_decl_types(tracep);
    Vpll_top___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vpll_top___024root__trace_register(Vpll_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vpll_top::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vpll_top::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vpll_top___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
