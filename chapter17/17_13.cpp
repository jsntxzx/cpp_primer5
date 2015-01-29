#include<iostream>
#include<bitset>

using namespace std ;

template<size_t N> void update(bitset<N> &b , pair<size_t , bool > result)
{
	b[result.first] = result.second ;
}

template<size_t N> size_t jduge(bitset<N> &b , bitset<N> &answer)
{
	auto result = b ^ answer ;
	result.flip() ;
	return result.count() ;
}


int main()
{
	bitset<10> b1 ;
	bitset<10> b2 ;
	update(b1,{2,1});
	update(b2,{3,1});
	cout << jduge(b1,b2)<< endl ;
	return 0 ;
}
