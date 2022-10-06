SRC=$(wildcard src/*.c)
BIN=$(SRC:src/%.c=bin/%)

all: bin/ ${BIN}

bin/:
		mkdir -p bin

bin/%: src/%.c
		gcc $^ -o $@

clean:
	rm -fr bin/