#include "StrBlobPtr.h"
#include "StrBlob.h"


StrBlob::StrBlob(const StrBlob &s)
{
	data = make_shared<vector<string>>(*(s.data));

}

StrBlob & StrBlob::operator=(const StrBlob &s)
{
	data = make_shared<vector<string>>(*(s.data));
	return *this;
}


StrBlobPtr StrBlob::begin()
{
	return StrBlobPtr(*this);
}

StrBlobPtr StrBlob::end()
{
	auto ret = StrBlobPtr(*this ,data->size());
	return ret ;
}

void StrBlob::check(string::size_type i ,const string &msg) const
{
		if(i >= data->size())
			throw out_of_range(msg);
}


void StrBlob::pop_back()
{
		check(0,"out of range error");
		data -> pop_back();
}


string & StrBlob::front()
{
		check(0,"out of range error");
		return data->front();
}

string & StrBlob::back()
{
		check(0 , "out of range error");
		return data->back();
}

bool operator==(const StrBlob &s1 ,const StrBlob &s2)
{
	return *(s1.data) == *(s2.data) ;
}

bool operator!=(const StrBlob &s1 ,const StrBlob &s2)
{
	return !(s1==s2);
}

bool operator<(const StrBlob &s1, const StrBlob &s2)
{
	return *(s1.data) <  *(s2.data) ;
}

string &  StrBlob::operator[](size_t  n)
{
	return (*data)[n];
}

const string &  StrBlob::operator[](size_t n) const 
{
	return (*data)[n];
}
