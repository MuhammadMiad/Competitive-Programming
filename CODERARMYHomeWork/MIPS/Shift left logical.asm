.data
.text
  main:
  #add value at t0
  addi  $t0,4

  #sll store_r,reg,num_shift
  sll $t1,$t0,5

  #print
  move $a0,$t1
  li $v0,1
  syscall


   li $v0,10
   syscall

  