#include<iostream>
#include<fstream>
#include<string>
#include "StrBlob.h"
#include "StrBlobPtr.h"
using namespace  std;


void print(StrBlob &s)
{
	auto p = s.begin() ;
	while(p.pos() < s.size())
	{
		cout << p.deref() << endl;
		p.incr();
	}
}

int main()
{
	StrBlob b1 ;
	fstream file("Makefile",iostream::in);
	string line ;
	while(getline(file,line))
		b1.push_back(line);
	StrBlob b2(b1);
	cout << "before : " << endl;
	print(b1);print(b2);	
	b2.push_back("new line");
	cout << "after : " << endl;
	print(b1);print(b2);
	return 0;
}
