CC = g++
CFLAGS = -Wall -std=c++11

all:
	$(CC) $(CFLAGS) 12_1.cpp -o 12_1.o 
	$(CC) $(CFLAGS) 12_6.cpp -o 12_6.o 
	$(CC) $(CFLAGS) 12_7.cpp -o 12_7.o 
	$(CC) $(CFLAGS) 12_9.cpp -o 12_9.o 
	$(CC) $(CFLAGS) 12_14.cpp -o 12_14.o 
	$(CC) $(CFLAGS) 12_15.cpp -o 12_15.o 
	cd 12_20 && make && cd ../  

clean:
	rm -rf *.o
	cd 12_20 && make clean && cd ../
