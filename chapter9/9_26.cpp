#include<iostream>
#include<vector>
#include<list>

using namespace std;

int main()
{
	int ia[] = {0,1,1,2,3,5,8,13,21,55,89};
	vector<int> v(begin(ia),end(ia));
	list<int> l(begin(ia),end(ia));
	auto iterv = v.begin();
	auto iterl = l.begin();
	while(iterv != v.end())
	{
		if(*iterv%2 == 0)
			iterv = v.erase(iterv);
		else
			iterv++;
	}
	while(iterl != l.end())
	{
		if(*iterl%2 == 1)
			iterl = l.erase(iterl);
		else
			iterl++;
	}
	for(auto vi : v)
		cout << vi << " ";
	cout << endl;
	for(auto li : l)
		cout << li << " ";
	cout << endl;
	return 0;	

}

