#include<iostream>
#include<vector>
#include<iterator>
#include<list>
using namespace std;

void printVetcor(list<int> &v)
{
	for(auto vi : v)
		cout << vi << " ";
	cout << endl;
}

int main()
{
	vector<int> v = {1,2,3,4,5,6,7,8,9};
	list<int> v1 , v2 , v3;
	copy(v.begin(),v.end(),back_inserter(v1));
	copy(v.begin(),v.end(),front_inserter(v2));
	copy(v.begin(),v.end(),inserter(v3,v3.begin()));
	printVetcor(v1);
	printVetcor(v2);
	printVetcor(v3);
	return 0 ;
}
