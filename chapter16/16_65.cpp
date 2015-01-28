#include<iostream>
#include<string>
#include<sstream>

using namespace std ;

template<typename T> string debug_rep(T *t)
{
	ostringstream ret ;
	ret << "pointer :" << t << " " << *t;	
	return ret.str() ;
}

template<> string debug_rep(const char *s)
{
	cout << "using special debug_rep - const char *" << endl ;
	return string(s);
}

template<> string debug_rep(char *s)
{
	cout << "using special debug_rep - char *" << endl;
	return string(s);
}

int main()
{
	char a[3] = {'a' , 'b' , '\0'} ;
	const char *p = "hello" ;
	cout << debug_rep(a) << endl;
	cout << debug_rep(p) << endl;
}
