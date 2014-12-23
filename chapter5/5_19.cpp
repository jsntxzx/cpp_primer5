#include<iostream>
#include<string>

using namespace std;

int main(int argc , char* argv[])
{
	string s1,s2;
	do
	{
	cout << "input first string" << endl;
	cin >> s1 ;
	cout << "input second string" << endl;
	cin >> s2;
	if(s1.size() < s2.size())
		cout << "the smaller one is " << s1 <<endl;
	else if (s1.size() > s2.size())
		cout << "the smaller one is " << s2 <<endl;
       	     else
       		cout << "the strings are the same size" <<endl;
	cout << "end of this round" <<endl;
	}
	while(!cin.eof());
	return 0;

}

