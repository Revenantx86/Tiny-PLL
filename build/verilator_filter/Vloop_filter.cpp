// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vloop_filter__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vloop_filter::Vloop_filter(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vloop_filter__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , sample_en{vlSymsp->TOP.sample_en}
    , error_in{vlSymsp->TOP.error_in}
    , kp_shift{vlSymsp->TOP.kp_shift}
    , ki_shift{vlSymsp->TOP.ki_shift}
    , lock_detect{vlSymsp->TOP.lock_detect}
    , initial_freq{vlSymsp->TOP.initial_freq}
    , dco_ctrl{vlSymsp->TOP.dco_ctrl}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vloop_filter::Vloop_filter(const char* _vcname__)
    : Vloop_filter(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vloop_filter::~Vloop_filter() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vloop_filter___024root___eval_debug_assertions(Vloop_filter___024root* vlSelf);
#endif  // VL_DEBUG
void Vloop_filter___024root___eval_static(Vloop_filter___024root* vlSelf);
void Vloop_filter___024root___eval_initial(Vloop_filter___024root* vlSelf);
void Vloop_filter___024root___eval_settle(Vloop_filter___024root* vlSelf);
void Vloop_filter___024root___eval(Vloop_filter___024root* vlSelf);

void Vloop_filter::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vloop_filter::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vloop_filter___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vloop_filter___024root___eval_static(&(vlSymsp->TOP));
        Vloop_filter___024root___eval_initial(&(vlSymsp->TOP));
        Vloop_filter___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vloop_filter___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vloop_filter::eventsPending() { return false; }

uint64_t Vloop_filter::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vloop_filter::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vloop_filter___024root___eval_final(Vloop_filter___024root* vlSelf);

VL_ATTR_COLD void Vloop_filter::final() {
    Vloop_filter___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vloop_filter::hierName() const { return vlSymsp->name(); }
const char* Vloop_filter::modelName() const { return "Vloop_filter"; }
unsigned Vloop_filter::threads() const { return 1; }
void Vloop_filter::prepareClone() const { contextp()->prepareClone(); }
void Vloop_filter::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vloop_filter::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vloop_filter___024root__trace_decl_types(VerilatedVcd* tracep);

void Vloop_filter___024root__trace_init_top(Vloop_filter___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vloop_filter___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vloop_filter___024root*>(voidSelf);
    Vloop_filter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vloop_filter___024root__trace_decl_types(tracep);
    Vloop_filter___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vloop_filter___024root__trace_register(Vloop_filter___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vloop_filter::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vloop_filter::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vloop_filter___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
