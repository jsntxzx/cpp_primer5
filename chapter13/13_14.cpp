#include<iostream>

using namespace std;

class numbered
{
	public :
		numbered(){static int id = 0 ; mysn = id++;}
		int  mysn ;
};

void print(numbered n)
{
	cout << n.mysn << endl;
}

int main()
{
	numbered a , b = a , c = b;
	print(a);
	print(b);
	print(c);
	return 0;
}
