#include<iostream>
#include<regex>
#include<string>
#include<vector>
#include<sstream>

using namespace std ;

struct PersonInfo {
	string name ;
	vector<string> phones;
};

//remove space 
bool valid(const smatch &m)
{
	if(m[1].matched)
		return m[3].matched && m[4].matched == 0 ;
	else
		return !m[3].matched && m[4].str() == m[6].str() ;
}


bool check(string s , regex r)
{
	if(!regex_match(s,r)) 
		return false ;
	else
	{
		for(sregex_iterator it(s.begin(),s.end(),r),et ; it != et ; it++)
		{
			if(valid(*it))
				return true ;
			else 
				return false ;
		}
	}
}

int main()
{
	vector<PersonInfo> v ;
	string line , word ;
	//can not use space in a list of numbers 
	string s = "(\\()?(\\d{3})(\\))?([-.])?(\\d{3})([-.]?)(\\d{4})";
	regex pattern(s);
	while(getline(cin , line))
	{
		istringstream is(line);
		PersonInfo p ;
		is >> p.name ;
		while(is >> word)
		{
			if(check(word,pattern))
			{
				p.phones.push_back(word);
				cout << "valid phone number" << endl;
				cout << "add a phone number to user " << p.name << endl; 
			}
			else 
				cout << "invalid phone number skip " << endl; 
		}
		v.push_back(p);
	}
	return 0 ;
}


