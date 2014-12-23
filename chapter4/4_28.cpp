#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
	int a[10];
	cout << "sizeof bool  is " << sizeof(bool) <<endl;
	cout << "sizeof int is " << sizeof(int) <<endl;
	cout << "sizeof char is " << sizeof(char) <<endl;
	cout << "sizeof float is " << sizeof(float) <<endl;
	cout << "sizeof double is " << sizeof(double) <<endl;
	cout << "sizeof unsigned is " << sizeof(unsigned) <<endl;
	cout << "sizeof long is " << sizeof(long) <<endl;
	cout << "sizeof string is " << sizeof(string) <<endl;
	cout << "sizeof vector is " << sizeof(vector<int>) <<endl;
	cout << "sizeof array is " << sizeof(a) <<endl;
	return 0;

}

