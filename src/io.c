#include "io.h"
#include "string.h"
#include "syscall.h"

void write(char *buf, size_t size)
{
    syscall6(1, 1, (long) buf, size, 0, 0, 0);
}

void read(char *buf, size_t size)
{
    syscall6(0, 0, (long) buf, size, 0, 0, 0);
}

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
