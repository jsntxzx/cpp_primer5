#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s;
	cin >> s;
	char *p = new char[s.size()+1];
	for(string::size_type i =0 ; i < s.size() ; i++)
		p[i] = s[i];
	p[s.size()] = '\0' ;
	cout << string(p) << endl;
	delete []p;
	return 0;

}
