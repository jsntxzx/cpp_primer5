#include "QueryResult.h"

QueryResult::QueryResult(string s , shared_ptr<set<string::size_type>> p , const StrBlob &f)
{
	word = s;
	lines = p;
	file = StrBlob(f);
}

ostream &QueryResult::print(ostream &os)
{
	os << word << " occurs " << lines->size() << " times" << endl;
	for (auto num : *lines)
		os << "\t(line " << num+1 << ") " << file.begin().incr(num).deref() << endl;
	return os;
}

