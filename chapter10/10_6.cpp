#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
	vector<int> v = {12,3,4,6,7,8};
	cout << "before : " << endl;
	for(auto vi : v)
		cout << vi << " ";
	cout << endl;
	fill_n(v.begin(),v.size(),0);
	cout << "after : " << endl;
	for(auto vi : v)
		cout << vi << " ";
	cout << endl;
	vector<int> vtest;
	vtest.reserve(10);
	fill_n(vtest.begin(),10,0);
	cout << vtest.size() << endl;
	return 0;




}
