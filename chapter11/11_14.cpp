#include<iostream>
#include<string>
#include<map>
#include<vector>
#include<utility>

using namespace std;

void AddFamily(map<string, vector<pair<string,string> > > &family , string lname)
{
	family[lname] = {};

}

void AddChildren(map<string, vector<pair<string,string> > > &family , string lname ,pair<string,string> info )
{
	if(family.find(lname) == family.end())
		cout << lname << " is not in map" << endl;
	else
		family[lname].push_back(info);
}

void PrintFamily(map<string,vector<pair<string,string> >> &family)
{
	for(auto i : family)
	{
		for(auto j:(i.second))
			cout << i.first + " " + j.first << " " << j.second << endl;
	}
}

int main()
{

	map<string, vector<pair<string,string>> > family;
	AddFamily(family,"xiang");
	AddFamily(family,"li");
	AddChildren(family,"xiang",{"1","199011"});
	AddChildren(family,"xiang",make_pair("2","19910101"));
	AddChildren(family,"li",pair<string,string>("3","198911"));
	AddChildren(family,"wang",{});
	PrintFamily(family);
	return 0;
}
