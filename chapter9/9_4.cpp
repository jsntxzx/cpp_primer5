#include<iostream>
#include<vector>

using namespace std;


bool myfind(vector<int> &v , int i)
{
	for(auto j = v.begin() ; j != v.end() ; j++)
	{
		if( *j == i )
			return true ;
	}
	return false ;

}

int main()
{
	vector<int> v {1,2,3,4,5};
	cout << myfind(v,3) << endl;
	cout << myfind(v,10) << endl;
	return 0;


}
