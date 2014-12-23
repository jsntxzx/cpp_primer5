#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
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
	vector<string > v; 
	cout << "input sereral strings " << endl;
	while(cin >> s)
		v.push_back(s);
	auto b1 = bind(check_size, _1 ,6);
	int result = count_if(v.begin(),v.end(),b1);
	cout << "strings that have less than 6 charaters : " << result << endl;
	return 0;
}
