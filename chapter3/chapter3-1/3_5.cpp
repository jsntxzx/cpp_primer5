#include<iostream>
#include<string>

using namespace std;

int main(int argc , char * argv[])
{
	string line;
	cout << "input serveral strings(using whhitespace as sperator)" <<endl;
	string sentence1 ;
	string sentence2 ;
	while(cin >> line )
	{
	sentence1 = sentence1 + line ;
	sentence2 = sentence2 + " " + line ;
	}
	cout << "sentence1 is " << sentence1 <<endl;
	cout << "sentence2 is " << sentence2 <<endl;
	return 0;



}

