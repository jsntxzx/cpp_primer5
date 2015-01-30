#include<iostream>
#include<regex>
#include<string>

using namespace std ;

void PrintResult(regex r)
{
	cout << "input serveral strings to check or press q to quit" << endl;
	string s ;
	while(getline(cin,s))
	{
		if(s=="q") break;
		for(sregex_iterator it(s.begin(),s.end(),r) , et ; it != et ; ++it)
			cout << it->str() << endl; 
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
