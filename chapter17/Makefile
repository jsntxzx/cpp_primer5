SUBDIR = `ls -d */`
CC = g++
CFLAGS = -Wall -std=c++11

all:
	$(CC) $(CFLAGS) 17_10.cpp -o 17_10.o 
	$(CC) $(CFLAGS) 17_12.cpp -o 17_12.o 
	$(CC) $(CFLAGS) 17_13.cpp -o 17_13.o 
	for i in $(SUBDIR) ; do \
	       (cd $$i && $(MAKE) ) || exit 1 ; \
       		done	       

clean:
	rm -rf *.o
	for i in $(SUBDIR) ; do \
		(cd $$i && $(MAKE) clean ) || exit 1 ;\
		done
