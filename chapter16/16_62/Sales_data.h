#include<iostream>
#include<string>

using namespace std;

class Sales_data
{
	friend istream & operator >> (istream & , Sales_data &);
	friend ostream & operator << (ostream & , Sales_data &);
	friend struct std::hash<Sales_data> ;
	friend bool operator== (const Sales_data& ,const Sales_data&);
	public:
		Sales_data():bookNo("undefined"),revenue(0),units_sold(0){}
		Sales_data(const string &s , size_t num , float price):bookNo(s),revenue(num*price),units_sold(num) {}
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
bool operator== (const Sales_data& ,const Sales_data&);

