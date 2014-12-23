#include<iostream>
#include<deque>
#include<list>

using namespace std;

int main()
{
	deque<int> d1,d2;
	list<int> l = {1,2,3,4,5,6} ;
	for(auto item : l)
	{
		if( item%2 == 1)
			d1.push_back(item);
		else
			d2.push_back(item);
	}
	for(auto di1 : d1)
		cout << di1 << " " ;
	cout << endl;
	for(auto di2 : d2)
		cout << di2 << " " ;
	cout << endl;
	return 0;
}
