.data
 mychar: .byte 'C'
.text
     main:
     la $a0,mychar
     li $v0,4
     syscall

     li $v0,10
     syscall