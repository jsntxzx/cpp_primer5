#include<iostream>
#include<bitset>

using namespace std ;

int main()
{
	bitset<32> b1("1000000010000100101110");
       	bitset<32> b2 ;
	b2.set(11);
	cout << "bits 1 = " << b1 << endl;
	cout << "bits 2 = " << b2 << endl;
	return 0 ;
}
