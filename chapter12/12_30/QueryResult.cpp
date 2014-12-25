#include "QueryResult.h"

ostream &QueryResult::print(ostream &os)
{
	os << word << " occurs " << lines->size() << " times" << endl;
	for (auto num : *lines)
		os << "\t(line " << num+1 << ") " << *(file->begin() + num) << endl;
	return os;
}

