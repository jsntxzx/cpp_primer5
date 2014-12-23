#include<iostream>
#include<string>
#include<deque>

using namespace std;

int main()
{
	deque<string> d;
	string word;
	while(cin >> word)
		d.push_back(word);
	for(auto item : d)
		cout << item << endl;
	return 0;


}
