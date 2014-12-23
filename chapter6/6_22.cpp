#include<iostream>

using namespace std;

void swapintp(int *(&p1) , int *(&p2))
{
	int *tmp;
	tmp = p2;
	p2 = p1;
	p1 = tmp;
}

int main()
{
	int a = 4 ,b = 5 ;
	int *pa = &a;
	int *pb = &b;
	swapintp(pa,pb);
	cout << *pa << *pb <<endl;
	return 0;
}
