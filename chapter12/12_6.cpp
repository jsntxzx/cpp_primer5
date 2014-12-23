#include<iostream>
#include<vector>
using namespace std;

int main()
{
	auto p = new vector<int> ();
	cout << "input several numbers " << endl;
	int number ;
	while(cin >> number)
		p->push_back(number);
	for(auto a = p->begin() ; a != p->end() ; a++)
		cout << *a << " ";
	cout << endl;
	delete p;
	return 0;
}
