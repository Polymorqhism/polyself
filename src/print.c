unsigned int get_length(const char *string) {
  unsigned int size = 0;

  while(string[size]) size++; // yes

  return size;
}

void print(char *buf) {
  unsigned int size = get_length(buf);
  __asm__ __volatile__(
    "mov $1, %%rax\n"
    "syscall"
    :
    :"D"(1), "S"(buf), "d"(size)
    :"rcx", "r11", "rax"
  );
}
