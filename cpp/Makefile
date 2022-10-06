SRC=$(wildcard src/*.cpp)
BIN=$(SRC:src/%.cpp=bin/%)

all: bin/ ${BIN}

bin/:
		mkdir -p bin

bin/%: src/%.cpp
		g++ $^ -o $@

clean:
	rm -fr bin/