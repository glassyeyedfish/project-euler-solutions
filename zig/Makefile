SRC=$(wildcard src/*.zig)
BIN=$(SRC:src/%.zig=bin/%)

all: bin/ ${BIN}

bin/:
		mkdir -p bin

bin/%: src/%.zig
		zig build-exe $^
		mv p* bin/

clean:
	rm -fr src/zig-cache/
	rm -fr bin/