#include<iostream>
#include<vector>
#include<memory>
using namespace std;

int main()
{
	auto p = make_shared<vector<int>> ();
	cout << "input several numbers " << endl;
	int number ;
	while(cin >> number)
		p->push_back(number);
	for(auto a = p->begin() ; a != p->end() ; a++)
		cout << *a << " ";
	cout << endl;
	return 0;
}
