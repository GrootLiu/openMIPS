   .org 0x0
   .set noat
   .set noreorder
   .set nomacro
   .global _start
_start:
      ori		$1, $0, 0x0001	#0x0000		# $1 = 0x0001
      j		    0x20			#0x0004	    # jump to 0x20
      ori		$1, $0, 0x0002	#0x0008		# $1 = 0x0002
      ori		$1, $0, 0x1111	#0x000c		# $1 = 0x1111
      ori		$1, $0, 0x1100	#0x0010		# $1 = 0x1100

      .org 0x20
      ori		$1, $0, 0x0003	#0x0020		# $1 = 0x0003
      jal		0x40			#0x0024	    # jump to 0x40 and save position (0x2c) to $ra
      ori       $10,$0, 0x0002  #0x0028     # 此时$10 = 0x2，这是延迟槽指令

      ori		$1, $0, 0x0005	#0x002c		# $1 = 0x5
      ori		$1, $0, 0x0006	#0x0030		# $1 = 0x6
      j		    0x60			#0x0034	    # jump to 0x60
      nop                       

      .org 0x40
      jalr		$2,$31			#0x0040	    # 此时$31为0x2c，所以转移到0x2c(PC=0x2c)，同时设置$2为0x48
      or		$1, $2, $0		#0x0044     # $1 = $2 == 0x48，这是延迟槽指令

      ori		$1, $0, 0x0009	#0x0048		# $1 0x9
      ori		$1, $0, 0x000a	#0x004c		# $1 0xa
      j		    0x80			#0x0050	    # jump to 0x80
      nop

      .org 0x60
      ori		$1, $0, 0x0007	#0x0060		# $1 = 0x7
      jr		$2				#0x0064	    # jump to $2，此时$2为0x48，所以转移到0x48处
      ori		$1, $0, 0x0008	#0x0068		# $1 = 0x8
      ori		$1, $0, 0x1111	#0x006c		# $1 = 0x1111
      ori		$1, $0, 0x1100	#0x0050		# $1 = 0x1100

      .org 0x80
      nop

_loop:
   j _loop
   nop
      
      
      
      
      
      
      
      
      
      
      
      
      

      
      
      