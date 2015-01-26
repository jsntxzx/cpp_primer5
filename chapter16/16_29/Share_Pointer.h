#ifndef _SHARE_POINTER_H
#define _SHARE_POINTER_H

#include<iostream>
#include<functional>
#include<memory>
#include "DebugDelete.h"


using namespace std ;

template<typename T> class Share_Pointer {
	public:
		Share_Pointer() = default;
		Share_Pointer(T *p , std::function<void(T*)> d = DebugDelete()):ptr(p),refCount(new size_t(1)),deleter(d){}
		Share_Pointer(const Share_Pointer &sp):ptr(sp.ptr),refCount(sp.refCount),deleter(sp.deleter) {++ *refCount ;}

		Share_Pointer & operator=(const Share_Pointer &rhs)
		{
			++ *rhs.refCount ;
			decrement_n_destroy() ;

			ptr = rhs.ptr ;
			refCount = rhs.refCount ;
			deleter = rhs.deleter ;
			return *this ;
		}

		Share_Pointer(shared_ptr<T> s ,std::function<void(T*)> d = DebugDelete()): ptr(new T(*s)) ,refCount(new size_t(1)),deleter(d){s.reset();}

		operator bool() const { return ptr ? true : false ;}
		T& operator* () const {return *ptr ;}
		T* operator->() const {return &this->operator*() ;}
		
		size_t use_count() const {return *refCount ;}
		T* get() const {return ptr ;}
		bool unique() const {return *refCount == 1 ;}
	      	void reset(){decrement_n_destroy() ;}
		void reset(T *p)
		{
			if(ptr != p)
			{
				decrement_n_destroy() ;
				ptr = p ;
				refCount = new size_t(1);
			}	
		}

		~Share_Pointer() { decrement_n_destroy() ;}	

	private:
		T *ptr = nullptr ;
		size_t *refCount = new size_t(0) ;
		std::function<void(T*)> deleter ;
		void decrement_n_destroy()
		{
			if(ptr)
			{
				delete refCount ;
				deleter(ptr);
			}
			refCount = nullptr ;
			ptr = nullptr ;
		}

};

#endif
