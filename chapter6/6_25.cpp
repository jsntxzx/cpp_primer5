#include<iostream>
#include<string>

using namespace std;

int main(int argc , char* argv[])
{
	string s1 ,s2 ;
	if(argc != 3)
	{
		cout << "usage : ./6_25.o string1 string2 ! " <<endl;
		exit(-1);
	}
	s1 = argv[1];
	s2 = argv[2];
	cout << s1 + s2 << endl;	
	return 0;
}

