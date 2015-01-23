CC = g++
CFLAGS = -Wall -std=c++11

all: TextQuery  QueryResult
	$(CC) $(CFLAGS) 16_22.cpp TextQuery.o QueryResult.o -o 16_22.o

TextQuery: TextQuery.cpp TextQuery.h
	$(CC) $(CFLAGS) -c TextQuery.cpp

QueryResult: QueryResult.cpp QueryResult.h
	$(CC) $(CFLAGS) -c QueryResult.cpp

clean:
	rm -rf *.o
