#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
	vector<int> v;
	int val;
	while(cin >> val)
		v.push_back(val);
	int result = accumulate(v.cbegin(),v.cend(),0);
	cout << " sum of vector is " << result << endl;
	return 0;


}
