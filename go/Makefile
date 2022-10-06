SRC=$(wildcard src/*.go)
BIN=$(SRC:src/%.go=bin/%)

all: bin/ ${BIN}

bin/:
		mkdir -p bin

bin/%: src/%.go
		go build -o $@ $^

clean:
	rm -fr bin/