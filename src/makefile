
try : try.o operations.o
	g++ try.o operations.o -o main

try.o : try.cpp board.h operations.h pieces.h
	g++ -c -Wall try.cpp

operations.o : operations.cpp operations.h pieces.h
	g++ -c -Wall operations.cpp