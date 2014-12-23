#include<iostream>

using namespace std;

int main(int argc,char* argv[])
{
	cout << "input your grades" <<endl;
	int grade;
	while(cin >> grade)
	{
		if(grade > 90)
			cout << "you get an A" <<endl;
		else if(grade > 80)
			cout << "you get a B" <<endl;
		     else if (grade > 70)
			     cout << "you get a C" <<endl;
		     	   else if (grade > 60)
				cout << "you get a D" <<endl;
			   	else
					cout << "you don't pass" <<endl;
	}
	return 0;



}
