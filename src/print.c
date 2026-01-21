#include "print.h"
#include "string.h"


extern void putstring(char *buf, unsigned long long size);


void puts(char *buf) {
  size_t size = strlen(buf);
  putstring(buf, size);
}


void puti(int var) {
  char buf[32];
  itoa(var, buf);
  unsigned int size = strlen(buf);
  putstring(buf, size);
}
