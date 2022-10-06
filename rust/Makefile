SRC=$(wildcard src/*.rs)
BIN=$(SRC:src/%.rs=bin/%)

all: bin/ ${BIN}

bin/:
		mkdir -p bin

bin/%: src/%.rs
		rustc $^ -o $@

clean:
	rm -fr bin/