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

void putchar(char c)
{
    char buf[1] = { c };
    write(buf, 1);
}

// experimental: printp; UNSAFE
void printp(char *fmt, void* fmts[]) {
    unsigned int fmt_i = 0;
    unsigned int i = 0;
    size_t size = strlen(fmt);
    while(size > i) {
        if(fmt[i] == '%' && i+1 < size) {
            switch(fmt[i+1]) {
            case 's': puts(fmts[fmt_i]); fmt_i++; i++; break;
            case 'd': puti(*(int*) fmts[fmt_i]); fmt_i++; i++; break;
            default: putchar(fmt[i]); putchar(fmt[i+1]); i++; break;
            };
        } else {
            putchar(fmt[i]);
        }
        i++;
    }
}
