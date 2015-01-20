SUBDIR = `ls -d */`
CC = g++
CFLAGS = -Wall -std=c++11

all:
	$(CC) $(CFLAGS) 16_2.cpp -o 16_2.o 
	$(CC) $(CFLAGS) 16_4.cpp -o 16_4.o 
	$(CC) $(CFLAGS) 16_5.cpp -o 16_5.o 
	$(CC) $(CFLAGS) 16_6.cpp -o 16_6.o 
	for i in $(SUBDIR) ; do \
	       (cd $$i && $(MAKE) ) || exit 1 ; \
       		done	       

clean:
	rm -rf *.o
	for i in $(SUBDIR) ; do \
		(cd $$i && $(MAKE) clean ) || exit 1 ;\
		done
