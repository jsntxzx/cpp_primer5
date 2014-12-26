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
		HasPtr &ChangeTo(string s){*ps = s ; return *this;}
		void print(){cout << *ps << endl;}
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
	string* nps = new string(*(hp.ps));
	delete ps;
	ps = nps ;
	i = hp.i ;
	return *this;
}




int main()
{
	HasPtr p1("hello");
	HasPtr p2(p1);
	cout << "before changing:" << endl;
	p1.print();p2.print();
	p2.ChangeTo("world");
	cout << "after changing:" << endl;
	p1.print();p2.print();
	return 0;
}
