#include<iostream>
#include<string>
#include<cstring>
#include<memory>

using namespace std;

const char *p1 = "hello" ;
const char *p2 = "world" ;

int main()
{
	char *p = new char(strlen(p1)+strlen(p2)+1);	
	strcat(p,p1);
	strcat(p,p2);
	cout << string(p) << endl;
	delete p;
	string s1(p1);
	string s2(p2);
	unique_ptr<string[]> s(new string[1]);
	s[0] = s1 + s2 ;
	cout << s[0] << endl;
	s.release();
	return 0;

}

