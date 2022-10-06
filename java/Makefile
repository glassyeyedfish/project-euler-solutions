SRC=$(wildcard src/*.java)
BIN=$(SRC:src/%.java=bin/%.class)

all: ${BIN}

bin/%.class: src/%.java
		javac $^ -d .

clean:
	rm -fr bin/