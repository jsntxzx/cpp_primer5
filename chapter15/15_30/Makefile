CC = g++
CFLAGS = -Wall -std=c++11

all: Quote  Bulk_Quote Basket
	$(CC) $(CFLAGS) 15_30.cpp Quote.o Bulk_Quote.o Basket.o -o 15_30.o

Quote: Quote.cpp Quote.h
	$(CC) $(CFLAGS) -c Quote.cpp

Bulk_Quote: Bulk_Quote.cpp Bulk_Quote.h
	$(CC) $(CFLAGS) -c Bulk_Quote.cpp

Basket: Basket.cpp Basket.h
	$(CC) $(CFLAGS) -c Basket.cpp

clean:
	rm -rf *.o
