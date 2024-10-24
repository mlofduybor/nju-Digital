#include "Vlogic_shifter_left_tb.h"
#include "verilated.h"
#include "verilated_fst_c.h"

#include "stdio.h"
#include "stdlib.h"

VerilatedContext* contextp = NULL;
VerilatedFstC* tfp = NULL;

static Vlogic_shifter_left_tb* top;

void sim_init(){
	contextp = new VerilatedContext;
	tfp = new VerilatedFstC;
	top = new Vlogic_shifter_left_tb;
	contextp->traceEverOn(true);
	top->trace(tfp, 99);
	tfp->open("build/simx.fst");
}

void sim_exit(){
	tfp->close();
	delete top;
}


int main(){

	int i = 4;

	sim_init();

	int sim_time = 10000;

	while(!contextp->gotFinish()){
		top->eval();
		tfp->dump(contextp->time());
		contextp->timeInc(2);
	}

	sim_exit();	

	return 0;				
}






