section .data
    hello db 'Hello, Holberton', 0
    format db 'Hello, Holberton\n', 0  

section .text
    extern printf
    global main

main:
    push rbp
    mov rdi, format       
    mov rax, 0
    call printf
    pop rbp
    ret

