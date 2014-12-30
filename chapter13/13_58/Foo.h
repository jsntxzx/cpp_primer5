#include<iostream>
#include<vector>
#include<algorithm>


using namespace std;

class Foo
{
	public:
		Foo():v({5,4,3,2}){}
		Foo sorted() && ;
		Foo sorted() const &;
	private:
		vector<int> v;
};
