CC = g++
CFLAGS = -Wall -std=c++11

all: Sales_data
	$(CC) $(CFLAGS) 17_5.cpp Sales_data.o -o 17_5.o


Sales_data: Sales_data.cpp Sales_data.h
	$(CC) $(CFLAGS) -c Sales_data.cpp

clean:
	rm -rf *.o
