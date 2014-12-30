#include "String.h"

allocator<char> String::alloc = allocator<char>();

String::String()
{
	spos = nullptr;
	first_free = nullptr ;
	epos = nullptr;
}


String::String(const char *s)
{
	auto ret = alloc_n_copy(s,s + strlen(s));	
	spos = ret.first ;
	first_free = epos = ret.second ;
}

String::String(const String &s)
{
	auto ret = alloc_n_copy(s.begin(),s.end());
	spos = ret.first ;
	first_free = epos = ret.second ;
	cout << "executing String(String) " << endl;
}

pair<char * , char *> String::alloc_n_copy(const char *b,const char *e)
{
	auto ret = alloc.allocate(e-b);
	return {ret , uninitialized_copy(b,e,ret)};
}

size_t String::size() const
{
	return first_free - spos ;
}

void String::push_back(char c)
{
	check_alloc();
	alloc.construct(first_free++,c);
}

size_t String::capacity() const
{
	return epos - spos ;
}

char * String::begin() const
{
	return spos ;
}

char * String::end() const
{
	return first_free ;
}

void String::print()
{
	for_each(begin(),end(),[](char c){cout << c << endl;} );
}

void String::check_alloc()
{
	if(size() == capacity())
		reallocate();
}
void String::free()
{
	if(spos)
	{
		for(auto p = first_free - 1 ; p != spos ; p--)
			alloc.destroy(p);
		alloc.deallocate(spos,epos-spos);
	}	

}

void String::reallocate()
{
	size_t newsize = size() ? size()*2 : 1 ;
	auto newdata = alloc.allocate(newsize);
	auto dest = newdata ;
	auto olddest = spos ;
	for(size_t i = 0 ; i < size() ; i++ )
		alloc.construct(dest++, move(*olddest++));
	free();
	spos = newdata ;
	first_free = dest ;
	epos = spos + newsize ;
}

String & String::operator= (const String &s)
{
	free();
	auto ret = alloc_n_copy(s.begin(),s.end());
	spos = ret.first ;
	first_free = epos = ret.second ;
	cout << "executing operator = " << endl ;
	return *this;
}

String::~String()
{
	free();
}
