#include "Bulk_Quote.h"

double Bulk_Quote::count_price(size_t n)
{
	if(quantity > n )
		return n*price;
	else
		return n*(1-discount)*price;

}
