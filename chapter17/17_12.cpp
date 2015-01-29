#include<iostream>
#include<bitset>

using namespace std ;

template<size_t N> void update(bitset<N> &b , pair<size_t , bool > result)
{
	b[result.first] = result.second ;

}	

int main()
{
	bitset<10> b1 ;
	bitset<20> b2 ;
	update(b1,{2,1});
	update(b2,{10,1});
	cout << b1 << endl;
	cout << b2 << endl;
	return 0 ;
}
