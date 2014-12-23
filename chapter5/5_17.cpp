#include<iostream>
#include<vector>

using namespace std;


int main(int argc, char* argv[])
{
	vector<int> v1;
	vector<int> v2;
	int i,j;
	cout << "input numbers of v1" <<endl;
	while(cin >> i && cin.get() != '\n')
		v1.push_back(i);
	cout << "input numbers of v2" <<endl;
        while(cin >> j)
       		v2.push_back(j);

	int flag = 1 ;
	for( decltype(v1.size()) vi1 = 0, vi2 = 0 ; vi1 != v1.size() && vi2 != v2.size() ; ++vi1 , ++vi2)
	{
		if(v1[vi1] != v2[vi2])
			flag = 0;
	}

	if(flag == 0)
		cout << "have no connection" <<endl;
	else
		cout << "connected" <<endl;
	return 0;
}
