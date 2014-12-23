#include<iostream>
#include<initializer_list>

using namespace std;

int cal(initializer_list<int> i)
{
	int sum = 0;
	for(auto num : i)
		sum += num;
	return sum;
}


int main()
{
	cout << cal({4,5,6}) << endl;
	cout << cal({1,2,33,4}) << endl;
	return 0;
}

