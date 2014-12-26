CC = g++
CFLAGS = -Wall -std=c++11

all: HasPtr 
	$(CC) $(CFLAGS) 13_27.cpp HasPtr.o -o 13_27.o

HasPtr:HasPtr.cpp HasPtr.h
	$(CC) $(CFLAGS) -c HasPtr.cpp

clean:
	rm -rf *.o
