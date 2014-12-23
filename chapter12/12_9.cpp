#include<iostream>
#include<memory>

using namespace std;

int main()
{
	int *p = new int(42) , *q = new int(100);
	delete q;
	q = p ;
	delete q;
	auto p1 = make_shared<int>(42) , p2 = make_shared<int>(100);
	p2 = p1;
	return 0;
}
