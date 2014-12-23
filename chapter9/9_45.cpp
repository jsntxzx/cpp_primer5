#include<iostream>
#include<string>

using namespace std;

void add_prefix_and_suffix(string &name , string prefix ,string suffix)
{
	auto pos = name.begin();
	name.insert(pos,prefix.begin(),prefix.end());
	name.append(suffix);
}

int main()
{
	string name ;
	while(cin >> name)
	{
		string px = "Mr ";
		string sx = " III ";
		cout << "before : \n" << name << endl;
		add_prefix_and_suffix(name,px,sx);
		cout << "after : \n" << name << endl;	
	}
	return 0;
}
