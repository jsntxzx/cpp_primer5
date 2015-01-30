#include<iostream>
#include<regex>
#include<string>
using namespace std ;

bool valid(const smatch &m)
{
	if(m[1].matched)
		return m[3].matched && (m[4].matched == 0 || m[4].str() == " ") ;
	else
		return !m[3].matched && m[4].str() == m[6].str() ;
}


void check(regex r)
{
	string s ;
	cout << "input a phone number or press q to quit" << endl;
	while(getline(cin,s))
	{
		if(s=="q") break;
		if(!regex_match(s,r)) 
		{
			cout << "not match " << endl ;
			continue ;
		}
		for(sregex_iterator it(s.begin(),s.end(),r),et ; it != et ; it++)
		{
			if(valid(*it))
				cout << "valid : " << it->str() << endl;
			else
				cout << "not valid " << endl;
		}
	}
}


int main()
{
	string s = "(\\()?(\\d{3})(\\))?([-. ])?(\\d{3})([-. ]?)(\\d{4})";
	regex pattern(s);
	check(pattern);
	return 0;
}
