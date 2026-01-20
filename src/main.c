#include "print.h"
#include "string.h"

void quit(void) {
    __asm__ __volatile__ (
    "mov $60, %rax\n"
    "xor %rdi, %rdi\n"
    "syscall\n"
  );
}
void _start(void) {
  print("hello world!\n");
  const char *s1 = "hello";
  const char *s2 = "hell";
  const char *s3 = "hello";

  int result = strcmp(s1, s2);
  int result2 = strcmp(s1, s3);

  if(result == 0) { print("these are the same\n"); } else { print("not the same\n"); }
  if(result2 == 0) { print("these are the same\n"); } else { print("not the same\n"); }


  char src[6] = "world";
  char dest[6] = "hello";

  strcpy(src, dest);

  quit();
}


