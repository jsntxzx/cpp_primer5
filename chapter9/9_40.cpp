#include<iostream>
#include<vector>
#include<string>

using namespace std;
int main()
{
	vector<string> sv;
	sv.reserve(1024);
	string word;
	while(cin >> word)
		sv.push_back(word);
	sv.resize(sv.size() + sv.size()/2);
	cout << "size = " << sv.size() <<endl;
	cout << "capacity = " << sv.capacity() << endl;
	return 0;

}

