#include<iostream>
#include<list>
#include<algorithm>
#include<iterator>

using namespace std;

int main()
{
	list<int> l1,l2;
	int value;
	while(cin >> value)
		l1.push_back(value);
	l1.sort();
	unique_copy(l1.begin(),l1.end(),back_inserter(l2));
	cout << "list 1 is : " ; 
	for_each(l1.begin(),l1.end(),[](int a){cout << a << " " ;});
	cout << endl;
	cout << "list 2 is : " ; 
	for_each(l2.begin(),l2.end(),[](int a){cout << a << " " ;});
	cout << endl;
	return 0;
}
