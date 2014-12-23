#include<iostream>

using namespace std;

int main()
{
	int i; double d;
	d = i = 3.5;
	cout << "i = " << i <<endl;
	cout << "d = " << d <<endl;
	i = d = 3.5;
	cout << "i = " << i <<endl;
	cout << "d = " << d <<endl;
	return 0;

}
