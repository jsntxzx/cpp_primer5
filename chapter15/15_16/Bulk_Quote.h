#ifndef _BULK_QUOTE_H
#define _BULK_QUOTE_H

#include "Disc_Quote.h"


class Bulk_Quote : public Disc_Quote
{
	public:
		Bulk_Quote() = default ;
		Bulk_Quote(const string & s , double p , size_t n , double d) : Disc_Quote(s,p,n,d) {}
		double count_price(size_t) override;

};

#endif
