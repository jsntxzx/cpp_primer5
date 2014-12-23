#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
	vector<char> cv ;
	char c;
	while(cin >> c)
		cv.push_back(c);
	string s;
	for(auto item : cv)
		s.push_back(item);
	cout << s << endl;
	return 0;


}
