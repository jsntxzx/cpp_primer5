#include<iostream>
#include<list>
#include<algorithm>

using namespace std;

int main()
{
	list<int> l = {2,3,4,5,0,0,23,45};
	int value = 0;
	auto result = find(l.rbegin(),l.rend(),value);
	cout << *result << endl;
	return 0;
}
