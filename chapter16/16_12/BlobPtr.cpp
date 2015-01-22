#include "BlobPtr.h"
template <typename T> shared_ptr<vector<T>> BlobPtr<T>::check(size_t i , const string & msg) const
{
	auto ret = wptr.lock();
	if(!ret)
		throw runtime_error("unbonded StrBlobPtr");
	if(i > ret->size())
		throw out_of_range(msg);
	return ret;
}	

template <typename T> BlobPtr<T> & BlobPtr<T>::operator++()
{
	check(curr, "increase out of range");
	curr ++ ;
	return *this;
}

template <typename T> BlobPtr<T> & BlobPtr<T>::operator--()
{
	check(curr , "it is an empty Blob!");
	curr -- ;
	return *this ;
}
