#include<iostream>
#include<list>
#include<forward_list>

using namespace std;

int main()
{
	list<int> l = {0,1,2,3,4,5,6,7,8,9};
	forward_list<int> fl = {0,1,2,3,4,5,6,7,8,9};
	//first list
	auto iter = l.begin();
	while(iter != l.end())
	{
		if(*iter %2 ==1)
		{
			iter = l.insert(iter,*iter);
			// list can only use ++ and not use +=
			iter ++;
			iter ++;
		}
		else
			iter = l.erase(iter);	
	}
	for(auto item : l)
		cout << item << " " ;
	cout <<endl;
	//next forward_list 
	auto pre = fl.before_begin();
	auto cur = fl.begin();
	while(cur != fl.end())
	{
		if(*cur %2 == 1)
		{
			cur = fl.insert_after(pre,*cur);
			cur ++ ;
			pre = cur;
			cur ++ ;		
		}
		else
		{
			cur = fl.erase_after(pre);
		}
	}
	for(auto item1 : fl)
		cout << item1 << " ";
	cout <<endl;

	return 0;

}

