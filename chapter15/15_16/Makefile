CC = g++
CFLAGS = -Wall -std=c++11

all: Quote Disc_Quote Bulk_Quote
	$(CC) $(CFLAGS) 15_16.cpp Quote.o Disc_Quote.o Bulk_Quote.o  -o 15_16.o


Quote: Quote.cpp Quote.h
	$(CC) $(CFLAGS) -c Quote.cpp

Disc_Quote:Disc_Quote.cpp Disc_Quote.h
	$(CC) $(CFLAGS) -c Disc_Quote.cpp

Bulk_Quote: Bulk_Quote.cpp Bulk_Quote.h
	$(CC) $(CFLAGS) -c Bulk_Quote.cpp
clean:
	rm -rf *.o
