#include<iostream>
#include<fstream>
#include<vector>
#include<string>
#include<algorithm>
#include<iterator>
using namespace std;

int main()
{
	ifstream file("sample.txt",iostream::in);
	vector<string > v;
	istream_iterator<string > iter{file},eof;
	while(iter != eof)
		v.push_back(*iter++);
	for(auto vi : v)
		cout << vi << endl;
	return 0;
}

