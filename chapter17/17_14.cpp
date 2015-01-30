#include<iostream>
#include<string>
#include<regex>

using namespace std ;

int main()
{
	/*
	try
	{
		regex pattern1("[[:alnum:]+\\.(cpp|cxx)$");
	}
	catch(regex_error e)
	{
		cout << e.what() << endl;
	}
	*/
	regex pattern("[[:alnum:]]+\\.(cpp|cxx|cc)$",regex::icase);
	smatch ret ;
	string filename ;
	while(cin>>filename)
	{
		if(regex_search(filename,ret,pattern))
			cout << ret.str() << endl;
	}
	return 0 ;
}
