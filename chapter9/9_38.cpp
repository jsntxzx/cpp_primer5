#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int > v;
	cout << "size of vector is " << v.size() <<endl;
	cout << "capacity of vector is " << v.capacity() <<endl;
	for(int i = 0 ; i < 50 ; i++ )
		v.push_back(i);
	cout << "now size is " << v.size() << endl;
	cout << "now capacity is " << v.capacity() << endl;
	for(int j = 0 ; j < 10 ; j++)
	{
		while(v.size() < v.capacity())
			v.push_back(0);
		if(v.size() == v.capacity())
			v.push_back(1);
		cout << "size = " << v.size() <<endl;
		cout << "capacity = " << v.capacity() << endl;
	}
	return 0;

}
