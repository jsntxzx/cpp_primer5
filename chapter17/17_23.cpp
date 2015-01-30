#include<iostream>
#include<regex>
#include<string>

using namespace std ;

void PrintResult(regex r)
{
	cout << "input a post string to check or press q to quit" << endl;
	string s ;
	while(getline(cin,s))
	{
		if(s=="q") break;
		if(regex_match(s,r))
			cout << "valid code -- " << s  << endl;
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
