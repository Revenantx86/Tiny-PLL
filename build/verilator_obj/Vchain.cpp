// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vchain__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vchain::Vchain(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vchain__Syms(contextp(), _vcname__, this)}
    , sys_clk{vlSymsp->TOP.sys_clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , dco_out{vlSymsp->TOP.dco_out}
    , sample_en{vlSymsp->TOP.sample_en}
    , error_in{vlSymsp->TOP.error_in}
    , kp_shift{vlSymsp->TOP.kp_shift}
    , ki_shift{vlSymsp->TOP.ki_shift}
    , div_out{vlSymsp->TOP.div_out}
    , lock_detect{vlSymsp->TOP.lock_detect}
    , initial_freq{vlSymsp->TOP.initial_freq}
    , div_val{vlSymsp->TOP.div_val}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vchain::Vchain(const char* _vcname__)
    : Vchain(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vchain::~Vchain() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vchain___024root___eval_debug_assertions(Vchain___024root* vlSelf);
#endif  // VL_DEBUG
void Vchain___024root___eval_static(Vchain___024root* vlSelf);
void Vchain___024root___eval_initial(Vchain___024root* vlSelf);
void Vchain___024root___eval_settle(Vchain___024root* vlSelf);
void Vchain___024root___eval(Vchain___024root* vlSelf);

void Vchain::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vchain::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vchain___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vchain___024root___eval_static(&(vlSymsp->TOP));
        Vchain___024root___eval_initial(&(vlSymsp->TOP));
        Vchain___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vchain___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vchain::eventsPending() { return false; }

uint64_t Vchain::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vchain::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vchain___024root___eval_final(Vchain___024root* vlSelf);

VL_ATTR_COLD void Vchain::final() {
    Vchain___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vchain::hierName() const { return vlSymsp->name(); }
const char* Vchain::modelName() const { return "Vchain"; }
unsigned Vchain::threads() const { return 1; }
void Vchain::prepareClone() const { contextp()->prepareClone(); }
void Vchain::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vchain::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vchain___024root__trace_decl_types(VerilatedVcd* tracep);

void Vchain___024root__trace_init_top(Vchain___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vchain___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vchain___024root*>(voidSelf);
    Vchain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vchain___024root__trace_decl_types(tracep);
    Vchain___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vchain___024root__trace_register(Vchain___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vchain::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vchain::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vchain___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
