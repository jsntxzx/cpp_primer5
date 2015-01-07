#ifndef  _ORQUERY_H
#define _ORQUERY_H

#include "BinaryQuery.h"

class OrQuery : public BinaryQuery
{
	friend Query operator|(const Query & ,const Query &);
	OrQuery(const Query &left , const Query &right) : BinaryQuery(left,right,"|") {
		cout << "calling from OrQuery" << endl;
	}
	QueryResult eval(const TextQuery &text) const override {
		auto right = rhs.eval(text) ;
		auto left = lhs.eval(text);
		auto ret_lines = make_shared<set<string::size_type>>(left.begin(),left.end());
		ret_lines->insert(right.begin(),right.end());
		return QueryResult(rep(),ret_lines , left.getfile());
	}

};

inline Query operator|(const Query &lhs , const Query &rhs)
{
	return shared_ptr<Query_base>(new OrQuery(lhs ,rhs));
}

#endif
