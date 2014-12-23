#include<iostream>
#include<list>
#include<vector>
#include<string>


using namespace std;
int main()
{
	list<const char*> l = {"a","bb","ccc" };
	vector<string> v ;
        v.assign(l.cbegin(),l.cend());
	for (auto i : v)
	 	cout << i <<endl;
	return 0;
}
