CC = clang
FLAGS = -Wall -Wextra -nostdlib -fno-builtin -fno-stack-protector

OBJS = build/main.o build/print.o build/string.o
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

.PHONY: clean run
clean:
	rm -rf build/*

run:
	./build/poly
