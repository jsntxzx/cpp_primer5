#include<iostream>
#include<string>

using namespace std;

class Employee
{
	public:
		Employee(){name = "ToBeFilled" ; id = i++ ;}
		Employee(const string &n):name(n),id(i++){}
		void print(){cout << name << " : " << id << endl;}
		Employee(const Employee &) = delete ;
		Employee & operator=(const Employee &) = delete ;
	private:
		string name;
		int id ;
		static int i ;
};

int Employee::i = 0 ;

int main()
{
	Employee e1;
	Employee e2("xiang");
//	Employee e3 = e1 ;
//	Employee e4(e2);
	e1.print();
	e2.print();
	return 0;
}
