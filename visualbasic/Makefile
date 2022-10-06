SRC=$(wildcard src/*.vb)
BIN=$(SRC:src/%.vb=bin/%)

all: bin/ ${BIN}

bin/:
		mkdir -p bin

bin/%: src/%.vb
		vbnc $^ -out:$@

clean:
	rm -fr bin/