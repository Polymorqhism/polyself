# polyself
> rely on thyself

- uses raw assembly to re-create parts of libc
- do NOT actually use this for anything
- learning purposes
- x86-64; targeted for linux
- requires clang (gcc if Makefile is tweaked)

> [!CAUTION]
> `printp()` is UNSAFE

- string:
    - `unsigned int strlen(const char *string);`
    - `int strcmp(const char *string1, const char *string2);`
    - `int strcpy(char *source, char *destination);`
    - `void itoa(int n, char *s);`
- io:
    - `extern void write(char *buf, unsigned long long size);`
    - `extern void read(char *buf, unsigned long long size);`
    - `void puts(char *string);`
    - `void puti(int var);`
    - `void printp(char* fmt, void **fmts);`

- math, memory:
    - tbd


# to build this project:

`make`

`make clean` to clean

# to run this project:
`make run`


⚠️ **DO NOT* use this project for production*  ⚠️
