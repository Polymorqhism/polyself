# polyself
> rely on thyself

- uses raw assembly to re-create parts of libc
- do NOT actually use this for anything
- learning purposes
- x86-64; targeted for linux
- requires clang (gcc if Makefile is tweaked)


## printing:
*note that there is no `printf()` functionality, use `puti()` and `puts()` for integers and strings respectively*

- string:
    - `unsigned int strlen(const char *string);`
    - `int strcmp(const char *string1, const char *string2);`
    - `int strcpy(char *source, char *destination);`
    - `void itoa(int n, char *s);`
- print:
    - `void puts(char *string);`
    - `void puti(int var);`

- math:
    - tbd


# to build this project:

`make`

`make clean` to clean 

# to run this project:
`make run`


⚠️ **DO NOT* use this project for production*  ⚠️
