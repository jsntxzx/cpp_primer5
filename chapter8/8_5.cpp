#include<iostream>
#include<fstream>
#include<vector>
#include<string>

using namespace std;

int main()
{
	ifstream infile("Makefile",fstream::in);
	vector<string> v;
	string s;
	while( infile>>s )
		v.push_back(s);
	infile.close();
	for (auto line : v)
		cout << line <<endl;
	return 0;



}
