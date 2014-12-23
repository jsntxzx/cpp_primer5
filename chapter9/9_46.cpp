#include<iostream>
#include<string>

using namespace std;

void add_prefix_and_suffix(string &name , string prefix ,string suffix)
{
	int pos = 0;
	int len1 = name.size();
	int len2 = prefix.size();
	name.insert(pos, prefix);
	pos += len1;
	pos += len2;
	name.insert(pos,suffix);

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
