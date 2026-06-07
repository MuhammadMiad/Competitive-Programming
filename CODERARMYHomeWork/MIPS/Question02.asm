.data
  ans:  .asciiz  "Answer:"

.text
   main:
   addi $s1,$zero,0
   addi $s2,$zero,0

loop:
   addi $s2,$s2,3
   addi $s1,$s1,1
   slti $t0,$s1,4
   bne  $t0,$zero,loop

   la $a0,ans
   li $v0,4
   syscall 

   move $a0,$s2
   li $v0,1
   syscall

   li $v0,10
   syscall