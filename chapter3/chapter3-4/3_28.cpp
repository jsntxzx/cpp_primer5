#include<iostream>
#include<string>

using namespace std;

string a[10];
int ia[10];
int main(int argc , char* argv[])
{
	string b[2];
	int ib[2];
	for(auto i : a)
		cout << i << " " ;
	cout <<endl;
	for(auto j : ia )
		cout << j << " ";
	cout <<endl;

	for(auto i1 : b)
		cout << i1 << " ";
	cout << endl;

	for(auto j1 : ib)
		cout << j1 << " ";
	cout <<endl;

	return 0;



}
