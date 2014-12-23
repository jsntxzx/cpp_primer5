#include<iostream>
#include<string>
using namespace std;

int main(int argc ,char* argv[])
{
	for(int i = 0 ; i < argc ; i++)
	{
		string s = argv[i];
		cout << s << endl;
	}
	return 0;
}
