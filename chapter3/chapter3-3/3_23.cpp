#include<iostream>
#include<vector>

using namespace  std;

int main(int argc,char* argv[])
{
	vector<int> v;
	cout << "before" << endl;
	for (int i = 1; i < 11; i++)
	{	
		v.push_back(i);
		cout << i << "\t";	;
	}
	cout <<endl;
	cout << "after" <<endl;
	for(auto it = v.begin() ; it != v.end() ; it++)
	{	
		*it = (*it)*(*it);
		cout << *it << "\t";
	}
	cout << endl;
	return 0;


}
