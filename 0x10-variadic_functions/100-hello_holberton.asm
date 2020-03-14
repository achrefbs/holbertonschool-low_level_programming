global start

section .text
start:
  mov rax, 1
  mov rdi, 1
  mov rsi, message
  mov rdx, 17
  syscall


message:
  db "Hello, Holberton", 17
