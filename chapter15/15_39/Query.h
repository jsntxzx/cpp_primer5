#ifndef _QUERY_H
#define _QUERY_H

#include <iostream>
#include <memory>
#include <string>
#include "TextQuery.h"
#include "QueryResult.h"
#include "Query_base.h"
#include "WordQuery.h"

using namespace std ;

class Query
{
	friend Query operator~(const Query &);
	friend Query operator|(const Query & , const Query &);
	friend Query operator&(const Query & , const Query &);
	friend ostream &operator<<(ostream & , const Query &);
	public:
		Query(const string &);
		QueryResult eval(const TextQuery &) const; 
		string rep() const ;
	private:
		Query(shared_ptr<Query_base> query) ;
		shared_ptr<Query_base> q ;
};

#endif
