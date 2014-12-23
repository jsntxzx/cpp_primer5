#include<iostream>
#include<string>

using namespace std;

int main(int argc , char *argv[])
{
	string line;
	cout << "input a string" <<endl;
	getline(cin,line);
	string line1(line);
	cout << "using normal for " <<endl;
	for(string::size_type i = 0; i < line.size() ; i++ )
		line[i] = 'X';
	cout << line <<endl;
	cout << "using while loop" <<endl;
	string::size_type j = 0;
	while(j<line1.size())
	{
		line1[j] = 'X';
		j++;
	}
	cout << line1 <<endl;

	return 0;
}


