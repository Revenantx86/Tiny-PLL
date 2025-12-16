// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vdco_nco__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vdco_nco::Vdco_nco(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vdco_nco__Syms(contextp(), _vcname__, this)}
    , sys_clk{vlSymsp->TOP.sys_clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , dco_out{vlSymsp->TOP.dco_out}
    , tuning_word{vlSymsp->TOP.tuning_word}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vdco_nco::Vdco_nco(const char* _vcname__)
    : Vdco_nco(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vdco_nco::~Vdco_nco() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vdco_nco___024root___eval_debug_assertions(Vdco_nco___024root* vlSelf);
#endif  // VL_DEBUG
void Vdco_nco___024root___eval_static(Vdco_nco___024root* vlSelf);
void Vdco_nco___024root___eval_initial(Vdco_nco___024root* vlSelf);
void Vdco_nco___024root___eval_settle(Vdco_nco___024root* vlSelf);
void Vdco_nco___024root___eval(Vdco_nco___024root* vlSelf);

void Vdco_nco::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vdco_nco::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vdco_nco___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vdco_nco___024root___eval_static(&(vlSymsp->TOP));
        Vdco_nco___024root___eval_initial(&(vlSymsp->TOP));
        Vdco_nco___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vdco_nco___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vdco_nco::eventsPending() { return false; }

uint64_t Vdco_nco::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vdco_nco::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vdco_nco___024root___eval_final(Vdco_nco___024root* vlSelf);

VL_ATTR_COLD void Vdco_nco::final() {
    Vdco_nco___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vdco_nco::hierName() const { return vlSymsp->name(); }
const char* Vdco_nco::modelName() const { return "Vdco_nco"; }
unsigned Vdco_nco::threads() const { return 1; }
void Vdco_nco::prepareClone() const { contextp()->prepareClone(); }
void Vdco_nco::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vdco_nco::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vdco_nco___024root__trace_decl_types(VerilatedVcd* tracep);

void Vdco_nco___024root__trace_init_top(Vdco_nco___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vdco_nco___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdco_nco___024root*>(voidSelf);
    Vdco_nco__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vdco_nco___024root__trace_decl_types(tracep);
    Vdco_nco___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vdco_nco___024root__trace_register(Vdco_nco___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vdco_nco::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vdco_nco::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vdco_nco___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
