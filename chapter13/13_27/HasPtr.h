#include<iostream>
#include<string>


using namespace std;

class HasPtr
{
	public:
		HasPtr(const string &s = string()):ps(new string(s)),value(0),usage(new size_t(1)){}
		HasPtr(const HasPtr &hp);
		HasPtr &operator=(const HasPtr &hp);
		~HasPtr();
		void print();
	private:
		string *ps;
		int value;
		size_t *usage;


};
