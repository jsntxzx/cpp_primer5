#include<iostream>
#include<fstream>
#include<iterator>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

class StringCompare
{
	public:
		StringCompare(size_t n) : sz(n) {} 
		bool operator()(const string &s){return s.size() >= sz ;}
	private:
		size_t sz;
};

class StringSort
{
	public:
		bool operator()(const string &a , const string &b) {return a.size() < b.size();}
};



void biggies(vector<string> &s , size_t sz)
{
	sort(s.begin(),s.end());
	auto ne = unique(s.begin(),s.end());
	s.erase(ne,s.end());		
	stable_sort(s.begin(),s.end(),StringSort());
	auto pos = find_if(s.begin(),s.end(),StringCompare(sz));
	cout << "there are " << s.end() - pos << " strings longer than " << sz  << endl;
	cout << "they are : " << endl;
	for_each(pos,s.end(),[](const string &s){cout << s << endl;});	
}		


int main()
{
	fstream file("Makefile",iostream::in);
	istream_iterator<string> in(file) , eof;
	vector<string> v;
	while(in != eof)
		v.push_back(*in++);
	biggies(v,5);
	return 0;
}
