#include<iostream>

using namespace std ;

template<typename T , int N> constexpr int ArraySizeWithN(T (&p)[N])
{
	return N ;
}

int main()
{
	int a[3] = {} ;
	cout << ArraySizeWithN(a) << endl ;
	return 0 ;
}
