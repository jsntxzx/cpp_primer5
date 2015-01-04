#include<iostream>
#include<fstream>
#include<string>
#include<iterator>
#include<algorithm>
#include<map>
#include<set>
using namespace std;

class WordLength
{
	public:
		WordLength(size_t n):sz(n){}
		bool operator()(const string &s){return s.size()==sz ;}
	private:
		size_t sz;
};

int main()
{
	fstream file("Makefile",iostream::in);
	istream_iterator<string> in(file),eof;
	map<size_t,size_t> m;
	while(in != eof)
	{
		for(size_t i = 0; i< 10 ; i++)
		{
			WordLength w(i);
			if(w(*in))
				m[i]++;
		}
		in++;	
	}
	for(auto p : m)
	{
		cout << "there are " << p.second << "  words that length equals " 
		      << p.first << endl;
	}
	return 0;
}

