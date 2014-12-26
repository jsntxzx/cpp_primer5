CC = g++
CFLAGS = -Wall -std=c++11

all:TextQuery QueryResult 
	$(CC) $(CFLAGS) 13_21.cpp QueryResult.o TextQuery.o -o 13_21.o

QueryResult:QueryResult.cpp QueryResult.h
	$(CC) $(CFLAGS) -c QueryResult.cpp

TextQuery:TextQuery.cpp TextQuery.h
	$(CC) $(CFLAGS) -c TextQuery.cpp
clean:
	rm -rf *.o
