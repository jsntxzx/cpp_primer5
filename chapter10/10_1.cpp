#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int main()
{
	vector<int> v;
	int target = 10;
	int val;
	while(cin >> val)
		v.push_back(val);
	int result = count(v.cbegin(),v.cend(),target);
	cout << target << " appears " << result << " times" << endl;
	return 0;


}
