#include<iostream>
#include<sstream>
#include<string>

using namespace std ;

template<typename T> string debug_rep(const T &t)
{
	ostringstream ret ;
	ret << t ;
	return ret.str() ;
}



template<typename T> ostream& print(ostream & os , const T & t )
{
	return os << t << endl;
}

template<typename T , typename... Args> ostream& print(ostream & os , const T &t , const Args & ...rest)
{
	os << t << " ";
	return print(os , rest...);
}

template<typename... Args> ostream & error_msg(ostream &os ,const Args& ... rest )
{
	return print(os , debug_rep(rest)...);
}


int main()
{
	int i = 10 ;
	char c = 'd' ;
	double d = 3.14 ;
	string s("gooo");
	error_msg(cout,i,c,d,s,"hi");
	return 0 ;
}
