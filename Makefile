.PHONY: all sim
ifndef CROSS_COMPILE
CROSS_COMPILE = mips-linux-gnu-
endif
CC = $(CROSS_COMPILE)as
LD = $(CROSS_COMPILE)ld
OBJCOPY = $(CROSS_COMPILE)objcopy
OBJDUMP = $(CROSS_COMPILE)objdump


OBJECTS = ./inst_rom/inst_rom.o

export CROSS_COMPILE

# *********************
# Rules of Complication
# *********************

all:./inst_rom/inst_rom.data ./inst_rom/inst_rom.asm
	rm -f ./inst_rom/*.o ./inst_rom/*.om ./inst_rom/*.bin

./inst_rom/%.o:./inst_rom/%.S
		$(CC) -mips32 $< -o $@

./inst_rom/inst_rom.om: ./inst_rom/ram.ld $(OBJECTS)
		$(LD) -T ./inst_rom/ram.ld $(OBJECTS) -o $@

./inst_rom/inst_rom.bin: ./inst_rom/inst_rom.om
		$(OBJCOPY) -O binary $< $@

# 反编译，生成源文件
#  ./inst_rom/inst_rom.asm: ./inst_rom/inst_rom.om
		$(OBJDUMP) -D $< > $@

./inst_rom/inst_rom.data: ./inst_rom/inst_rom.bin
		./inst_rom/Bin2Mem -f $< -o $@

clean:
		rm -f ./inst_rom/*.o ./inst_rom/*.om ./inst_rom/*.bin ./inst_rom/*.data

sim: ./csrc/main.cpp ./vsrc/top.v ./include/define.v ./vsrc/if_id.v ./vsrc/id.v ./vsrc/id_ex.v ./vsrc/ex.v ./vsrc/ex_mem.v ./vsrc/mem.v ./vsrc/mem_wb.v ./vsrc/pc_reg.v ./vsrc/inst_rom.v ./vsrc/openmips.v
		@echo "Making..."
		verilator --Mdir sim --Wno-fatal --trace --cc --exe --build --top top -y ~/openMIPS/include ./csrc/main.cpp ./vsrc/*.v
