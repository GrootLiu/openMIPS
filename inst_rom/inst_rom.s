   .org 0x0
   .set noat
   .set noreorder
   .set nomacro
   .global _start
_start:
    ori		$3, $0, 0x8000			# $3 = 0x8000
    sll		$3, 16			        # $3 = $3 << 16 = 0x80000000
    ori		$1, $0, 0x0001			# $1 = 0x0001
    b		s1			            # branch to s1
    ori		$1, $0, 0x0002			# $1 = 0x0002   这是延迟槽指令
1:
    ori		$1, $0, 0x1111			# $1 = 0x1111
    ori		$1, $0, 0x1100			# $1 = 0x1100

    .org 0x20
s1:
    ori		$1, $0, 0x0003			# $1 = 0x0003
    bal     s2                      # branch to s2
    ori		$10, $0, 0xffff			# $10 = 0xffff  这是延迟槽指令
    ori		$1, $0, 0x1100	#0x002c	# $1 = 0x1100
    ori		$1, $0, 0x1111			# $1 = 0x1111
    bne		$1, $0, s3	            # if $1 != $0 then s3
    nop

    .org 0x50
s2:
    ori		$1, $0, 0x0004			# $1 = 0x0004
    beq		$3, $3, s3	            # if $3 == $3 then s3
    or		$1, $31, $0		        # $1 = $31 | $0 = 0x002c    这是延迟槽指令
    ori		$1, $0, 0x1111			# $1 = 0x1111
    ori		$1, $0, 0x1100			# $1 = 1100

2:
    ori     $1,$0,0x0007             # $1 = 0x0007
    ori     $1,$0,0x0008             # $1 = 0x0008
    bgtz    $1,s4
    ori     $1,$0,0x0009             # $1 = 0x0009
    ori     $1,$0,0x1111             # $1 = 0x1111
    ori     $1,$0,0x1100             # $1 = 0x1100
    
    .org 0x80
s3:
    ori      $1,$0,0x0005            # $1 = 0x0005            
    Bgez     $1,2b                   
    ori      $1,$0,0x0006            # $1 = 0x0006 这是延迟槽指令
    ori      $1,$0,0x1111            # $1 = 0x1111
    ori      $1,$0,0x1100            # $1 = 0x1100
      
   .org 0x100
s4:
   ori      $1,$0,0x000a            # $1 = 0xa              
   Bgezal   $3,s3
   or       $1,$0,$31               # $1 = 0x10c          
   ori      $1,$0,0x000b    #0x010c # $1 = 0xb
   ori      $1,$0,0x000c            # $1 = 0xc
   ori      $1,$0,0x000d            # $1 = 0xd
   ori      $1,$0,0x000e            # $1 = 0xe
   bltz     $3,s5
   ori      $1,$0,0x000f            # $1 = 0xf
   ori      $1,$0,0x1100     
      
   .org 0x130
s5:
   ori      $1,$0,0x0010            # $1 = 0x10            
   blez     $1,2b           
   ori      $1,$0,0x0011            # $1 = 0x11
   ori      $1,$0,0x0012            # $1 = 0x12
   ori      $1,$0,0x0013            # $1 = 0x13
   bltzal   $3,s6
   or       $1,$0,$31               # $1 = 0x14c
   ori      $1,$0,0x1100    #0x014c


   .org 0x160
s6:
   ori      $1,$0,0x0014            # $1 = 0x14
   nop
   
   
    
_loop:
   j _loop
   nop
      
      
      
      
      
      
      
      
      
      
      

      
      
      