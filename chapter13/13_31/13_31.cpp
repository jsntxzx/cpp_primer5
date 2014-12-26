#include<iostream>
#include"HasPtr.h"
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	vector<HasPtr> v;
	for(int i =10 ; i> 0 ; i--)
	{
		HasPtr h = HasPtr();	
		h.assign(i);
		v.push_back(h);
	}
	for(auto item : v)
		cout << item.getvalue() << " ";
	cout << endl;
	sort(v.begin(),v.end());
	for(auto item :v)
		cout << item.getvalue() << " " ;
	cout << endl;
	return 0; 
}

