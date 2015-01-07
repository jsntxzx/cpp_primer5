#include "Query.h"

Query::Query(const string &s): q(new WordQuery(s)) {} 

Query::Query(shared_ptr<Query_base> query) : q(query) {} 

QueryResult Query::eval(const TextQuery &t) const
{
	return q->eval(t) ;
}

string Query::rep() const 
{
	cout << "calling from Query " << endl; 
	return q->rep() ;
}

ostream &operator<<(ostream &os , const Query &q)
{
	return os << q.rep() ;
}
