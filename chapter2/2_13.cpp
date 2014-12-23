#include<iostream>

using namespace std;

int gvalue = 200;

int main()
{
	int gvalue = 100;
	int j = gvalue;
	cout << " j = " << j <<endl;
	j = ::gvalue;
	cout << " j = " << j <<endl;
	return 0;
}
