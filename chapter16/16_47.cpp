#include<iostream>
#include<utility>
#include<string>

using namespace std ;


void func(int &i , int j)
{
	cout << ++i << " " << ++j << endl;
}

void g(int &i ,int &&j)
{
	cout << i << " " << j << endl;
}

template<typename F , typename T1 , typename T2> void flip(F f , T1 &&t1 , T2 && t2)
{
	f(std::forward<T1>(t1) , std::forward<T2>(t2));
}

int main()
{
	int iv1 = 4  ;
	flip(g , iv1 , 12);
	return 0 ;
}
