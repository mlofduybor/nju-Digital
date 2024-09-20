#include "Vtop.h"
#include "nvboard.h"
//nvboard
static TOP_NAME dut;
void nvboard_bind_all_pins(TOP_NAME *top);

static void single_cycle(){
	dut.eval();
}


int main(){
	//nvboard
	nvboard_bind_all_pins(&dut);
	nvboard_init();


	while(1){
		nvboard_update();
		single_cycle();
	}
}



