#ifndef _BULK_QUOTE_H
#define _BULK_QUOTE_H

#include "Quote.h"

class Bulk_Quote : public Quote
{
	public:
		Bulk_Quote() = default ;
		Bulk_Quote(const string & s , double p , size_t n , double d) : Quote(s,p) , quantity(n),discount(d) {}
		double count_price(size_t) override;
	private:
		size_t quantity ;
		double discount ;
};

#endif
