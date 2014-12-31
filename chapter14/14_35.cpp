#include<iostream>
#include<string>

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
	PrintString p;
	cout << p() << endl;
	return 0;
}
