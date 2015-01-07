#include "Quote.h"

Quote::Quote(const string &s , double p)
{
	bookNo = s ;
	price = p;
}

string Quote::isbn()
{
	return bookNo ;
}

double Quote::count_price(size_t n)
{
	return price*n ;
}


