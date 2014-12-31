#include<iostream>
#include<string>
#include<vector>
using namespace std;

class PrintString
{
	public:
		PrintString(istream &i = cin,ostream &o=cout):is(i),os(o) {}
		string operator()() const{
			string word;
			is >> word ;
			return word ;
		}

	private:
		istream &is;
		ostream &os;
		

};



int main()
{
	vector<string> v;
	PrintString p;
	int i = 0;
	while(i<10)
	{
		v.push_back(p());
		i++;
	}
	for(auto vi: v)
		cout << vi <<endl;
	return 0;
}
