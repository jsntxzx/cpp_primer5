#ifndef _NOTQUERY_H
#define _NOTQUERY_H

#include "Query_base.h"
#include "Query.h"

using namespace std;

class NotQuery : public Query_base 
{
	friend Query operator~(const Query &) ;
	NotQuery(const Query &q) : query(q) {}
	string rep() const 
	{
		cout << "calling from NotQuery" << endl;
		return "~(" + query.rep() + ")" ;
	}	
	QueryResult eval(const TextQuery & text) const override  {
		auto result = query.eval(text);
		auto ret_lines = make_shared<set<string::size_type>>() ;
		auto beg = result.begin() , end = result.end() ;
		auto sz = result.getfile()->size() ;
		for(size_t n = 0 ; n != sz ; ++n)
		{
			if(beg == end || *beg != n)
				ret_lines -> insert(n);
			else if(beg != end)
				++beg ;
		}
		return QueryResult(rep(),ret_lines , result.getfile());
	}
	Query query ;
};

inline Query operator~(const Query &operand)
{
	return shared_ptr<Query_base>(new NotQuery(operand)) ;
}

#endif
