#include<iostream>
#include<string>

using namespace std ;

template<typename T> ostream& print(ostream & os , const T & t )
{
	return os << t << endl;
}

template<typename T , typename... Args> ostream& print(ostream & os , const T &t , const Args & ...rest)
{
	os << t << " ";
	return print(os , rest...);
}

int main()
{
	int i = 10 ;
	char c = 'd' ;
	double d = 3.14 ;
	string s("gooo");
	print(cout,i);
	print(cout,i,d);
	print(cout,i,c,d,s,"hi");
	return 0 ;
}
