#include<iostream>

using namespace std;

int main(int argc , char* argv[])
{
	int array[10];
	for(int i = 0 ; i < 10 ; i++)
		array[i] = i;
	for(auto a : array)
		cout << a << " " ;
	cout <<endl;
	return 0;
}
