CC = g++
CFLAGS = -Wall -std=c++11

all: TextQuery  QueryResult Query_base WordQuery NotQuery BinaryQuery AndQuery OrQuery Query
	$(CC) $(CFLAGS) 15_39.cpp TextQuery.o QueryResult.o Query_base.o WordQuery.o NotQuery.o BinaryQuery.o AndQuery.o OrQuery.o Query.o -o 15_39.o

TextQuery: TextQuery.cpp TextQuery.h
	$(CC) $(CFLAGS) -c TextQuery.cpp

QueryResult: QueryResult.cpp QueryResult.h
	$(CC) $(CFLAGS) -c QueryResult.cpp

Query_base: Query_base.cpp Query_base.h
	$(CC)  $(CFLAGS)  -c Query_base.cpp

WordQuery: WordQuery.cpp WordQuery.h
	$(CC)  $(CFLAGS)  -c WordQuery.cpp

NotQuery: NotQuery.cpp NotQuery.h
	$(CC)  $(CFLAGS)  -c NotQuery.cpp

BinaryQuery: BinaryQuery.cpp BinaryQuery.h
	$(CC)  $(CFLAGS)  -c BinaryQuery.cpp

AndQuery: AndQuery.cpp AndQuery.h
	$(CC)  $(CFLAGS)  -c AndQuery.cpp

OrQuery: OrQuery.cpp OrQuery.h
	$(CC)  $(CFLAGS)  -c OrQuery.cpp

Query: Query.cpp Query.h
	$(CC) $(CFLAGS) -c Query.cpp

clean:
	rm -rf *.o
