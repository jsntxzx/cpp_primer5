#include<iostream>
#include<string.h>


using namespace std;

int main(int argc , char * argv[])
{
	cout << "read in lines" << endl;
	string line;
	while( getline(cin,line) )
	{
		if (line.empty())
		{
			break;
		}
		cout << "you are inputing " << line << endl;
	}

	cout << "read in words" <<endl;
	while(cin >> line)
	{
		cout << "you are inputing " << line << endl;
	}
	return 0;

}
