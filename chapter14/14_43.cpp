#include<iostream>
#include<functional>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	vector<int> v = {2,3,4,5,6};	
	cout << "vector is : " << endl;
	for_each(v.begin(),v.end(),[](int a){cout << a << " ";});
	cout << endl;
	int value;
	size_t i;
	modulus<int> m;
	cin >> value ;
	for(i =0 ; i<v.size() ; i++)
	{
		if(m(value,v[i]))
		{
			cout << "can not" << endl;
			break;
		}
	}
	if(i == v.size()) cout << "can" <<endl;
	return 0;
}
