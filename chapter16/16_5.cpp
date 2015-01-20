#include<iostream>
#include<string>

using namespace std ;

template<unsigned T , typename S> void print(S (&p)[T])
{
	for(auto data : p)
		cout << data << " " ;
	cout << endl;
}

int main()
{
	string j[2] = {"hello", "world"};
	int k[5] = {2,1,4,5,6} ;
	print(j);
	print(k);
	return 0 ;
}
