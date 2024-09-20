#include <nvboard.h>
#include "Vmux21.h"

void nvboard_bind_all_pins(Vmux21* top) {
	nvboard_bind_pin( &top->a, 1, SW7);
	nvboard_bind_pin( &top->b, 1, SW6);
	nvboard_bind_pin( &top->s, 1, SW5);
	nvboard_bind_pin( &top->y, 1, LD15);
}
