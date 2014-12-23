#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
int main()
{
	vector<string> v;
	string target = "ll";
	string val;
	while(cin >> val)
		v.push_back(val);
	int result = count(v.cbegin(),v.cend(),target);
	cout << target << " appears " << result << " times" << endl;
	return 0;


}
