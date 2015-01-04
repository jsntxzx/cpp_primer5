#include<iostream>
#include<functional>
#include<string>
#include<vector>
#include<map>
using namespace std;

int main()
{
	int lnum , rnum ;
	string op;
	map<string , function<int(int,int)>> opmap = {
		{"+",plus<int>()},
		{"-",minus<int>()},
		{"*",multiplies<int>()},
		{"/",divides<int>()}
	};
	while(cin >> lnum >> op >> rnum) 
		cout << opmap[op](lnum,rnum) << endl;
	return 0;
}
