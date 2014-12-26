#include<iostream>
#include"HasPtr.h"

using namespace std;

int main()
{
	HasPtr h1 ;
	HasPtr h2(h1);	
	h1.assign(5);
	h2.assign(4);
	h1.print();
	h2.print();
	swap(h1,h2);
	h1.print();
	h2.print();
	return 0; 
}

