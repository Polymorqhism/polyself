#include "io.h"
#include "string.h"
#include "types.h"
#include "syscall.h"

/*
 this is only an example file
*/

void quit()
{
    syscall6(60, 0, 0, 0, 0, 0, 0);
}


void test_print()
{
    void *args[] ={"hello"};
    printp("%s world\n", args);

    int test = 1;
    void *args1[] ={&test};
    printp("one? %d\n", args1);
}

void _start(void)
{
    test_print();

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
