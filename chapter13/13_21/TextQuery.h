#include<iostream>
#include<fstream>
#include<vector>
#include<string>
#include<memory>
#include<set>
#include<map>

using namespace std;

class QueryResult ;

class TextQuery
{
	public:
		TextQuery(ifstream &in);
		QueryResult query(const string &) const ;
		TextQuery() = delete ;
		TextQuery(const TextQuery &) = delete ;		
	private:
		shared_ptr<vector<string>> file ;
		map<string , shared_ptr<set<string::size_type>>> wm;
};
