CC = g++
CFLAGS = -Wall -std=c++11

all: String
	$(CC) $(CFLAGS) 13_44.cpp String.o -o 13_44.o


String: String.cpp String.h
	$(CC) $(CFLAGS) -c String.cpp

clean:
	rm -rf *.o
