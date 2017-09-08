PROG = avaliacao1.bin
CC = g++
CFLAGS = -Wall -pedantic -ansi -std=c++11
OBJS = main.o aluno.o turma.o

$(PROG): $(OBJS)
	$(CC) -o $(PROG) $(OBJS) -lm

aluno.o: aluno.cpp
	$(CC) $(CFLAGS) -c aluno.cpp
turma.o: turma.cpp
	$(CC) $(CFLAGS) -c turma.cpp

main.o: main.cpp aluno.h turma.h
	$(CC) $(CFLAGS) -c main.cpp

clean:
	rm -f core $(PROG) $(OBJS)
