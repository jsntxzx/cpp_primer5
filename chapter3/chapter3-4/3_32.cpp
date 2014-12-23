#include<iostream>

using namespace std;

int main(int argc , char* argv[])
{
	int array[10];
	int b[10];
	for(int i = 0 ; i < 10 ; i++)
		array[i] = i;
	for(int i = 0; i < 10; i++)
		b[i] = array[i];
	for(auto k : b)
		cout << k << " ";
	cout << endl;
	return 0;
}
