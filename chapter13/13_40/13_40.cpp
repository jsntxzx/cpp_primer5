#include<iostream>
#include "StrVec.h"

using namespace std;

int main()
{
	StrVec s1 ;
	s1.push_back("hello ") ;
	s1.push_back("world");
	StrVec s2 ( {"a","bc","ed"});
	cout << "s1's size is " << s1.size() << endl; 
	cout << "s2's size is " << s2.size() << endl;
	return 0;
}	
