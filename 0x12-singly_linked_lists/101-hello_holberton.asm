section .data
hello: db 'Hello, Holberton', 10, 0
fmt: db '%s', 10, 0

section .text
global main

main:
; Push arguments to stack
push qword fmt
push qword hello

; Call printf
mov rax, 0x000000000000003B ; System call number for `execve`
mov rdi, qword rsp         ; Address of format string
xor rsi, rsi              ; No arguments passed
xor rdx, rdx              ; No environment variables passed
syscall                   ; Call printf

; Exit program
mov rax, 0x000000000000003C ; System call number for `exit`
xor rdi, rdi              ; Return code 0
syscall                   ; Call exit

