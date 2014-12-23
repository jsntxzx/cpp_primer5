#include<iostream>
#include<fstream>
#include<iterator>
#include<vector>

using namespace std;


int main()
{
	ifstream infile("in.txt", iostream::in);
	ofstream outfile1("out1.txt",iostream::app);
	ofstream outfile2("out2.txt",iostream::app);
	vector<int> v;
	istream_iterator<int> in(infile) , eof;
	ostream_iterator<int> o1(outfile1," ") , o2(outfile2," ");
	while(in != eof )
		v.push_back(*in++);
	for(auto item : v)
	{
		if(item%2 == 1)
			*o1++ = item;
		else
			*o2++ = item;	
	}
	return 0;

}
