#include<iostream>
#include<regex>
#include<string>

using namespace std ;

void PrintResult(regex r)
{
	cout << "input a string to check or press q to quit" << endl;
	string s ;
	while(cin>>s)
	{
		if(s=="q") break;
		if(regex_match(s,r))
			cout << "it is a match " << endl ;	
		else 
			cout << "it is not a match " << endl; 
	}
}

int main()
{
	string r("[^c]ei");
	r  = "[[:alpha:]]*" + r + "[[:alpha:]]*" ;
	regex pattern(r) ;
	PrintResult(pattern);
	return 0;
}
