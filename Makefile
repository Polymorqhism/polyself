CC = clang
FLAGS = -Wall -Wextra

OBJS = main.o print.o
BIN  = build/poly

$(BIN): $(OBJS)
	mkdir -p build
	$(CC) -nostdlib $(OBJS) -o $(BIN)

main.o: src/main.c src/print.h
	$(CC) $(FLAGS) -c $< -o $@

print.o: src/print.c src/print.h
	$(CC) $(FLAGS) -c $< -o $@

.PHONY: clean run
clean:
	rm -rf *.o build

run:
	./build/poly
