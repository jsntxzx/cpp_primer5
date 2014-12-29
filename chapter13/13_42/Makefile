CC = g++
CFLAGS = -Wall -std=c++11

all: StrVec TextQuery QueryResult
	$(CC) $(CFLAGS) 13_42.cpp StrVec.o TextQuery.o QueryResult.o -o 13_42.o

StrVec:StrVec.cpp StrVec.h
	$(CC) $(CFLAGS) -c StrVec.cpp

TextQuery:TextQuery.cpp TextQuery.h
	$(CC) $(CFLAGS) -c TextQuery.cpp

QueryResult: QueryResult.cpp QueryResult.h
	$(CC) $(CFLAGS) -c QueryResult.cpp
clean:
	rm -rf *.o
