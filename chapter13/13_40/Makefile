CC = g++
CFLAGS = -Wall -std=c++11

all: StrVec 
	$(CC) $(CFLAGS) 13_40.cpp StrVec.o -o 13_40.o

StrVec:StrVec.cpp StrVec.h
	$(CC) $(CFLAGS) -c StrVec.cpp

clean:
	rm -rf *.o
