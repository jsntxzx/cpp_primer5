#include<iostream>
#include "String.h"

using namespace std;

int main()
{
	String s("hello world");
	cout << s.size() << endl;
	s.push_back('!');
	cout << s << endl ;
	return 0;
}
