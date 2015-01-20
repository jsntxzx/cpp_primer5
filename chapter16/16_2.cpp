#include<iostream>
#include<string>

using namespace std ;

template<typename T> int compare(const T& t1 , const T& t2)
{
	if(t1 < t2) return -1 ;
	if(t1 > t2) return 1 ;
	return 0 ;
}

int main()
{
	cout << compare(1,2) << endl ;
	cout << compare(3.2 , 2.3) << endl ;
	cout << compare("h1" , "h1") << endl ;
       return 0 ;	
}
