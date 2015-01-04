#include<iostream>
#include<fstream>
#include<string>
#include<iterator>
#include<algorithm>
#include<map>
using namespace std;

class WordLength
{
	public:
		WordLength(size_t n):sz(n){}
		bool operator()(const string &s){return s.size()>=sz ;}
	private:
		size_t sz;
};

int main()
{
	fstream file("Makefile",iostream::in);
	istream_iterator<string> in(file),eof;
	map<string,size_t> m;
	while(in != eof)
	{
			WordLength w(10);
			if(w(*in++))
				m[">=10"] ++ ;
			else
				m["<10"] ++ ;
	
	}
	for(auto p : m)
	{
		cout << "there are " << p.second << "  words that length " 
		      << p.first << endl;
	}
	return 0;
}

