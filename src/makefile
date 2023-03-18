OBJS = try.o operations.o
CC = g++
CFLAGS = -Wall -c
LFLAGS = -Wall



try : try.o operations.o
	$(CC) $(LFLAGS) try.o operations.o -o try

try.o : try.cpp board.h operations.h pieces.h
	$(CC) $(CFLAGS) try.cpp

operations.o : operations.cpp operations.h pieces.h
	$(CC) $(CFLAGS) operations.cpp

clean:
	\rm *.o try
