#include "Blob.h"

template<typename T> Blob<T>::Blob():data(make_shared<vector<T>>()){}


template<typename T> Blob<T>::Blob(initializer_list<T> il):data(make_shared<vector<T>>(il)) {}


template<typename T> void Blob<T>::check(size_t sz , const string & msg) const
{
	if(sz >= size())
		throw std::out_of_range(msg) ;
}

template<typename T> void Blob<T>::pop_back()
{
	check(0, "It is an empty Blob!");
	data-> pop_back();
}

template<typename T> T& Blob<T>::back()
{
	check(0,"It is an empty Blob!");
	return data->back() ;
}

template<typename T> T& Blob<T>::operator[](size_t i)
{
	check(i,"It is out of range!");
	return (*data)[i] ;
}

template<typename T> template<typename It> Blob<T>::Blob(It b ,It e):data(make_shared<vector<T>>(b,e)){}
