#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int> a{11,22,3,46,7};
	int b[5];
	for(int i = 0 ; i < 5 ; i++)
		b[i] = a[i];
	for(auto j : b)
		cout << j << " ";
	cout <<endl;
	return 0;


}
