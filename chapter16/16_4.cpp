#include<iostream>
#include<string>
#include<vector>
#include<list>

using namespace std ;

template<typename I , typename T> int myfind(const I& i , const T& value)
{
	for(auto p = i.begin() ; p != i.end() ; p++)
	{
		if(*p == value)
			return 1 ;
	}
	return 0 ;
}


int main()
{
	vector<int> v = {1,23,4,56,6,7} ;
	list<string> l = {"a" , "bb" , "ccc" } ;
	cout << myfind(v,2) << endl ; 	
	cout << myfind(l,"bb") << endl ;
	return 0 ;
}
