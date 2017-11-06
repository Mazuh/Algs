RM = rm -rf
CC=g++

LIB_DIR=./lib
INC_DIR=./include
SRC_DIR=./src
OBJ_DIR=./build
BIN_DIR=./bin
DOC_DIR=./doc
TEST_DIR=./test

CFLAGS = -Wall -pedantic -ansi -std=c++14

.PHONY: all clean distclean doxy

all: dir doxy lab5

debug: CFLAGS += -g -O0 -pg
debug: dir lab5

lab5: $(OBJ_DIR)/lab5.o
	@echo "======================"
	@echo "Construindo $@:"
	$(CC) $(CFLAGS) -o $(BIN_DIR)/$@ $^
	@echo "Pronto para rodar em $(BIN_DIR)"
	@echo "======================"

$(OBJ_DIR)/lab5.o: $(SRC_DIR)/main.cpp $(INC_DIR)/
	$(CC) -c $(CFLAGS) -lm -I$(INC_DIR) -o $@ $<

doxy:
	$(RM) $(DOC_DIR)/*
	doxygen doxyfile

valgrind: lab5
	valgrind -v --leak-check=full --show-reachable=yes ./bin/lab5

dir:
	mkdir -p bin/ build/ doc/

clean: dir
	$(RM) $(BIN_DIR)
	$(RM) $(OBJ_DIR)
	$(RM) $(DOC_DIR)
