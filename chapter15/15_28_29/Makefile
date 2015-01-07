CC = g++
CFLAGS = -Wall -std=c++11

all: Quote  Bulk_Quote
	$(CC) $(CFLAGS) main.cpp Quote.o Bulk_Quote.o  -o main.o

Quote: Quote.cpp Quote.h
	$(CC) $(CFLAGS) -c Quote.cpp

Bulk_Quote: Bulk_Quote.cpp Bulk_Quote.h
	$(CC) $(CFLAGS) -c Bulk_Quote.cpp
clean:
	rm -rf *.o
