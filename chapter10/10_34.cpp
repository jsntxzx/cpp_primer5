#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
	cout << "input several strings "  << endl;
	string s;
	vector<string> v;
	while(cin >> s) 
		v.push_back(s);
	for(auto b = v.crbegin();b != v.crend() ; b++)
		cout << *b << endl;
	return 0;
}

