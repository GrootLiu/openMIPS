.PHONY: sim

sim: ./csrc/main.cpp ./vsrc/top.v ./include/define.v ./vsrc/if_id.v ./vsrc/id.v ./vsrc/id_ex.v ./vsrc/ex.v ./vsrc/ex_mem.v ./vsrc/mem.v ./vsrc/mem_wb.v ./vsrc/pc_reg.v ./vsrc/inst_rom.v ./vsrc/openmips.v
		@echo "Making..."
		verilator --Mdir sim  -Wno-COMBDLY -Wno-WIDTH -Wno-LATCH -Wno-MODDUP -Wno-CASEOVERLAP --trace --cc --exe --build --top top -y ~/openMIPS/include ./csrc/main.cpp ./vsrc/*.v
