#include<iostream>

using namespace std;


void myswap(int &p1, int &p2)
{
	int tmp;
	tmp = p2;
	p2 = p1;
	p1 = tmp;
}


int main()
{
int a = 5 , b = 4 ;
cout << "a = " << a << " b = " << b <<endl;
myswap(a,b);
cout << "a = " << a << " b = " << b <<endl;
return 0;
}
