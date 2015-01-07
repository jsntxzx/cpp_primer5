#ifndef  _ORQUERY_H
#define _ORQUERY_H

#include "BinaryQuery.h"

class OrQuery : public BinaryQuery
{
	friend Query operator|(const Query & ,const Query &);
	OrQuery(const Query &left , const Query &right) : BinaryQuery(left,right,"|") {
		cout << "calling from OrQuery" << endl;
	}
	QueryResult eval(const TextQuery &) const override {
		//to be filled
	}

};

inline Query operator|(const Query &lhs , const Query &rhs)
{
	return shared_ptr<Query_base>(new OrQuery(lhs ,rhs));
}

#endif
