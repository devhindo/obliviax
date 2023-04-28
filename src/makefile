OBJS = obliviax.o operations.o
CC = g++
CFLAGS = -Wall -c
LFLAGS = -Wall



obliviax : obliviax.o operations.o
	$(CC) $(LFLAGS) obliviax.o operations.o -o obliviax

obliviax.o : obliviax.cpp board.h operations.h pieces.h
	$(CC) $(CFLAGS) obliviax.cpp

operations.o : operations.cpp operations.h pieces.h
	$(CC) $(CFLAGS) operations.cpp

clean:
	\rm *.o obliviax
