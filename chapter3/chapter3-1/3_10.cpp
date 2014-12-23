#include<iostream>
#include<string>

using namespace std;

int main(int argc , char *argv[])
{
	string line,newstring;
	cout << "input a string" <<endl;
	getline(cin,line);
	for(auto c : line)
	{
		if(!ispunct(c))
			newstring = newstring + c ;;
	}
	cout << newstring <<endl;
	return 0;
}


