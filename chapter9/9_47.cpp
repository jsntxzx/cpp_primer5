#include<iostream>
#include<string>

using namespace std;

int main()
{
	string s = "ab2c3d7R4E6";
	string numbers = "0123456789";
	auto pos1 = s.find_first_of(numbers);
	auto pos2 = s.find_first_not_of(numbers);
	cout << pos1 << " " << pos2 << endl;



}
