#include<iostream>
#include<vector>

using namespace std;

int main(int argc , char *argv[])
{
	int num;
	vector<int> v1;
	cout << "input servel numbers" <<endl;
	while(cin >> num)
		v1.push_back(num);
	for (auto j : v1)
		cout << j*j <<endl;
	return 0;


}
