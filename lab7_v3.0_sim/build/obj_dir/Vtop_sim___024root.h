// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop_sim.h for the primary calling header

#ifndef VERILATED_VTOP_SIM___024ROOT_H_
#define VERILATED_VTOP_SIM___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtop_sim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_sim___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_OUT8(clk,0,0);
    VL_OUT8(clrn,0,0);
    VL_OUT8(data,7,0);
    VL_OUT8(scan_code,7,0);
    VL_OUT8(acsill_code,7,0);
    VL_OUT8(count_key,7,0);
    VL_OUT8(display,0,0);
    VL_OUT8(ready,0,0);
    VL_OUT8(overflow,0,0);
    CData/*0:0*/ top_sim__DOT__kbd_clk;
    CData/*0:0*/ top_sim__DOT__kbd_data;
    CData/*0:0*/ top_sim__DOT__nextdata_n;
    CData/*2:0*/ top_sim__DOT__top1__DOT__ps2_keyboard1__DOT__w_ptr;
    CData/*2:0*/ top_sim__DOT__top1__DOT__ps2_keyboard1__DOT__r_ptr;
    CData/*3:0*/ top_sim__DOT__top1__DOT__ps2_keyboard1__DOT__count;
    CData/*2:0*/ top_sim__DOT__top1__DOT__ps2_keyboard1__DOT__ps2_clk_sync;
    CData/*0:0*/ top_sim__DOT__top1__DOT__ps2_keyboard1__DOT____Vlvbound_h4321e8f0__0;
    CData/*7:0*/ top_sim__DOT__top1__DOT__keyboard_decoder_rom1__DOT__data;
    CData/*1:0*/ top_sim__DOT__top1__DOT__fsm1__DOT__state;
    CData/*1:0*/ top_sim__DOT__top1__DOT__fsm1__DOT__nextstate;
    CData/*0:0*/ top_sim__DOT__top1__DOT__fsm1__DOT__count_tag;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactContinue;
    SData/*10:0*/ top_sim__DOT__model__DOT__kbd_sendcode__Vstatic__send_buffer;
    SData/*9:0*/ top_sim__DOT__top1__DOT__ps2_keyboard1__DOT__buffer;
    IData/*31:0*/ top_sim__DOT__model__DOT__kbd_sendcode__Vstatic__i;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*7:0*/, 8> top_sim__DOT__top1__DOT__ps2_keyboard1__DOT__fifo;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop_sim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_sim___024root(Vtop_sim__Syms* symsp, const char* v__name);
    ~Vtop_sim___024root();
    VL_UNCOPYABLE(Vtop_sim___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
