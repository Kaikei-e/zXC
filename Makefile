# Makefile
CC = gcc
CFLAGS = -Iinclude
SRC = main.c src/fileExplorer/search.c
OUT = bin/zXC

all:
	mkdir -p bin
	$(CC) $(CFLAGS) $(SRC) -o $(OUT)

clean:
	rm -f $(OUT)