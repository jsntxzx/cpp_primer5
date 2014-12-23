#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;


bool isShorter(const string &s1 , const string &s2)
{
	return s1.size() < s2.size() ;
}

void sort_and_erase(vector<string> &v)
{
	stable_sort(v.begin(),v.end(),isShorter);
	auto uend = unique(v.begin(),v.end());
	v.erase(uend,v.end());
}

void printvector(vector<string> &v)
{
	for(auto vi : v)
		cout << vi << " " ;
	cout << endl;
}

int main()
{
	string val;
	vector<string> v;
	while(cin >> val)
		v.push_back(val);
	printvector(v);
	sort_and_erase(v);
	printvector(v);
	return 0;
}
