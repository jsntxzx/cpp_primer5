#include<iostream>
#include<stdexcept>
using namespace std;

int main()
{
	int a,b;
	try
	{
	cin >> a >> b;
	if ( b == 0)
		throw runtime_error("b is 0 ! ");
	cout << (float)a/b <<endl;
	}
	catch(runtime_error e)
	{
	cout << e.what() << "enter another b" << endl;
	int nb;
	cin >> nb;
	if(nb != 0)
		cout << (float)a/nb <<endl;
	}
	return 0;
}
