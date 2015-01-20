#include<iostream>
#include<string>

using namespace std ;

template<typename T , int N> T* mybegin(T (&p)[N])
{
	return p ;
}

template<typename T , int N> T* myend(T (&p)[N])
{
	return p + N ;
}

int main()
{
	string arr1[2] = {"hello" , "world"};
	int arr2[3] = {2,3,5};
	cout << *mybegin(arr1) << " " << *(myend(arr1)-1) << endl;
	cout << *mybegin(arr2) << " " << *(myend(arr2)-1) << endl;
	return 0;
}
