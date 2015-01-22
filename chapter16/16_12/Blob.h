#ifndef _BLOB_H
#define _BLOB_H
#include<iostream>
#include<vector>
#include<string>
#include<initializer_list>
#include<memory>


using namespace std ;

template <typename > class BlobPtr ;
template<typename T> class Blob {
	friend class BlobPtr<T>;	
	public:
		Blob() ;
		Blob(initializer_list<T> il) ;
		size_t size() const { return data->size() ; }
		bool empty() const { return data->empty() ; }
		void push_back(const T& t) { data->push_back(t);}
		void push_back(T &&t) {data->push_back(std::move(t));}
		void pop_back() ;
		T& back() ;
	        T& operator[](size_t i) ;	
	private:
		shared_ptr<vector<T>> data ;
		void check(size_t , const string &) const ;
};
#include "Blob.cpp"
#endif
