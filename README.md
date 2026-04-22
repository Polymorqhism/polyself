<p align="center">
  <img
    src="polyself.png"
    alt="polyself"
    width="120"
  />
</p>

<h1 align="center">polyself</h1>
<p align="center">
  Useless; impractical.
</p>

- Uses syscalls to re-create parts of libc, more information within the code.
- Do NOT use this for production.
- Created for learning purposes.
- x86-64; targeted for Linux.
- Requires clang (gcc if Makefile is tweaked).

> [!CAUTION]
> `printp()` is UNSAFE, no checks are implemented

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
    - to be done


## Usage:
- `make run`


> [!CAUTION]
> Do not use this code for production.
