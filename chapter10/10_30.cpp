#include<iostream>
#include<iterator>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
	vector<int> v;
	istream_iterator<int> is(cin),eof;
	while(is != eof)
		v.push_back(*is++);
	sort(v.begin(),v.end());
	ostream_iterator<int> os(cout," ");	
	copy(v.begin(),v.end(),os);
	cout << endl;
	return 0;
}
