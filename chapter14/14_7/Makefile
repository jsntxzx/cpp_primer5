CC = g++
CFLAGS = -Wall -std=c++11

all: String
	$(CC) $(CFLAGS) 14_7.cpp String.o -o 14_7.o


String: String.cpp String.h
	$(CC) $(CFLAGS) -c String.cpp

clean:
	rm -rf *.o
