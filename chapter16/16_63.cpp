#include<iostream>
#include<string>
#include<vector>

using namespace std ;
template<typename T> size_t countT(const vector<T> &v , T t)
{
	size_t ret = 0 ;
	for(size_t i = 0 ; i < v.size() ; i++)
	{
		if(v[i] == t)
			ret ++ ;
	}	
	return ret ;
}

int main()
{
	vector<int> vi = {2,3,4,5,6,1,4,1,41,12}; 
	vector<double> vd = {0.12 ,0.2 ,2.12 , 2.12} ;
	vector<string> vs(10,"hi");

	cout << countT<int>(vi,1) << endl;
	cout << countT<double>(vd , 2.12) << endl;
	cout << countT<string>(vs,"hi") << endl;
	return 0;
}
