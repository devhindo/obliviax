try : try.o operations.o
	g++ -Wall try.o operations.o -o try

try.o : try.cpp board.h operations.h pieces.h
	g++ -c -Wall try.cpp

operations.o : operations.cpp operations.h pieces.h
	g++ -c -Wall operations.cpp