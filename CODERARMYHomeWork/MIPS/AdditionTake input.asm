.data 
     input1:  .asciiz "Enter first value:"
     input2:  .asciiz "Enter second value:"
 .text
    main:
         
        la $a0,input1
        li $v0,4
        syscall
 

        li $v0,5
        syscall

        move $t1,$v0

       la $a0,input2
       li $v0,4
       syscall

       li $v0,5
       syscall

       move $t2,$v0

      # add $t0,$t1,$t2
       #sub $t0,$t1,$t2
     # mul $t0,$t1,$t2
     div $t0,$t1,$t2

       move $a0,$t0
       li $v0,1
       syscall
 
       li $v0,10
       syscall