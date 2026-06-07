.data
   A:  .asciiz  "a="
   B:  .asciiz  "b="
   C:  .asciiz  "c="
.text
     main:
     
     la $a0,A
     li $v0,4
     syscall

     li $v0,5
     syscall
     move $t1,$v0

     la $a0,B
     li $v0,4
     syscall
     
     li $v0,5
     syscall
     move $t2,$v0

     la $a0,C
     li $v0,4
     syscall

     li $v0,5
     syscall
     move $t3,$v0

    addi $t0,$zero,0

    add $t0,$t0,$t1
    add $t0,$t0,$t2  
    sub $t0,$t0,$t3
    

    move $a0,$t0
    li $v0,1
    syscall

    li $v0,10
    syscall
    