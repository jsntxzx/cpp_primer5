#include<iostream>
#include<cstring>
#include<string>
using namespace std;

int main()
{
	const char cs1[] = "hello";
	const char cs2[] = "world";
	int len = strlen(cs1) + strlen(cs2) + 2 ;
	char cs[len];
	strcpy(cs,cs1);
	strcat(cs," ");
	strcat(cs,cs2);
	strcat(cs,"\0");
	cout << strlen(cs) <<endl;
	string s(cs);
	cout << s <<endl;
	return 0;
}
