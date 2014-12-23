#include<iostream>
#include<string>
#include<list>

using namespace std;

int main()
{
	list<string> l;
	string word;
	while(cin >> word)
		l.push_back(word);
	for(auto item : l)
		cout << item << endl;
	return 0;


}
