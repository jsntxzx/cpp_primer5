#include<iostream>
#include<map>
#include<string>
#include<algorithm>

using namespace std;

void sort_and_print(multimap<string,string> &mm) 
{
	vector<string> v;
	for(auto i : mm)
		v.push_back(i.first + i.second);
	sort(v.begin(),v.end());
	for_each(v.begin(),v.end(),[](string s) {cout << s << endl;});
}


int main()
{
	multimap<string , string> mm;
	mm.insert({"xiang","1"});
	mm.insert({"xiang","2"});
	mm.insert({"xiang","3"});
	mm.insert({"li","1"});
	mm.insert({"li","2"});
	mm.insert({"li","3"});
	sort_and_print(mm);
	return 0;
}
