bits 64
global quit

quit:
  mov rax, 60
  xor rdi, rdi
  syscall
