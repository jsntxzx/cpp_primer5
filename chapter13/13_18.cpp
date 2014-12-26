#include<iostream>
#include<string>

using namespace std;

class Employee
{
	public:
		Employee(){name = "ToBeFilled" ; id = i++ ;}
		Employee(const string &n):name(n),id(i++){}
		void print(){cout << name << " : " << id << endl;}
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
	e1.print();
	e2.print();
	return 0;
}
