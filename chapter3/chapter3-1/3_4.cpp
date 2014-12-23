#include<iostream>
#include<string>

using namespace std;

int main(int argc , char* argv[])
{
	string a1 , a2;
	cout << "input two strings(using Enter as sperator)" <<endl;
	getline(cin,a1);
	getline(cin,a2);
	if (a1 != a2)
		cout << "a1 not equal a2" <<endl;
	if(a1.size() != a2.size())
		cout << "len(a1) not equal len(a2)" <<endl;
	return 0;
}

