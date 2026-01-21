bits 64

global putstring


putstring:
  mov rax, 1
  mov rdx, rsi
  mov rsi, rdi
  mov rdi, 1
  syscall
  ret
