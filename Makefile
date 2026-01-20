CC = clang
FLAGS = -Wall -Wextra -nostdlib -fno-builtin -fno-stack-protector

OBJS = main.o print.o string.o
BIN  = build/poly

$(BIN): $(OBJS)
	mkdir -p build
	$(CC) -nostdlib $(OBJS) -o $(BIN)

main.o: src/main.c src/print.h
	$(CC) $(FLAGS) -c $< -o $@

print.o: src/print.c src/print.h
	$(CC) $(FLAGS) -c $< -o $@

string.o: src/string.c src/string.h
	$(CC) $(FLAGS) -c $< -o $@

.PHONY: clean run
clean:
	rm -rf *.o build

run:
	./build/poly
