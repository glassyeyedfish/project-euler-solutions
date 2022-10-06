SRC=$(wildcard src/*.cs)
BIN=$(SRC:src/%.cs=bin/%)

all: bin/ ${BIN}

bin/:
		mkdir -p bin

bin/%: src/%.cs
		mono-csc $^ -out:$@

clean:
	rm -fr bin/