#include<iostream>
#include "StrVec.h"

using namespace std ;

int main()
{
	StrVec s = { "aa" , "bb"} ;
	s.emplace_back(10,'c');
	s.emplace_back("cccc");
	cout << s.size() << endl ;
	return 0 ;
}
