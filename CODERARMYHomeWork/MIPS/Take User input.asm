.data
    input:  .asciiz  "Enter the input:"
    output: .asciiz "\nUsser output:"
.text
   main:
  #printing  input string
  la $a0,input
  li $v0,4
  syscall

  #getting user input
  li $v0,5
  syscall
 
#move the integer value to the $t0 from $v0
  move $t0,$v0

 #print output string
   la $a0,output
   li $v0,4
   syscall
 
 #print user input
  move $a0,$t0
  li $v0,1
  syscall

 #exit
 li $v0,10
 syscall