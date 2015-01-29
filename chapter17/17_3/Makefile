CC = g++
CFLAGS = -Wall -std=c++11

all:   TextQuery
	$(CC) $(CFLAGS) 17_3.cpp TextQuery.o -o 17_3.o

TextQuery: TextQuery.cpp TextQuery.h
	$(CC) $(CFLAGS) -c TextQuery.cpp 

clean:
	rm -rf *.o
