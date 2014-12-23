#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(int argc , char* argv[])
{
	int maxCount = 1;
	string s;
	vector<string> v;
	while(cin >> s)
		v.push_back(s);
	auto p  = v.begin();
	int tmp = 1 ;
	while(p < v.end() -1)
	{
		if((*p) == *(p+1))
			++tmp;
		else
		       tmp = 1;	
		if(tmp > maxCount)
			maxCount = tmp;
		++p;
	}
	if(maxCount == 1)
		cout << "no match" <<endl;
	else
		cout << "max Count is " << maxCount <<endl;


	return 0;
}
