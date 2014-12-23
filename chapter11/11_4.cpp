#include<iostream>
#include<map>
#include<string>
#include<iterator>
#include<fstream>
#include<cctype>

using namespace std;

string convertstr(string s)
{
	string n;
	for(string::size_type i = 0; i< s.size();i++)
	{
		if(isalnum(s[i]))
			n.push_back(tolower(s[i]));
		else if(!ispunct(s[i]))
			n.push_back(s[i]);		
	}
	return n;
}

int main()
{
	fstream file("Makefile",iostream::in);
	istream_iterator<string> in(file),eof;
	map<string,int> word_count;
	while(in != eof)
	{
		string s = convertstr(*in);
		++word_count[s];
		in++;
	}
	for(auto item : word_count)
		cout << item.first << " occurs " << item.second << " times " << endl;
	return 0;
}
