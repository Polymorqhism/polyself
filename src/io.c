#include "io.h"
#include "string.h"

extern void read(char *buf, unsigned long long size);
extern void write(char *buf, unsigned long long size);

void puts(char *buf)
{
  size_t size = strlen(buf);
  write(buf, size);
}

void puti(int var)
{
  char buf[32];
  itoa(var, buf);
  unsigned int size = strlen(buf);
  write(buf, size);
}
