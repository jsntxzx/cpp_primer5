#include<iostream>

using namespace std;

int test()
{
	static int count = -1 ;
	++ count;
	return count;
}

int main()
{
	for(int i = 0 ; i <10 ; i++)
		cout << "result of " << i << " is " << test() <<endl;
	return 0;
}
