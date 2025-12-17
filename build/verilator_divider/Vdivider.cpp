// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vdivider__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vdivider::Vdivider(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vdivider__Syms(contextp(), _vcname__, this)}
    , clk_in{vlSymsp->TOP.clk_in}
    , rst_n{vlSymsp->TOP.rst_n}
    , clk_out{vlSymsp->TOP.clk_out}
    , div_val{vlSymsp->TOP.div_val}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vdivider::Vdivider(const char* _vcname__)
    : Vdivider(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vdivider::~Vdivider() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vdivider___024root___eval_debug_assertions(Vdivider___024root* vlSelf);
#endif  // VL_DEBUG
void Vdivider___024root___eval_static(Vdivider___024root* vlSelf);
void Vdivider___024root___eval_initial(Vdivider___024root* vlSelf);
void Vdivider___024root___eval_settle(Vdivider___024root* vlSelf);
void Vdivider___024root___eval(Vdivider___024root* vlSelf);

void Vdivider::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vdivider::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vdivider___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vdivider___024root___eval_static(&(vlSymsp->TOP));
        Vdivider___024root___eval_initial(&(vlSymsp->TOP));
        Vdivider___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vdivider___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vdivider::eventsPending() { return false; }

uint64_t Vdivider::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vdivider::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vdivider___024root___eval_final(Vdivider___024root* vlSelf);

VL_ATTR_COLD void Vdivider::final() {
    Vdivider___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vdivider::hierName() const { return vlSymsp->name(); }
const char* Vdivider::modelName() const { return "Vdivider"; }
unsigned Vdivider::threads() const { return 1; }
void Vdivider::prepareClone() const { contextp()->prepareClone(); }
void Vdivider::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vdivider::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vdivider___024root__trace_decl_types(VerilatedVcd* tracep);

void Vdivider___024root__trace_init_top(Vdivider___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vdivider___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdivider___024root*>(voidSelf);
    Vdivider__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vdivider___024root__trace_decl_types(tracep);
    Vdivider___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vdivider___024root__trace_register(Vdivider___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vdivider::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vdivider::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vdivider___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
