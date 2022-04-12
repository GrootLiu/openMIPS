#include <stdio.h>
#include "verilated.h"
#include "Vtop.h"

#include "verilated_vcd_c.h"

#define RstEnable 1
#define RstDisable 0

vluint64_t main_time = 1000;

int main(int argc, char** argv, char** env)
{
	VerilatedContext* contextp = new VerilatedContext;

	contextp->commandArgs(argc, argv);
	contextp->traceEverOn(true);

	Vtop *vtop = new Vtop{contextp};
	VerilatedVcdC* tfp = new VerilatedVcdC;

	vtop->trace(tfp, 99);
	tfp->open("./wave.vcd");

	vtop->rst = RstEnable;

	while(contextp->time() < main_time && !contextp->gotFinish())
	{
		contextp->timeInc(1);
		if (contextp->time() > 195)
		{
			vtop->rst = RstDisable; 
		}
		
		if ((contextp->time() % 10) == 0)
		{
			vtop->clk = 1;
		}
		if ((contextp->time() % 10) == 5)
		{ 
			vtop->clk = 0;
		}

		vtop->eval();
		tfp->dump(contextp->time());
	}

  vtop->final();
	tfp->close();
	delete vtop;
	delete contextp;
	return 0;
}
