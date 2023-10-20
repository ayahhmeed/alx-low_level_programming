section .data
    hello db "Hello, Holberton", 0x0A

section .text
    global main

    extern printf

main:
    push    rbp
    mov     rbp, rsp

    push    hello
    call    printf
    add     rsp, 8

    mov     eax, 0
    leave
    ret

