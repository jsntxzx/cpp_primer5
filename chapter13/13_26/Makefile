CC = g++
CFLAGS = -Wall -std=c++11

all:StrBlob StrBlobPtr
	$(CC) $(CFLAGS) 13_26.cpp StrBlob.o StrBlobPtr.o -o 13_26.o

StrBlob:StrBlob.cpp StrBlob.h
	$(CC) $(CFLAGS) -c StrBlob.cpp

StrBlobPtr:StrBlobPtr.cpp StrBlobPtr.h
	$(CC) $(CFLAGS) -c StrBlobPtr.cpp
clean:
	rm -rf *.o
