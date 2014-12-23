#include<iostream>

using namespace std;


int fact(int n)
{
	if (n <= 1)
		return 1;
	else 
		return n*fact(n-1);


}

int main()
{
	int i;
	cout <<"input a number " << endl;
       	cin >> i;
	cout << "the result is " << fact(i) << endl;	
	return 0;
}
