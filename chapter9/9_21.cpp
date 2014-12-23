#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int num;
	vector<int> v;
	auto iter = v.end(); 
	while(cin >> num)
		iter = v.insert(iter,num);
	for(auto iterm : v)
		cout << iterm << " " ;
	cout << endl;
	return 0;
}
