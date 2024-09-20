#include <nvboard.h>
#include "Vtop.h"

void nvboard_bind_all_pins(Vtop* top) {
	nvboard_bind_pin( &top->A, 4, SW3, SW2, SW1, SW0);
	nvboard_bind_pin( &top->B, 4, SW7, SW6, SW5, SW4);
	nvboard_bind_pin( &top->result, 4, LD3, LD2, LD1, LD0);
	nvboard_bind_pin( &top->btn0, 1, BTNL);
	nvboard_bind_pin( &top->btn1, 1, BTNU);
	nvboard_bind_pin( &top->btn2, 1, BTNC);
	nvboard_bind_pin( &top->btn3, 1, BTND);
	nvboard_bind_pin( &top->btn4, 1, BTNR);
	nvboard_bind_pin( &top->Overflow, 1, LD5);
	nvboard_bind_pin( &top->Carry, 1, LD6);
	nvboard_bind_pin( &top->zero, 1, LD7);
}
