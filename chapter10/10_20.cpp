#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	string s;
	vector<string > v; 
	cout << "input sereral strings " << endl;
	while(cin >> s)
		v.push_back(s);
	int result = count_if(v.begin(),v.end(),[](string & s){return s.size()>= 6 ;});
	cout << "strings that have more than 6 charaters : " << result << endl;
	return 0;
}
