#include<iostream>
#include<vector>
#include<string>
#include<iterator>

using namespace std ;

template<typename T> void print(vector<T> &v)
{
	typename vector<T>::iterator p ;
	for(p = v.begin() ; p < v.end() ; p++ )
		cout << *p << endl ;
}

int main()
{
	vector<int> vi = {0,1,2,3,4};
	vector<string> vs = {"aa" ,"cc" ,"dd"} ;
	print(vi);
	print(vs);
	return 0;
}
