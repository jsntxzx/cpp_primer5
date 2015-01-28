#include<iostream>
#include<vector>
#include<type_traits>
using namespace std;

template<typename It> auto mysum(It b ,It e) -> typename remove_reference<decltype(*b)>::type
{
	typename remove_reference<decltype(*b)>::type sum = 0 ;
	for(auto p = b ; p != e ; p++)
	{
		sum = sum + *p ;
	}
	return sum ;
}

template<typename T> auto bigadd(T lhs , T rhs) -> decltype(lhs + rhs)
{
	return lhs + rhs ;
}

int main()
{
	vector<int> vi = {1,2,3,4,5};
	vector<double>	vd = {2.13 , 3232 ,3212.334 };
	cout << mysum<decltype(vi.begin())>(vi.begin() , vi.end()) << endl;
	cout << mysum<decltype(vd.begin())>(vd.begin() , vd.end()) << endl;

	auto s = bigadd(123456789123456789123456789123456789123456789, 123456789123456789123456789123456789123456789);
	return 0 ;
}
