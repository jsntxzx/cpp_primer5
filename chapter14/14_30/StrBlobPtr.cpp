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
	return s1.deref() == s2.deref()  ;
}

bool operator!=(const StrBlobPtr &s1 ,const StrBlobPtr &s2)
{
	return !(s1==s2);
}
bool operator<(const StrBlobPtr & s1,const StrBlobPtr &s2)
{
	return s1.deref() < s2.deref() ;
}

string &StrBlobPtr::operator[](size_t n)
{
	auto p = check(n , "derefence out of out_of_range");
	return (*p)[n];
}

const string &StrBlobPtr::operator[](size_t n) const
{
	auto p = check(n , "derefence out of out_of_range");
	return (*p)[n];
}


StrBlobPtr &StrBlobPtr::operator++()
{
	check(currpos,"out_of_range");
	++currpos ;
	return *this;
}

StrBlobPtr &StrBlobPtr::operator--()
{
	--currpos;
	check(currpos,"out_of_range");
	return *this;
}

StrBlobPtr StrBlobPtr::operator++(int)
{
	StrBlobPtr ret = *this;
	++ *this ;
	return ret;
}

StrBlobPtr StrBlobPtr::operator--(int)
{
	StrBlobPtr ret = *this;
	-- *this;
	return ret;
}


StrBlobPtr &StrBlobPtr::operator+(size_t n) 
{
	currpos += n;
	check(currpos ,"out_of_range");
	return *this;
}	


StrBlobPtr &StrBlobPtr::operator-(size_t n)
{
	currpos -= n;
	check(currpos,"out_of_range");
	return *this;
}


string &StrBlobPtr::operator*() const
{
	auto p =check(currpos,"out_of_range");
	return (*p)[currpos];
}

string *StrBlobPtr::operator->() const
{
	return &this->operator*();
}
