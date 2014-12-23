#include<iostream>
#include<vector>
#include<string>
#include<stack>
using namespace std;

int main()
{
	string value;
	vector<string> v;
	stack<string > s;
	cout << "input several strings " << endl;
	while(cin >> value){
		v.push_back(value);
		s.push(value);
	}
		
	while(!s.empty())
	{
		cout << s.top() << endl;
		s.pop();
	}
	return 0;

}
