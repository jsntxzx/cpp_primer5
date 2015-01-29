#include<iostream>
#include<fstream>
#include<vector>
#include<string>
#include<memory>
#include<set>
#include<map>
#include<tuple>

using namespace std;

class QueryResult ;

class TextQuery
{
	public:
		TextQuery(ifstream &in);
		tuple<string , shared_ptr<set<string::size_type>> , shared_ptr<vector<string>> > query(const string &) const ;
	private:
		shared_ptr<vector<string>> file ;
		map<string , shared_ptr<set<string::size_type>>> wm;
};
