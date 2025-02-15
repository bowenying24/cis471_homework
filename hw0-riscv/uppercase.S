        .section .data
input_string:   .asciz "Hello World!"

        # tohost/fromhost are data locations used by Spike
        .align 8
tohost: .byte 0
        .align 8
fromhost: .byte 0

        
        .section .text
        .globl _start
_start:
        # Load the address of the input string into a0
        la a0, input_string

        # Your code here!
uppercase:
        lb a1, 0(a0)         # a1 is for updating the char 
        beqz a1, end_program

        li a2, 'a'           
        li a3, 'z' 
        blt a1, a2, next_char     # check < 'a'
        bgt a1, a3, next_char     # check > 'z'

        li a2, 0x20
        sub a1, a1, a2
        sb a1, 0(a0)        # set back to pointer at a0  

next_char:
        addi a0, a0, 1       # Move to the next character in the string
        j uppercase

        
end_program:
        # jump here when you're done
        j end_program

