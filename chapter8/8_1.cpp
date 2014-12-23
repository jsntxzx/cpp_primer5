#include<iostream>
#include<string>

using namespace std;

istream &transtream(istream &in)
{
	string l;
	while(!in.eof())
	{
		in >> l;
		cout << l  << endl;
	}
	in.clear();
	return in;
}


int main()
{
	cout << "test begins :" << endl;
	cin.clear();
	transtream(cin);
	cout << "reuse instream" << endl;
	transtream(cin);
	return 0;


}
