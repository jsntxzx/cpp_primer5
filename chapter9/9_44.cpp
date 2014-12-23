#include<iostream>
#include<string>

using namespace std;

void  find_and_replace_str(string &s ,string oldval ,string newval)
{
	int len = oldval.size();
	int newlen = newval.size();
	int pos = 0;
	while(s[pos])
	{
		if(s.substr(pos,len) == oldval)
		{
			s.replace(pos,len,newval);
			pos += newlen ;
		}
		else
		{
			pos ++ ;
		}
	}	


}

int main()
{
	string s ;
	while(cin>>s)
	{
		string target = "tu";
		string replacement = "uper";
		cout << "before : \n" << s << endl;
		find_and_replace_str(s,target,replacement);
		cout << "after : \n" << s << endl;
	}
	return 0;
}
