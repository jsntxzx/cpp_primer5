#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

void sort_and_erase(vector<int> &v)
{
	sort(v.begin(),v.end());
	auto uend = unique(v.begin(),v.end());
	v.erase(uend,v.end());
}

void printvector(vector<int> &v)
{
	for(auto vi : v)
		cout << vi << " " ;
	cout << endl;
}

int main()
{
	int val;
	vector<int> v;
	while(cin >> val)
		v.push_back(val);
	printvector(v);
	sort_and_erase(v);
	printvector(v);
	return 0;
}
