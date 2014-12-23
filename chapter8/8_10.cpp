#include<iostream>
#include<vector>
#include<string>
#include<fstream>
#include<sstream>
using namespace std;

int main()
{
	fstream infile("Makefile");
	string line,word;
	vector<string> v;
	while(getline(infile , line))
		v.push_back(line);
	for(auto item : v)
	{
		istringstream record(item);
		while(record>>word)
			cout << word << " ";
		cout << endl;
	}
	
	return 0;


}
