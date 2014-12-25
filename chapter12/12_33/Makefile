all: StrBlob StrBlobPtr QueryResult TextQuery
	g++ -Wall -std=c++11 12_33.cpp StrBlob.o StrBlobPtr.o QueryResult.o TextQuery.o -o 12_33.o

StrBlob: StrBlob.cpp StrBlob.h
	g++ -Wall -std=c++11 -g -c StrBlob.cpp

StrBlobPtr: StrBlobPtr.cpp StrBlobPtr.h
	g++ -Wall -std=c++11 -g -c StrBlobPtr.cpp

QueryResult: QueryResult.cpp QueryResult.h
	g++ -Wall -std=c++11 -g -c QueryResult.cpp

TextQuery: TextQuery.cpp TextQuery.h
	g++ -Wall -std=c++11 -g -c TextQuery.cpp

clean:
	rm -rf *.o
