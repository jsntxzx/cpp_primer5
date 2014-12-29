CC = g++
CFLAGS = -Wall -std=c++11

all: Message  Folder
	$(CC) $(CFLAGS) 13_37.cpp Message.o Folder.o -o 13_37.o

Message: Message.cpp Message.h
	$(CC) $(CFLAGS) -c Message.cpp

Folder: Folder.cpp Folder.h
	$(CC) $(CFLAGS) -c Folder.cpp
 
clean:
	rm -rf *.o
