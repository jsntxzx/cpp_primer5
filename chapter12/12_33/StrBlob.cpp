#include "StrBlobPtr.h"
#include "StrBlob.h"
using namespace std;


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

