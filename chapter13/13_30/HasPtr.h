#include<iostream>
#include<string>


using namespace std;

class HasPtr
{
	friend void swap(HasPtr &h1 , HasPtr &h2);
	public:
		HasPtr(const string &s = string()):ps(new string(s)),value(0),usage(new size_t(1)){}
		HasPtr(const HasPtr &hp);
		HasPtr &operator=(const HasPtr &hp);
		~HasPtr();
		void print();
		void assign(int v);
	private:
		string *ps;
		int value;
		size_t *usage;


};

inline void swap(HasPtr &h1 ,HasPtr &h2)
{
	using std::swap;
	swap(h1.ps,h2.ps);
	swap(h1.value , h2.value);
}
