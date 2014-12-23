#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
	vector<int> vi;
	vector<string> vs = {"1" , "2" , "111"};
	for(auto s : vs)
		vi.push_back(stoi(s));
	int sum = 0;
	for(auto i : vi)
		sum += i;
	cout << "sum of vi is " << sum << endl;
	return 0;
}
