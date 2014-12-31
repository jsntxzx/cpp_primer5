#include "StrVec.h"

allocator<string> StrVec::alloc = allocator<string>();

StrVec::StrVec()
{
	elements = nullptr ;
	first_free = nullptr ;
	cap = nullptr ;
}

StrVec::StrVec(initializer_list<string> s)
{
	auto ret = alloc_n_copy(s.begin(),s.end());
	elements = ret.first ;
	first_free = cap = ret.second ;
}


StrVec::StrVec(const StrVec &sv)
{
	auto ret = alloc_n_copy(sv.begin(),sv.end());
	elements = ret.first;
	first_free = cap = ret.second;
}


pair<string * ,string *> StrVec::alloc_n_copy(const string *b, const string *e)
{
	auto data = alloc.allocate(e-b);
	return {data ,uninitialized_copy(b,e,data)};
}

size_t StrVec::size() const 
{
	return first_free - elements ;
}

size_t StrVec::capacity() const
{
	return cap - elements ;
}

string * StrVec::begin() const
{
	return elements ;
}

string * StrVec::end() const
{
	return first_free ;
}

void StrVec::check_n_alloc()
{
	if(size() == capacity())
		reallocate();
}

void StrVec::push_back(const string &s)
{
	check_n_alloc();
	alloc.construct(first_free++ , s);
}

StrVec & StrVec::operator=(const StrVec &sv)
{
	free();
	auto ret = alloc_n_copy(sv.begin(),sv.end());
	elements = ret.first;
        first_free = cap =ret.second ;
	return *this;       
}


StrVec::~StrVec()
{
	free();
}


void StrVec::free()
{
	if(elements)
	{
		for_each(elements,first_free,[](string s){alloc.destroy(&s);});
		alloc.deallocate(elements,cap-elements);
	}
}

void StrVec::reallocate()
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


bool operator==(const StrVec &s1 ,const StrVec &s2)
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

bool operator!=(const StrVec &s1 ,const StrVec &s2)
{
	return !(s1==s2);

}
