#include<iostream>

using namespace std ;

template<typename T> void f(T t)
{
	cout << "entering f(T)" << endl;
}

template<typename T> void f(const T * t)
{
	cout << "entering f(const T*)" << endl;
}

template<typename T> void g(T t)
{
	cout << "entering g(T)" << endl;
}

template<typename T> void g(T *t)
{
	cout << "entering g(T*)" <<endl;
}

int main()
{
	int i = 42 , *p = &i ;
	const int ci = 0 , *p2 = &ci ;
	g(42);
	g(p);
	g(ci);
	g(p2);

	f(42);
	f(p);
	f(ci);
	f(p2);

	return 0 ;
}
