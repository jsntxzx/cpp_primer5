SUBDIR = `ls -d */`
CC = g++
CFLAGS = -Wall -std=c++11

all:
	$(CC) $(CFLAGS) 16_2.cpp -o 16_2.o 
	$(CC) $(CFLAGS) 16_4.cpp -o 16_4.o 
	$(CC) $(CFLAGS) 16_5.cpp -o 16_5.o 
	$(CC) $(CFLAGS) 16_6.cpp -o 16_6.o 
	$(CC) $(CFLAGS) 16_7.cpp -o 16_7.o 
	$(CC) $(CFLAGS) 16_19.cpp -o 16_19.o 
	$(CC) $(CFLAGS) 16_20.cpp -o 16_20.o 
	$(CC) $(CFLAGS) 16_27.cpp -o 16_27.o 
	$(CC) $(CFLAGS) 16_41.cpp -o 16_41.o 
	$(CC) $(CFLAGS) 16_47.cpp -o 16_47.o 
	$(CC) $(CFLAGS) 16_50.cpp -o 16_50.o 
	$(CC) $(CFLAGS) 16_52.cpp -o 16_52.o 
	$(CC) $(CFLAGS) 16_53.cpp -o 16_53.o 
	$(CC) $(CFLAGS) 16_61.cpp -o 16_61.o 
	$(CC) $(CFLAGS) 16_63.cpp -o 16_63.o 
	$(CC) $(CFLAGS) 16_64.cpp -o 16_64.o 
	$(CC) $(CFLAGS) 16_65.cpp -o 16_65.o 
	for i in $(SUBDIR) ; do \
	       (cd $$i && $(MAKE) ) || exit 1 ; \
       		done	       

clean:
	rm -rf *.o
	for i in $(SUBDIR) ; do \
		(cd $$i && $(MAKE) clean ) || exit 1 ;\
		done
