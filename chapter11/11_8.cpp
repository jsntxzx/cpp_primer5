#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	vector<int> v;
	int value;
	cout << "input several numbers " << endl;
	while(cin >>value)
	{
		if( find(v.begin(),v.end(),value)== v.end())
			v.push_back(value);	
	}
	for_each(v.begin(),v.end(),[](int a){cout << a << " " ;} );
	cout <<endl;
	return 0;
}
