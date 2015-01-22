#ifndef _VEC_H
#define _VEC_H

#include<memory>
#include<string>
#include<algorithm>
#include<utility>
#include<initializer_list>

using namespace std;

template<typename> class Vec ;
template<typename T> bool operator==(const Vec<T> & ,const Vec<T> &);
template<typename T> bool operator!=(const Vec<T> & ,const Vec<T> &);
template<typename T> bool operator< (const Vec<T> & ,const Vec<T> &);


template<typename T> class Vec
{
	friend bool operator==<T> (const Vec<T> & ,const Vec<T> &);
	friend bool operator!=<T> (const Vec<T> & ,const Vec<T> &);
	friend bool operator< <T>  (const Vec<T> & ,const Vec<T> &);
	public:
		Vec();
		Vec(initializer_list<T>);
		Vec(const Vec&);
		Vec &operator=(const Vec&);
		T  &operator[](size_t);
		const T &operator[](size_t) const ;
		~Vec();
		void push_back(const T &);
		size_t size() const ;
		size_t capacity() const ;
		T *begin() const ;
		T *end() const ;
	private:
		static allocator<T> alloc ;
		void check_n_alloc() ;
		pair<T* ,T* > alloc_n_copy(const T * ,const T *);
		void free();
		void reallocate();
		T *elements ; //first item pointer
		T *first_free; // first free pointer
		T *cap ;  // end pointer
};



#include "Vec.cpp"
#endif
