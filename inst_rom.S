	.org 0x0
.global _start
   .set noat
_start:
   ori $1,$0,0x1100        # $1 = $0 | 0x1100 = 0x1100
   ori $1,$1,0x0020        # $2 = $0 | 0x0020 = 0x0020
   ori $1,$1,0x4400        # $3 = $0 | 0xff00 = 0xff00
   ori $1,$1,0x0044        # $4 = $0 | 0xffff = 0xffff

