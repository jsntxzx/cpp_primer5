#include "Disc_Quote.h"
#include "Quote.h"
#include "Bulk_Quote.h"


void print(ostream &os , Quote &item , size_t n)
{
	double ret = item.count_price(n);
	os << "ISBN: " << item.isbn() << " total price: "<< ret << endl;
}

int main()
{
	Quote i1("b1",20);
	Bulk_Quote i2("b2",10,5,0.1);
	print(cout,i1,10);
	print(cout,i2,2);
	print(cout,i2,10);
	return 0;
}
