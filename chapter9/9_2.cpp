#include<iostream>
#include<deque>
#include<list>


using namespace std;

int main()
{
	list<deque<int>> l;
	deque<int> d;
	cout << l.max_size() << endl;
	cout << d.max_size() << endl;
	cout << l.size() << endl;
	cout << d.size() << endl;
	return 0;

}
