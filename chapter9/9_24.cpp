#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int > v1 = {2} , v2 = {1} ;
	cout << *v1.begin() << " " << *v2.begin() << endl;
	cout << v1.at(0) << " "  << v2.at(0) << endl;
	cout << v1.front() << " " << v2.front() << endl;
	cout << v1[0] << " " << v2[0] <<  endl;
	return 0;

}
