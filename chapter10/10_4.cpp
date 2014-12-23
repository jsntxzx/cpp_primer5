#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
	vector<double> v;
	double val;
	while(cin >> val)
		v.push_back(val);
	double result = accumulate(v.cbegin(),v.cend(),0);
	cout << " sum of vector is " << result << endl;
	return 0;


}
