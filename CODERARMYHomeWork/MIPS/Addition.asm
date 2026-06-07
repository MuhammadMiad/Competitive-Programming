.data 

        val1: .word 20
        val2: .word 7
 .text
     main:
 
     lw $a0,val1
     move $t1,$a0

     lw $a0,val2
     move $t2,$a0

   add $t0,$t1,$t2


   move $a0,$t0
   li $v0,1
   syscall 


   li $v0,10
   syscall

     