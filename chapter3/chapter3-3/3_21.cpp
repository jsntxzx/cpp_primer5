#include<iostream>
#include<vector>
#include<string>
using namespace std;

void printVectorint(vector<int> v)
{
	if(v.size() > 0)
	{
		cout << "the content of vector is ";
		for(auto it = v.begin(); it != v.end() ; it++)
			cout << *it  << "\t";
		cout <<endl;
		
	}
	else
		cout << "it is an empty vector" <<endl;

}

void printVectorString(vector<string> v)
{
	if(v.size()>0)
	{
		cout << "the content of vector is ";
		for(auto it = v.begin(); it!= v.end() ; it++)
			cout << *it << "\t";
		cout <<endl;
	
	}
	else
		cout << "it is an empty vector" <<endl;


}

int main(int argc , char * argv[])
{
	vector<int> v1;
	vector<int> v2(10);
	vector<int> v3(10,42);
	vector<int> v4{10};
	vector<int> v5{10,42};
	vector<string> v6{10};
	vector<string> v7{10,"hi"};
	printVectorint(v1);
	printVectorint(v2);
	printVectorint(v3);
	printVectorint(v4);
	printVectorint(v5);
	printVectorString(v6);
	printVectorString(v7);
	return 0;

}
