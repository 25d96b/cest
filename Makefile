CC = clang
CFLAGS = -Wall -Wextra -ggdb -pedantic

MAIN = main
MAIN_SRC = src/main.c

all: clean main run

main:
	$(CC) $(CFLAGS) -o ./build/$(MAIN) $(MAIN_SRC)


run: main
	./build/$(MAIN)

clean:
	$(RM) ./build/$(MAIN)
	rm -r ./build/$(MAIN).dSYM


