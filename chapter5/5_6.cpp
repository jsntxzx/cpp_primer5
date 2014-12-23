#include<iostream>

using namespace std;

int main(int argc,char* argv[])
{
	cout << "input your grades" <<endl;
	int grade;
	while(cin >> grade)
	{
		cout <<( (grade > 90) ? "you get an A" : (grade > 80) ? "you get a B" 
			:(grade > 70) ? "you get a C" : (grade > 60) ? "you get a D"
			: "you don't pass" ) <<endl;
	}
	return 0;



}
