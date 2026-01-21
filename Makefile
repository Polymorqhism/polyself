CC = clang
ASM = nasm
FLAGS = -Wall -Wextra -nostdlib -fno-builtin -fno-stack-protector

OBJS = build/main.o build/print.o build/string.o build/math.o build/quit.o
BIN  = build/poly

$(BIN): $(OBJS)
	mkdir -p build
	$(CC) -nostdlib $(OBJS) -o $(BIN)

build/main.o: src/main.c src/print.h
	$(CC) $(FLAGS) -c $< -o $@

build/print.o: src/print.c src/print.h
	$(CC) $(FLAGS) -c $< -o $@

build/string.o: src/string.c src/string.h
	$(CC) $(FLAGS) -c $< -o $@

build/math.o: src/math.c src/math.h
	$(CC) $(FLAGS) -c $< -o $@


# asm

build/quit.o: src/quit.s
	$(ASM) -f elf64 $< -o $@


.PHONY: clean run
clean:
	rm -rf build/*

run:
	./build/poly
