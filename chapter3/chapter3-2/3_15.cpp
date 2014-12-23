#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(int argc , char *argv[])
{
	string	str;
	vector<string> v1;
	cout << "input servel strings" <<endl;
	while(cin >> str)
		v1.push_back(str);
	for (auto j : v1)
		cout << "new:" + j  <<endl;
	return 0;


}
