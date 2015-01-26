#include<iostream>
#include<string>
#include"Blob.h"
using namespace std ;


int main()
{
	Blob<int> b1 = {1 ,2 ,3 ,4};
	Blob<string> b2 = {"hello" , "xiang" , "world"};
	cout << b1.back() << endl ;
	cout << b2.size() << endl ;
	int ia[] = {9,8,7,6} ;
	Blob<int> b3(begin(ia) , end(ia));
	cout << b3.back() <<endl ;
	return 0 ;
}
