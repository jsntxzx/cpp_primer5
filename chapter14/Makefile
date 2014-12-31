SUBDIR = `ls -d */`
CC = g++
CFLAGS = -Wall -std=c++11

all:
	$(CC) $(CFLAGS) 14_35.cpp -o 14_35.o 
	$(CC) $(CFLAGS) 14_36.cpp -o 14_36.o 
	$(CC) $(CFLAGS) 14_37.cpp -o 14_37.o 
	for i in $(SUBDIR) ; do \
	       (cd $$i && $(MAKE) ) || exit 1 ; \
       		done	       

clean:
	rm -rf *.o
	for i in $(SUBDIR) ; do \
		(cd $$i && $(MAKE) clean ) || exit 1 ;\
		done
