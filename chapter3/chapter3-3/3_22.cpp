#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(int argc , char* argv[])
{
	vector<string> text;
	string line;
	cout << "intput serveral words(using line)" <<endl;
	while(getline(cin,line))
		text.push_back(line);
	for(auto it = text.begin() ; it != text.end() && (*it) != " " ; it++)
		cout << *it ;
	cout << endl;
	return 0;
}
