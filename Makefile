CC = gcc
CFLAGS = -ansi -pedantic -Wall -Wextra

solutions/p1.out: solutions/p1.c
	${CC} -c ${CFLAGS} $< -o $@

clean:
	rm solutions/*.out