#include "print.h"

void quit(void) {
    __asm__ __volatile__ (
    "mov $60, %rax\n"
    "xor %rdi, %rdi\n"
    "syscall\n"
  );
}
void _start(void) {
  print("hello world");
  quit();
}


