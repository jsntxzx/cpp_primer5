#include<iostream>

using namespace std;


int largerone(int a,const int *p)
{
	return ((a>*p)?a:*p);
}

int main()
{
	int a = 8 , b = 9;
	int *p = &b;
	cout << largerone(a,p) << endl;
	return 0;
}
