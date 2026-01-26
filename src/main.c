#include "io.h"
#include "string.h"
#include "types.h"
#include "syscall.h"


void quit()
{
    syscall6(60, 0, 0, 0, 0, 0, 0);
}

void _start(void)
{
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

    char buf[32];
    read(buf, 15);
    puts(buf);

    quit();
}
