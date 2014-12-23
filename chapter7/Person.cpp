#include "common.h"
using namespace std;

istream &read(istream &is ,Person &p )
{
	is >> p.name >> p.addr ;
	return is;
}

ostream &print(ostream &os , const Person &p)
{
	os << p.name << " " << p.addr <<endl;
	return os;
}

int main()
{
	Person p;
//	p.name = "xiang";
//	p.addr = "SICT";
//	cout << "recording an info :" <<endl;
// 	read(cin,p);
//	cout << "you were inputing :" << endl;
	print(cout,p);
	Person p1 = Person("xiang");
	print(cout,p1);
	Person p2 = Person("xiang","SICT");
	print(cout,p2);
	return 0;


}
