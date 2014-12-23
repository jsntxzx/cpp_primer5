#include<iostream>
#include<string>
#include<map>
#include<vector>

using namespace std;

void AddFamily(map<string, vector<string> > &family , string lname)
{
	family[lname] = {};

}

void AddChildren(map<string, vector<string> > &family , string lname ,string fname)
{
	if(family.find(lname) == family.end())
		cout << lname << " is not in map" << endl;
	else
		family[lname].push_back(fname);
}

void PrintFamily(map<string,vector<string>> &family)
{
	for(auto i : family)
	{
		for(auto j:(i.second))
			cout << i.first + " " + j << " " ;
		cout <<endl;
	}
}

int main()
{

	map<string, vector<string> > family;
	AddFamily(family,"xiang");
	AddFamily(family,"li");
	AddChildren(family,"xiang","1");
	AddChildren(family,"xiang","2");
	AddChildren(family,"li","3");
	AddChildren(family,"wang","4");
	PrintFamily(family);
	return 0;
}
