CC = g++
CFLAGS = -Wall -std=c++11

all:String StrBlob StrBlobPtr StrVec
	$(CC) $(CFLAGS) 14_18.cpp String.o StrBlob.o StrBlobPtr.o StrVec.o  -o 14_18.o

StrBlob:StrBlob.cpp StrBlob.h
	$(CC) $(CFLAGS) -c StrBlob.cpp

StrBlobPtr:StrBlobPtr.cpp StrBlobPtr.h
	$(CC) $(CFLAGS) -c StrBlobPtr.cpp

String: String.cpp String.h
	$(CC) $(CFLAGS) -c String.cpp

StrVec: StrVec.cpp StrVec.h
	$(CC) $(CFLAGS) -c StrVec.cpp

clean:
	rm -rf *.o
