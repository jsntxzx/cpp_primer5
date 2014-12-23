#include<iostream>
#include<fstream>
#include<string>
#include<map>
#include<algorithm>

using namespace std;

int main()
{
	ifstream file("rules.txt",iostream::in);
	map<string,string> m;
	string key , value ;
	// build map 
	while(file >> key && getline(file,value))
	{
		if(value.size() > 1) 
			m[key] = value.substr(1);
		else
			cout << "encounter illigal lines , drop " << endl;
	}
	// read in source and convert
	string src;
	while(cin >> src)
	{
		auto pos = m.find(src);
		if( pos != m.end())
			cout << pos->second << endl;
		else
			cout << src << endl;
	}
	return 0;
}
