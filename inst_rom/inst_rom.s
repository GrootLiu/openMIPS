   .org 0x0
   .set noat
   .set noreorder
   .set nomacro
   .global _start
_start:
      ori		$1, $0, 0x0001			# $1 = 0x0001
      j		   0x20				      # jump to 0x20
      ori		$1, $0, 0x0002			# $1 = 0x0002
      ori		$1, $0, 0x1111			# $1 = 0x1111
      ori		$1, $0, 0x1100			# $1 = 0x1100

      .org 0x20
      ori		$1, $0, 0x0003			# $1 = 0x0003
      jal		0x40				      # jump to 0x40 and save position (0x2c) to $ra
      ori      $10,$0, 0x0002       # 此时$10 = 0x2，这是延迟槽指令

      ori		$1, $0, 0x0005			# $1 = 0x5
      ori		$1, $0, 0x0006			# $1 = 0x6
      j		   0x60				      # jump to 0x60
      nop

      .org 0x40
      jalr		$2,$31				   # 此时$31为0x2c，所以转移到0x2c(PC=0x2c)，同时设置$2为0x48
      or		   $1, $2, $0		      # $1 = $2 == 0x48，这是延迟槽指令

      ori		$1, $0, 0x0009			# $1 0x9
      ori		$1, $0, 0x000a			# $1 0xa
      j		   0x80				      # jump to 0x80
      nop

      .org 0x60
      ori		$1, $0, 0x0007			# $1 = 0x7
      jr		   $2					      # jump to $2，此时$2为0x48，所以转移到0x48处
      ori		$1, $0, 0x0008			# $1 = 0x8
      ori		$1, $0, 0x1111			# $1 = 0x1111
      ori		$1, $0, 0x1100			# $1 = 0x1100

      .org 0x80
      nop

_loop:
   j _loop
   nop
      
      
      
      
      
      
      
      
      
      
      
      
      

      
      
      