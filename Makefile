
CC=gcc
CFLAGS=-Wall -Wextra -pedantic -std=c99 -g
BIN=progen

all: build

build: progen.o
	$(CC) -o $(BIN) $(CFLAGS) main.c *.o

progen.o: progen.c
	$(CC) -c -o progen.o $(CFLAGS) progen.c

clean:
	rm -f *.o
	rm -f $(BIN)
