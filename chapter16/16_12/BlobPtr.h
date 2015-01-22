#ifndef _BLOBPTR_H
#define _BLOBPTR_H

#include<iostream>
#include<vector>
#include<memory>
#include<string>
#include "Blob.h"
using namespace std ;

template <typename T> class BlobPtr{
	public:
		BlobPtr() : curr(0) {} 
		BlobPtr(Blob<T> &a ,size_t sz = 0 ) : wptr(a.data) , curr(sz) {}
	        T& operator*() const 
		{
			auto p = check(curr ,"out of rnge!");
			return (*p)[curr];		
		}

		BlobPtr& operator++();	
		BlobPtr& operator--();
	private:
		shared_ptr<vector<T>> check(size_t ,const string &) const ;
		weak_ptr<vector<T>> wptr ;
		size_t curr ;
};

#include "BlobPtr.cpp"

#endif

