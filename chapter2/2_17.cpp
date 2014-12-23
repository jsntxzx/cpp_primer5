#include<iostream>

using namespace std;

int main()
{
// tesing lvalue reference
// it is a kind of alias

	int i ,&ri = i;
	i = 55;
	ri = 10;
	cout << "i = " << i <<endl;
	cout << "ri = " << ri <<endl;
	return 0;


}

