PROG = lab2.bin
CC = g++
CFLAGS = -Wall -pedantic -ansi -std=c++11
OBJS = main.o empresa.o

$(PROG): $(OBJS)
	$(CC) -o $(PROG) $(OBJS) -lm

empresa.o: empresa.cpp
	$(CC) $(CFLAGS) -c empresa.cpp

main.o: main.cpp empresa.h
	$(CC) $(CFLAGS) -c main.cpp

clean:
	rm -f core $(PROG) $(OBJS)
