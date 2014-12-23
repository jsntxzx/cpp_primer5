#include<iostream>
#include<forward_list>
#include<string>

using namespace std;


bool search_and_insert(forward_list<string> &fl , string s1 , string s2)
{
	auto pre = fl.before_begin();
	auto cur = fl.begin();
	while(cur != fl.end())
	{
		if(*cur == s1)
		{
			fl.insert_after(cur,s2);
			return true; 
		}
		else
		{
			pre = cur;
			++ cur;
		}
	}
	fl.insert_after(pre,s2);
	return false;
}

int main()
{
	forward_list<string> fl = {"xiang" , "go" , "something" , "place"};
	search_and_insert(fl,"something","here");
	forward_list<string> fl1 ;
	search_and_insert(fl1,"something","here");
	for(auto item1 : fl)
		cout << item1 << " ";
	cout << endl;
	for(auto item2 : fl1)
		cout << item2 << " ";
	cout <<endl;
	return 0;
}
