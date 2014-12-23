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
	cout << "calculate values between neborhoods" << endl;
	for(auto it = v1.begin(); it < v1.end()-1 ; it ++)
		cout << *it + *(it + 1 ) << "\t" ;
	cout << endl;

	cout << "calculate values between front and end" << endl;
	for(auto it1 = v1.begin() , it2 = v1.end()-1 ; it1 <= v1.begin() + (v1.end() - v1.begin())/2 ; it1 ++ ,it2 --)
		cout << *it1 + *it2 << "\t" ;
	cout <<endl;

	return 0;


}
