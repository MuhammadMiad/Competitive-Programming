.data
    intval:  .word  1234567
.text
    main:
    lw $a0,intval
    li $v0,1

    syscall

    li $v0,10
    syscall