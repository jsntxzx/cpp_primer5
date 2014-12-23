#include<iostream>
#include<string>
#include<cctype>
using namespace std;



bool SHU(const string &s)
{
	for(auto c : s)
	{
		if(isupper(c))
			return true;
	}
	return false;
}

void StoL(string &s)
{
	for(auto &c : s)
	{
		if(isupper(c))
			c = tolower(c);
	}
}


int main(int argc , char *argv[])
{
	string s;
	cout << "input a string " << endl;
	cin >> s;
	cout << "Does String Have a Upper Letter ?" << SHU(s) << endl;
	if(SHU(s))
		StoL(s);
	cout << s << endl;
	return 0;
}
