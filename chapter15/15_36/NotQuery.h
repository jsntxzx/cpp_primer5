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
	QueryResult eval(const TextQuery &) const override  {
		//to be filled
	}
	Query query ;
};

inline Query operator~(const Query &operand)
{
	return shared_ptr<Query_base>(new NotQuery(operand)) ;
}

#endif
