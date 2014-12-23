#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<functional>

using namespace std;
using namespace std::placeholders;

bool check_size(string s ,string::size_type sz)
{
	return s.size() > sz ;
}

int main()
{
	string s;
	vector<string> v;
	while(cin >> s)
		v.push_back(s);
	//first sort and unique
	sort(v.begin(),v.end());
	auto uend = unique(v.begin(), v.end());
	v.erase(uend, v.end());
	//stable sort
	stable_sort(v.begin(),v.end(),[](const string &a , const string &b){ return a.size() < b.size();});
	string::size_type sz = 5 ;
	cout << "choose string longer than " << sz << endl;
	auto b = bind(check_size,_1,sz);
	auto wc = partition(v.begin(), v.end(), b);
	for_each(v.begin() , wc , [](const string &s){cout << s << " "; } );
	cout << endl;
	return 0;
}
