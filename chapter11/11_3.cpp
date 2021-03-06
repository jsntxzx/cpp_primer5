#include<iostream>
#include<map>
#include<string>
#include<iterator>
#include<fstream>
using namespace std;

int main()
{
	fstream file("Makefile",iostream::in);
	istream_iterator<string> in(file),eof;
	map<string,int> word_count;
	while(in != eof)
		++word_count[*in++];
	for(auto item : word_count)
		cout << item.first << " occurs " << item.second << " times " << endl;
	return 0;


}
