#include<iostream>
#include<vector>
#include<string>

using namespace std ;

template<typename T> void print(vector<T> &v)
{
	typename vector<T>::size_type i ;
	for(i = 0 ; i < v.size() ; i++ )
		cout << v[i] << endl ;
}

int main()
{
	vector<int> vi = {0,1,2,3,4};
	vector<string> vs = {"aa" ,"cc" ,"dd"} ;
	print(vi);
	print(vs);
	return 0;
}
