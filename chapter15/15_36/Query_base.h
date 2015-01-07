#ifndef _QUERY_BASE_H
#define _QUERY_BASE_H
#include <string>
#include "TextQuery.h"
#include "QueryResult.h"
 
 using namespace std ;

class Query_base
{
	friend class Query ;
	protected :
		virtual ~Query_base() = default ;
	private :
		virtual QueryResult eval(const TextQuery &) const = 0;
		virtual string rep() const = 0;
};

#endif