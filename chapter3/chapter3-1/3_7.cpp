#include<iostream>
#include<string>

using namespace std;

int main(int argc , char *argv[])
{
	string line;
	cout << "input a string" <<endl;
	getline(cin,line);
	for(char  &c : line)
		c = 'X';
	cout << line <<endl;
	return 0;
}


