CC = g++
CFLAGS = -Wall -std=c++11

all: Sales_data
	$(CC) $(CFLAGS) 14_10.cpp Sales_data.o -o 14_10.o


Sales_data: Sales_data.cpp Sales_data.h
	$(CC) $(CFLAGS) -c Sales_data.cpp

clean:
	rm -rf *.o
