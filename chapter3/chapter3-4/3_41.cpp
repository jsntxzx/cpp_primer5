#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int a[] = {22,33,5,7,7};
	vector<int> b(begin(a),end(a));
	for(auto i : b)
		cout << i << " ";
	cout <<endl;
	return 0;


}
