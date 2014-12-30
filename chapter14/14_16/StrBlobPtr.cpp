#include "StrBlobPtr.h"
#include "StrBlob.h"

StrBlobPtr::StrBlobPtr(StrBlob &a ,size_t sz)
{
	wptr = a.data ;
	currpos = sz ;
}


shared_ptr<vector<string>> StrBlobPtr::check(size_t i , const string &s) const
{
		auto ret = wptr.lock();
		if(!ret)
			throw runtime_error("unbonded StrBlobPtr");
		if(i > ret->size())
			throw out_of_range(s);
		return ret;
}

string & StrBlobPtr::deref() const
{
		auto p = check(currpos , "derefence out of out_of_range");
		return (*p)[currpos];
}

StrBlobPtr & StrBlobPtr::incr()
{
		check(currpos , "increase out of range");
		currpos ++ ;
		return *this;
}

bool operator==(const StrBlobPtr &s1 ,const StrBlobPtr &s2)
{
	return !s1.wptr.expired() && s1.wptr.lock()== s2.wptr.lock() && s1.currpos == s2.currpos ;
}

bool operator!=(const StrBlobPtr &s1 ,const StrBlobPtr &s2)
{
	return !(s1==s2);
}
