
CC=g++
FLAGS=-std=c++11

BIN=e2.bin

$(BIN): main.cpp
	$(CC) -o $@ $^ $(FLAGS)

.PHONY: clean

clean:
	rm -f $(BIN)

