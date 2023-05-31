CC = gcc
CFLAGS = -ansi -pedantic -Wall -Wextra

SRC = $(shell find -type f -name "*.c")
OUT = $(SRC:./solutions/%.c=./solutions/%.out)

all: ${OUT}

solutions/%.out: solutions/%.c
	${CC} ${CFLAGS} $< -o $@

clean:
	rm solutions/*.out