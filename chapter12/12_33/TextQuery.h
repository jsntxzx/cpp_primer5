#include<iostream>
#include<fstream>
#include<vector>
#include<string>
#include<memory>
#include<set>
#include<map>
#include "StrBlob.h"

using namespace std;
class QueryResult ;

class TextQuery
{
	public:
		TextQuery(ifstream &in);
		QueryResult query(const string &) const ;
			
	private:
		StrBlob file ;
		map<string , shared_ptr<set<string::size_type>>> wm;
};
