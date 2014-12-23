#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

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
	auto wc = find_if(v.begin(), v.end(), [sz](const string &s){ return s.size()>sz ;});
	for_each(wc, v.end(), [](const string &s){cout << s << " "; } );
	cout << endl;
	return 0;
}
