ifndef CROSS_COMPILE
CROSS_COMPILE = mips-linux-gnu-
endif
CC = $(CROSS_COMPILE)as
LD = $(CROSS_COMPILE)ld
OBJCOPY = $(CROSS_COMPILE)objcopy
OBJDUMP = $(CROSS_COMPILE)objdump

OBJECTS = inst_rom.o

export	CROSS_COMPILE

# ********************
# Rules of Compilation
# ********************

all: inst_rom.data # inst_rom.asm
	rm -f *.o *.om *.bin *.S 

inst_rom.S: inst_rom.s
	$(shell cp inst_rom.s inst_rom.S)
%.o: %.S
	$(CC) -mips32 $< -o $@
inst_rom.om: ./Bin2Mem/ram.ld $(OBJECTS)
	$(LD) -T ./Bin2Mem/ram.ld $(OBJECTS) -o $@
inst_rom.bin: inst_rom.om
	$(OBJCOPY) -O binary $<  $@
# 反编译
# inst_rom.asm: inst_rom.om
#	$(OBJDUMP) -D $< > $@
inst_rom.data: inst_rom.bin
	./Bin2Mem/Bin2Mem -f $< -o $@
clean:
	rm -f *.o *.om *.bin *.data *.mif *.asm *.S
