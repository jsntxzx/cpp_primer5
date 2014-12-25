#include<iostream>
#include<memory>
#include<string>
#define N 10

using namespace std;

int main()
{
	allocator<string> alloc ;
	auto const p = alloc.allocate(N);
	string s ;
	auto q = p;
	while(cin >> s && q != p+N)
	{
		alloc.construct(q,s);
		cout << *q << endl;
	}
	while(q!=p)
		alloc.destroy(q--);
	alloc.deallocate(p,N);
	return 0;
}
