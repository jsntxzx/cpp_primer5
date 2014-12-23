#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

bool has5morechars(string s)
{
	return s.size() > 5;
}

int main()
{
	string val;
	vector<string> v;
	while(cin >> val)
		v.push_back(val);
	cout << "before : " << endl;
	for(auto vi : v)
		cout << vi << endl ;
	auto mark = partition(v.begin(),v.end(),has5morechars);
	cout << "after : " << endl;
	for(auto b = v.begin();b < mark ; b++ )
		cout << *b << endl;
	return 0;
}
