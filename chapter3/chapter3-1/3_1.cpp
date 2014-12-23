#include<iostream>
#include<string.h>

using namespace std;

int main()
{
	string s1 ;  // default init
	string s2 = s1 ;  //same as string s2(s1) ; s2 is a copy of s1
        string s3 = "xiang"; //same as string s3("xiang")
	string s4(10,'g');	//same as string s4 = string(10,'g')
	cout << "stringsize is " << s1.size() << ", " << s2.size() << ", "
		<< s3.size() << ", " << s4.size() <<endl;
	cout << "input a new string" << endl;
	cin >> s1;
	cout << s3 + " " + s1 <<endl;

	return 0;
}

