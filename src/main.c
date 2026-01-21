#include "print.h"
#include "string.h"

void quit(void) {
    __asm__ (
    "mov $60, %rax\n"
    "xor %rdi, %rdi\n"
    "syscall\n"
  );
}
void _start(void) {
  puts("hello world!\n");
  const char *s1 = "hello";
  const char *s2 = "hell";
  const char *s3 = "hello";

  int result = strcmp(s1, s2);
  int result2 = strcmp(s1, s3);

  puti(result);
  puti(result2);
  puts("\n");

  char src[6] = "world";
  char dest[6] = "hello";

  strcpy(src, dest);

  quit();
}


