#include<iostream>
#include<vector>
#include<string>
#include<utility>
#include<algorithm>

using namespace std;

int main()
{
	cout << "input several string and numbers " << endl;
	pair<string,int> p;
	vector<pair<string ,int>> v;
	string line;
	while(getline(cin,line))
	{
		auto space = line.find_first_of(" ");
	 	string svalue = line.substr(0,space);
		int ivalue = stoi(line.substr(space+1));
		p = {svalue,ivalue};
		v.push_back(p);
	}
	for(auto i : v)
		cout << i.first << " " << i.second << endl;
	return 0;

}
