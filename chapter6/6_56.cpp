#include<iostream>
#include<vector>

using namespace std;

int add(int a,int b)
{
	return a+b;
}

int inc(int a ,int b)
{
	return a-b;
}

int mul(int a , int b)
{
	return a*b;
}

int divd(int a, int b)
{
	return a/b;
}

int main()
{
	vector<int(*)(int,int)> v;
	v.push_back(add);
	v.push_back(inc);
	v.push_back(mul);
	v.push_back(divd);

	for (auto func : v)
		cout << func(4,2) << endl;
	
	return 0;
}


