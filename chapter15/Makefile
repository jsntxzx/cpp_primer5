SUBDIR = `ls -d */`
CC = g++
CFLAGS = -Wall -std=c++11

all:
	$(CC) $(CFLAGS) 15_6.cpp -o 15_6.o 
	$(CC) $(CFLAGS) 15_7.cpp -o 15_7.o 
	$(CC) $(CFLAGS) 15_20.cpp -o 15_20.o 
	for i in $(SUBDIR) ; do \
	       (cd $$i && $(MAKE) ) || exit 1 ; \
       		done	       

clean:
	rm -rf *.o
	for i in $(SUBDIR) ; do \
		(cd $$i && $(MAKE) clean ) || exit 1 ;\
		done
