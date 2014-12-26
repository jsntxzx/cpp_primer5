#include<iostream>
#include"HasPtr.h"

using namespace std;

int main()
{
	HasPtr h1 ;
	HasPtr h2(h1);	
	{
		HasPtr h3 = h2 ;
		h1.print();
		h2.print();
		h3.print();
	}
	h1.print();
	h2.print();
	return 0; 
}

