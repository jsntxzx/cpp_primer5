#include "Vec.h"
#include<iostream>
using namespace std;
int main()
{
	Vec<int> vi = {0,1,2,3}; 
	Vec<string> vs = {"hello" , "aaa" , "bbb"};
	cout << vi[0] << endl;
	cout << vs[0] << endl;
	return 0;
}
