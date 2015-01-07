#ifndef _ANDQUERY_H
#define _ANDQUERY_H

#include<algorithm>
#include "BinaryQuery.h"

using namespace std ;

class AndQuery : public BinaryQuery 
{
	friend Query operator&(const Query & , const Query &);
	AndQuery(const Query &left ,const Query &right) : BinaryQuery(left,right , "&"){
		cout << "calling from AndQuery " << endl;
	}
	QueryResult eval(const TextQuery& text) const override {
		auto left = lhs.eval(text) ;
		auto right = rhs.eval(text);
		auto ret_lines = make_shared<set<string::size_type>> ();
		set_intersection(left.begin() , left.end() ,  right.begin() ,right.end() , inserter(*ret_lines , ret_lines->begin()));
		return QueryResult(rep() , ret_lines , left.getfile());
	
	}

};

inline Query operator&(const Query &lhs , const Query &rhs)
{
	return shared_ptr<Query_base>(new AndQuery(lhs,rhs)) ;
}

#endif
