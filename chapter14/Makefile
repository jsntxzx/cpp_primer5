SUBDIR = `ls -d */`
CC = g++
CFLAGS = -Wall -std=c++11

all:
	$(CC) $(CFLAGS) 13_11.cpp -o 13_11.o 
	for i in $(SUBDIR) ; do \
	       (cd $$i && $(MAKE) ) || exit 1 ; \
       		done	       

clean:
	rm -rf *.o
	for i in $(SUBDIR) ; do \
		(cd $$i && $(MAKE) clean ) || exit 1 ;\
		done
