#include<iostream>

using namespace std;


void myswap(int *p1, int *p2)
{
	int tmp;
	tmp = *p2;
	*p2 = *p1;
	*p1 = tmp;
}


int main()
{
int a = 5 , b = 4 ;
int *pa = &a;
int *pb = &b;
cout << "a = " << a << " b = " << b <<endl;
myswap(pa,pb);
cout << "a = " << a << " b = " << b <<endl;
return 0;
}
