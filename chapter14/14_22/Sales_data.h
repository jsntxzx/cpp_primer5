#include<iostream>
#include<string>

using namespace std;

class Sales_data
{
	friend istream & operator >> (istream & , Sales_data &);
	friend ostream & operator << (ostream & , Sales_data &);
	public:
		Sales_data():bookNo("undefined"),revenue(0),units_sold(0){}
		string isbn();
		Sales_data & operator+(const Sales_data&);
		Sales_data & operator+=(const Sales_data &);
	        Sales_data & operator=(const Sales_data &);
	        Sales_data &operator=(const string &);	

	private:
		string bookNo;
		float  revenue ;
		size_t units_sold ;
};

istream &operator >>(istream &,Sales_data &);
ostream &operator <<(ostream &,Sales_data &);

