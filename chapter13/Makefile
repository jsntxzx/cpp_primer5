SUBDIR = `ls -d */`
CC = g++
CFLAGS = -Wall -std=c++11

all:
	$(CC) $(CFLAGS) 13_11.cpp -o 13_11.o 
	$(CC) $(CFLAGS) 13_13.cpp -o 13_13.o 
	$(CC) $(CFLAGS) 13_14.cpp -o 13_14.o 
	$(CC) $(CFLAGS) 13_15.cpp -o 13_15.o 
	$(CC) $(CFLAGS) 13_16.cpp -o 13_16.o 
	$(CC) $(CFLAGS) 13_18.cpp -o 13_18.o 
	$(CC) $(CFLAGS) 13_19.cpp -o 13_19.o 
	$(CC) $(CFLAGS) 13_22.cpp -o 13_22.o 
	for i in $(SUBDIR) ; do \
	       (cd $$i && $(MAKE) ) || exit 1 ; \
       		done	       

clean:
	rm -rf *.o
	for i in $(SUBDIR) ; do \
		(cd $$i && $(MAKE) clean ) || exit 1 ;\
		done
