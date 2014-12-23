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
	for (string  &j : v1)
		for (auto &c : j)
			c = toupper(c);	
	for (string j : v1)
		cout << j << endl;
	return 0;


}
