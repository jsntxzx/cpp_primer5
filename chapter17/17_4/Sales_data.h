#include<iostream>
#include<string>

using namespace std;

class Sales_data
{
	friend istream & operator >> (istream & , Sales_data &);
	friend ostream & operator << (ostream & , Sales_data &);
	friend bool operator== (const Sales_data& ,const Sales_data&);
	public:
		Sales_data():bookNo("undefined"),revenue(0),units_sold(0){}
		Sales_data(const string &s , size_t num , double price):bookNo(s),revenue(num*price),units_sold(num) {}
		Sales_data(const string &s):bookNo(s),revenue(0),units_sold(0){}
		const string isbn() const {return bookNo ;}
		string isbn();
		Sales_data & operator+(const Sales_data&);
		Sales_data & operator+=(const Sales_data &);
	        Sales_data & operator=(const Sales_data &);
	        Sales_data &operator=(const string &);	

	private:
		string bookNo;
		double  revenue ;
		size_t units_sold ;
};

istream &operator >>(istream &,Sales_data &);
ostream &operator <<(ostream &,Sales_data &);
bool operator== (const Sales_data& ,const Sales_data&);

