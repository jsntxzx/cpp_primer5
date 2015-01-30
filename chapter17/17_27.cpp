#include<iostream>
#include<regex>
#include<string>

using namespace std ;

void PrintResult(regex r)
{
	cout << "input a post string to check or press q to quit" << endl;
	string s ;
	string fmt = "$1-$3"; 
	while(getline(cin,s))
	{
		if(s=="q") break;
		smatch m ;
		if(regex_match(s,m,r))
		{
			cout << "valid code -- " << s  << endl;
			if(m[3].matched)
				cout << regex_replace(s,r,fmt) << endl;
		}
		else 
			cout << "invalid code"  << endl;
	}
}

int main()
{
	string r("(\\d{5})(-)?(\\d{4})?");
	regex pattern(r) ;
	PrintResult(pattern);
	return 0;
}
