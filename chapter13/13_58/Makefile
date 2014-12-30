CC = g++
CFLAGS = -Wall -std=c++11

all:Foo
	$(CC) $(CFLAGS) 13_58.cpp Foo.o -o 13_58.o

Foo:Foo.cpp Foo.h
	$(CC) $(CFLAGS) -c Foo.cpp

clean:
	rm -rf *.o
