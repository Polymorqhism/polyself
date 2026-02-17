<p align="center">
  <img
    src="polyself.png"
    alt="polyself"
    width="120"
  />
</p>

<h1 align="center">polyself</h1>

- Uses syscalls to re-create parts of libc.
- Do NOT actually use this for anything.
- Created for learning purposes.
- x86-64; targeted for Linux.
- Requires clang (gcc if Makefile is tweaked).

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


# Build

`make`

# Run
`make run`


> [!CAUTION]
> Do not use this code for production.
