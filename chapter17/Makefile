SUBDIR = `ls -d */`
CC = g++
NCC = g++-4.9
CFLAGS = -Wall -std=c++11

all:
	$(CC) $(CFLAGS) 17_10.cpp -o 17_10.o 
	$(CC) $(CFLAGS) 17_12.cpp -o 17_12.o 
	$(CC) $(CFLAGS) 17_13.cpp -o 17_13.o 
	$(NCC) $(CFLAGS) 17_14.cpp -o 17_14.o 
	$(NCC) $(CFLAGS) 17_15.cpp -o 17_15.o 
	$(NCC) $(CFLAGS) 17_17.cpp -o 17_17.o 
	$(NCC) $(CFLAGS) 17_20.cpp -o 17_20.o 
	$(NCC) $(CFLAGS) 17_21.cpp -o 17_21.o 
	$(NCC) $(CFLAGS) 17_23.cpp -o 17_23.o 
	$(NCC) $(CFLAGS) 17_24.cpp -o 17_24.o 
	$(NCC) $(CFLAGS) 17_27.cpp -o 17_27.o 
	for i in $(SUBDIR) ; do \
	       (cd $$i && $(MAKE) ) || exit 1 ; \
       		done	       

clean:
	rm -rf *.o
	for i in $(SUBDIR) ; do \
		(cd $$i && $(MAKE) clean ) || exit 1 ;\
		done
