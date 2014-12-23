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
	for (decltype(v1.size()) j = 0 ; j < v1.size()	-1 ; j++)
		cout << v1[j] + v1[j+1] << endl;
	for (decltype(v1.size()) j = 0 ; j < (v1.size() -1)/2+1 ; j++)
	        cout << v1[j] + v1[v1.size()-1 - j] << endl;


	return 0;


}
