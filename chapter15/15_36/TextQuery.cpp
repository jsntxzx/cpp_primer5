#include<sstream>
#include "TextQuery.h"
#include "QueryResult.h"

TextQuery::TextQuery(ifstream &in)
{
	file = shared_ptr<vector<string>>(new vector<string>);
	string text ;
	string::size_type linenum = 0 ;
	while(getline(in,text))
	{
		file->push_back(text);
		istringstream line(text);
		string word ;
		while(line >> word)
		{
			auto &lineset = wm[word];
			if(!lineset)
				lineset.reset(new set<string::size_type>);
			lineset->insert(linenum);
		}
		linenum ++;	
	}
}

QueryResult TextQuery::query(const string &s) const
{
	static shared_ptr<set<string::size_type>> nodata(new set<string::size_type>);
	auto pos = wm.find(s);
	if(pos == wm.end())
		return QueryResult(s,nodata,file);
	else
		return QueryResult(s,pos->second,file);
}
