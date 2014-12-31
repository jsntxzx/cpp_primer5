CC = g++
CFLAGS = -Wall -std=c++11

all: StrVec
	$(CC) $(CFLAGS) 14_23.cpp StrVec.o -o 14_23.o


StrVec: StrVec.cpp StrVec.h
	$(CC) $(CFLAGS) -c StrVec.cpp

clean:
	rm -rf *.o
