#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<functional>

using namespace std;
using namespace std::placeholders;

bool check_size(string s , string::size_type sz)
{
	return s.size() < sz ;
}


int main()
{
	string s;
	int value;
	cout << "input a string " << endl;
	cin >> s;
	vector<int> v;
	cout << "input several numbers " << endl;
	while(cin >> value)
		v.push_back(value);
	auto b = bind(check_size,s,_1);
	auto mark = find_if(v.begin() ,v.end() , b);
	for_each(v.begin(),v.end(),[](int a){cout << a << " " ;});
	cout << "\nfind first value is " << *mark << endl;
	return 0;
}
