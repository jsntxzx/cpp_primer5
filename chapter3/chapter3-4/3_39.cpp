#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int main()
{
	string s1("string1");
	string s2("string2");

	if( s2 > s1)
		cout << "s2 is bigger" <<endl;
	else 
		cout << "s1 is bigger" <<endl;

	const char cs1[] = "cstring1";
	const char cs2[] = "cstring2";

	if (strcmp(cs1,cs2) < 0)
		cout << "cs2 is bigger" <<endl;
	else
		cout << "cs1 is bigger" <<endl;

	return 0;


}

