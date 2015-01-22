#include "Vec.h"

template<typename T> allocator<T> Vec<T>::alloc = allocator<T>();

template<typename T> Vec<T>::Vec()
{
	elements = nullptr ;
	first_free = nullptr ;
	cap = nullptr ;
}

template<typename T> Vec<T>::Vec(initializer_list<T> s)
{
	auto ret = alloc_n_copy(s.begin(),s.end());
	elements = ret.first ;
	first_free = cap = ret.second ;
}


template<typename T> Vec<T>::Vec(const Vec &sv)
{
	auto ret = alloc_n_copy(sv.begin(),sv.end());
	elements = ret.first;
	first_free = cap = ret.second;
}


template<typename T> pair<T* ,T*> Vec<T>::alloc_n_copy(const T *b, const T *e)
{
	auto data = alloc.allocate(e-b);
	return {data ,uninitialized_copy(b,e,data)};
}

template<typename T> size_t Vec<T>::size() const 
{
	return first_free - elements ;
}

template<typename T> size_t Vec<T>::capacity() const
{
	return cap - elements ;
}

template<typename T> T * Vec<T>::begin() const
{
	return elements ;
}

template<typename T> T * Vec<T>::end() const
{
	return first_free ;
}

template<typename T> void Vec<T>::check_n_alloc()
{
	if(size() == capacity())
		reallocate();
}

template<typename T> void Vec<T>::push_back(const T &s)
{
	check_n_alloc();
	alloc.construct(first_free++ , s);
}

template<typename T> Vec<T> & Vec<T>::operator=(const Vec<T> &sv)
{
	free();
	auto ret = alloc_n_copy(sv.begin(),sv.end());
	elements = ret.first;
        first_free = cap =ret.second ;
	return *this;       
}


template<typename T> Vec<T>::~Vec()
{
	free();
}


template<typename T> void Vec<T>::free()
{
	if(elements)
	{
		for_each(elements,first_free,[](T s){alloc.destroy(&s);});
		alloc.deallocate(elements,cap-elements);
	}
}

template<typename T> void Vec<T>::reallocate()
{
	auto newcapacity = size() ? 2*size() : 1 ;
	auto newdata = alloc.allocate(newcapacity);
	auto dest = newdata ;
	auto elem = elements ;
	for(size_t i = 0 ; i < size() ; i++)
		alloc.construct(dest++,move(*elem++));
	free();
	elements = newdata ;
	first_free = dest ;
	cap = elements + newcapacity ;
}


template<typename T> bool operator==(const Vec<T> &s1 ,const Vec<T> &s2)
{
	if(s1.size() == s2.size())
	{
		for(size_t i =0 ; i< s1.size() ; i++)
		{
			if(*(s1.elements+i ) != *(s2.elements+i) )
				return false ;
		}	
		return true;
	}
	return false ;
}

template<typename T> bool operator!=(const Vec<T> &s1 ,const Vec<T> &s2)
{
	return !(s1==s2);

}

template<typename T> bool operator< (const Vec<T> & s1,const Vec<T> &s2)
{
	for(size_t i =0 ; i< s1.size() && i < s2.size(); i++)
	{
		if(*(s1.elements+i ) < *(s2.elements+i) )
			return true ;
		else if(*(s1.elements+i ) < *(s2.elements+i) )
			return false;
	}
	if(s1.size() < s2.size())
		return true ;	
	return false;
}


template<typename T> T& Vec<T>::operator[](size_t n)
{
	return elements[n];
}
		
template<typename T> const T& Vec<T>::operator[](size_t n) const 
{
	return elements[n];
}
