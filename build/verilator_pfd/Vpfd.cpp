// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vpfd__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vpfd::Vpfd(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vpfd__Syms(contextp(), _vcname__, this)}
    , sys_clk{vlSymsp->TOP.sys_clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , ref_clk{vlSymsp->TOP.ref_clk}
    , fb_clk{vlSymsp->TOP.fb_clk}
    , error_out{vlSymsp->TOP.error_out}
    , sample_en{vlSymsp->TOP.sample_en}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vpfd::Vpfd(const char* _vcname__)
    : Vpfd(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vpfd::~Vpfd() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vpfd___024root___eval_debug_assertions(Vpfd___024root* vlSelf);
#endif  // VL_DEBUG
void Vpfd___024root___eval_static(Vpfd___024root* vlSelf);
void Vpfd___024root___eval_initial(Vpfd___024root* vlSelf);
void Vpfd___024root___eval_settle(Vpfd___024root* vlSelf);
void Vpfd___024root___eval(Vpfd___024root* vlSelf);

void Vpfd::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vpfd::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vpfd___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vpfd___024root___eval_static(&(vlSymsp->TOP));
        Vpfd___024root___eval_initial(&(vlSymsp->TOP));
        Vpfd___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vpfd___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vpfd::eventsPending() { return false; }

uint64_t Vpfd::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vpfd::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vpfd___024root___eval_final(Vpfd___024root* vlSelf);

VL_ATTR_COLD void Vpfd::final() {
    Vpfd___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vpfd::hierName() const { return vlSymsp->name(); }
const char* Vpfd::modelName() const { return "Vpfd"; }
unsigned Vpfd::threads() const { return 1; }
void Vpfd::prepareClone() const { contextp()->prepareClone(); }
void Vpfd::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vpfd::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vpfd___024root__trace_decl_types(VerilatedVcd* tracep);

void Vpfd___024root__trace_init_top(Vpfd___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vpfd___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpfd___024root*>(voidSelf);
    Vpfd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vpfd___024root__trace_decl_types(tracep);
    Vpfd___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vpfd___024root__trace_register(Vpfd___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vpfd::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vpfd::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vpfd___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
