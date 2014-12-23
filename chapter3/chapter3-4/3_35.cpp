#include<iostream>

using namespace std;

int main()
{
	int a[] = {1,2,3,5,6};
	for (auto i : a)
		cout << i << " ";
	cout << endl;
	int *ba = begin(a);
	int *ea = end(a);
	for(auto i = ba ; i < ea ; i++)
		*i = 0;
	for (auto i : a)
		 cout << i << " ";
	cout << endl;
	return 0;
}
