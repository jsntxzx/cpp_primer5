#ifndef _TEXTQUERY_H
#define _TEXTQUERY_H

#include<iostream>
#include<fstream>
#include<vector>
#include<string>
#include<memory>
#include<set>
#include<map>
#include "DebugDelete.h"

using namespace std;

class QueryResult ;

class TextQuery
{
	public:
		TextQuery(ifstream &in);
		QueryResult query(const string &) const ;
		~TextQuery() {DebugDelete b; b(file) ;}
			
	private:
		vector<string> *file ;
		map<string , shared_ptr<set<string::size_type>>> wm;
};



#endif
