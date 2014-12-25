#include<iostream>
#include<string>
using namespace std;

class HasPtr
{
	public:
		HasPtr(const string &s = string()) : ps(new string(s)) , i(0){ cout << "construt by string" << endl;}
		HasPtr(const HasPtr &hp) ;
		HasPtr & operator=(const HasPtr &hp) ;
		~HasPtr(){
			cout << "destory all objects" << endl;
			delete ps ;
		}
	private:
		string *ps;
		int i;

};


HasPtr::HasPtr(const HasPtr &hp)
{
	cout << "construct by copying" << endl;
	ps = new string(*(hp.ps));
	i = hp.i ;
}

HasPtr &HasPtr::operator=(const HasPtr &hp)
{
	cout << "construct by operator" << endl;
	ps = new string(*(hp.ps));
	i = hp.i ;
	return *this;
}


int main()
{
	cout << "testing functions" << endl;
	HasPtr p1("hello");
	HasPtr p2 = HasPtr();
	HasPtr p3(p1);
	HasPtr p4 = p1 ;
	return 0;
}
