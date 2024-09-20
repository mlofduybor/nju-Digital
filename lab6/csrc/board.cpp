#include "VFSM_bin.h"
#include "nvboard.h"
//nvboard
static TOP_NAME dut;
void nvboard_bind_all_pins(TOP_NAME *top);

static void single_cycle(){
	dut.eval();
}

//static void reset(int n){
//	dut.rst = 1;
//	while(n -- >0) single_cycle();
//	dut.rst = 0;
//}

int main(){
	//nvboard
	nvboard_bind_all_pins(&dut);
	nvboard_init();

	//reset(10);
	while(1){
		nvboard_update();
		single_cycle();
	}
}



