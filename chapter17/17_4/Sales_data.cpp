#include"Sales_data.h"


string Sales_data::isbn()
{
	return bookNo ;
}

Sales_data & Sales_data::operator+(const Sales_data &s)
{
	revenue = revenue + s.revenue ;
	units_sold = units_sold + s.units_sold ;
	return *this;
}

Sales_data &Sales_data::operator=(const Sales_data &s)
{
	revenue = s.revenue ;
	units_sold = s.units_sold ;
	return *this;
}

Sales_data &Sales_data::operator+=(const Sales_data &s)
{
	return *this+s;
}

Sales_data &Sales_data::operator=(const string &s)
{
	bookNo = s ;
	return *this;
}

istream &operator>>(istream &is ,Sales_data &item)
{
	double price ;
	is >> item.bookNo >> item.units_sold >> price ;
	if(is)
		item.revenue = item.units_sold * price ;
	else
		item = Sales_data();
	return is;
}

ostream &operator <<(ostream &os ,Sales_data &item)
{
	os << item.bookNo << " : " << item.revenue << " " << item.units_sold;
	return os;
}


bool operator==(const Sales_data &lhs ,const Sales_data &rhs)
{
	return lhs.bookNo == rhs.bookNo && lhs.units_sold == rhs.units_sold;
}

