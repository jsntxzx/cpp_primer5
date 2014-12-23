#include<iostream>
#include<fstream>
#include<string>
#include "StrBlob.h"
#include "StrBlobPtr.h"
using namespace  std;

int main()
{
	StrBlob b1 ;
	fstream file("test.txt",iostream::in);
	string line ;
	while(getline(file,line))
		b1.push_back(line);	
	auto p = b1.begin() ;
	while(p.pos() < b1.size())
	{
		cout << p.deref() << endl;
		p.incr();
	}
	return 0;
}
