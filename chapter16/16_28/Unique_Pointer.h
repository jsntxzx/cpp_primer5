#ifndef _UNIQUE_POINTER_H
#define _UNIQUE_POINTER_H


#include <iostream>
#include "DebugDelete.h"

using namespace std ;

template<typename T> class Unique_Pointer
{
	public:
		Unique_Pointer(const Unique_Pointer&) = delete ;
		Unique_Pointer &operator=(const Unique_Pointer &) = delete ;

		Unique_Pointer() =default ;
		Unique_Pointer(T *p) : ptr(p) {}

		Unique_Pointer(Unique_Pointer &&up) noexcept : ptr(up.ptr) {up.ptr = nullptr ;}

		Unique_Pointer & operator=(Unique_Pointer &&rhs) noexcept
		{
			if(this->ptr != rhs.ptr)
			{
				deleter(ptr) ;
				ptr = nullptr ;
				using std::swap ;
				swap(ptr , rhs.ptr);
				swap(deleter , rhs.deleter);
			}
			return *this ;		
		}	
		T& operator *() const { return *ptr ;}
		T* operator->() const {return &this->operator*() ;}
		operator bool() const {return ptr ? true : false ;}
		T *get() const {return ptr ;}
		T * release() {
			T *ret = ptr ;
			ptr = nullptr ;
			return ret ;
		}
		~Unique_Pointer() { deleter(ptr);}
	private:
		T* ptr ;
		DebugDelete deleter = DebugDelete() ;
};

#endif
