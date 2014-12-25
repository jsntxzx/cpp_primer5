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
	$(CC) $(CFLAGS) 12_23.cpp -o 12_23.o 
	$(CC) $(CFLAGS) 12_24.cpp -o 12_24.o 
	$(CC) $(CFLAGS) 12_26.cpp -o 12_26.o 
	$(CC) $(CFLAGS) 12_28.cpp -o 12_28.o 
	cd 12_30 && make && cd ../  
	cd 12_32 && make && cd ../  
	cd 12_33 && make && cd ../  

clean:
	rm -rf *.o
	cd 12_20 && make clean && cd ../
	cd 12_30 && make clean && cd ../
	cd 12_32 && make clean && cd ../
	cd 12_33 && make clean && cd ../
