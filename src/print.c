#include "string.h"

void print(char *buf) {
  unsigned int size = strlen(buf);
  __asm__ __volatile__(
    "mov $1, %%rax\n"
    "syscall"
    :
    :"D"(1), "S"(buf), "d"(size)
    :"rcx", "r11", "rax"
  );
}
