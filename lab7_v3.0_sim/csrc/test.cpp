#include "Vtop_sim.h"
#include "verilated.h"
#include "verilated_fst_c.h"

#include "stdio.h"
#include "stdlib.h"

VerilatedContext* contextp = NULL;
VerilatedFstC* tfp = NULL;

static Vtop_sim* top;

void sim_init(){
	contextp = new VerilatedContext;
	tfp = new VerilatedFstC;
	top = new Vtop_sim;
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






