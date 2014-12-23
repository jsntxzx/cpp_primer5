#include<iostream>
#include<forward_list>

using namespace std;
int main()
{
	forward_list<int> fl = {1,3,4,5,6,7};
	auto pre = fl.before_begin();
	auto cur = fl.begin();
	while(cur != fl.end())
	{
		if(*cur%2 == 1)
			cur = fl.erase_after(pre);
		else
		{
			pre = cur ;
			++ cur;
		}
	}
	for(auto fli : fl)
		cout << fli << " ";
	cout <<endl;
	return 0;
}
