#ifndef _ANDQUERY_H
#define _ANDQUERY_H

#include "BinaryQuery.h"

using namespace std ;

class AndQuery : public BinaryQuery 
{
	friend Query operator&(const Query & , const Query &);
	AndQuery(const Query &left ,const Query &right) : BinaryQuery(left,right , "&"){
		cout << "calling from AndQuery " << endl;
	}
	QueryResult eval(const TextQuery&) const override {
	//to be filled
	}
};

inline Query operator&(const Query &lhs , const Query &rhs)
{
	return shared_ptr<Query_base>(new AndQuery(lhs,rhs)) ;
}

#endif
