#include<iostream>
#include<vector>
#include<list>
#include<algorithm>
#include<iterator>
using namespace std;

int main()
{
	vector<int> v = {1,2,3,4,5,6,7,8,9,10};
	list<int> l;
	copy(v.begin()+3,v.begin()+7,front_inserter(l));
	for(auto i : l)
		cout << i << " ";
	cout << endl;
	return 0;
}
