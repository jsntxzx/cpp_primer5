#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int> v = {23,48,34,42,55,6,765};
	for(auto &value : v)
		value = ((value % 2 == 1) ? value*2 : value);
	for(auto value : v)
		cout << value << " ";
	cout <<endl;
	return 0;
}
