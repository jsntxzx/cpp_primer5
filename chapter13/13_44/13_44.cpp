#include<iostream>
#include "String.h"

using namespace std;

int main()
{
	String s("hello world");
	cout << s.size() << endl;
	s.push_back('!');
	s.print();
	return 0;
}
