section .data
	hello db "Hello, Holberton", 0
	format db "%s", 0
	newline db 10, 0

section .text
	global main
	extern printf

main:
	sub rsp, 8   ; Allocate space for the format string

    mov rdi, format
    mov rsi, hello
    xor eax, eax  ; Clear the upper 32 bits of rax
    call printf

    mov rdi, format
    mov rsi, newline
    xor eax, eax  ; Clear the upper 32 bits of rax
    call printf

    add rsp, 8   ; Clean up the stack

    xor eax, eax  ; Return 0
    ret
