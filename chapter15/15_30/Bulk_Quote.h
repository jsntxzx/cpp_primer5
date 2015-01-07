#ifndef _BULK_QUOTE_H
#define _BULK_QUOTE_H

#include "Quote.h"

class Bulk_Quote : public Quote
{
	public:
		Bulk_Quote() = default ;
		Bulk_Quote(const string & s , double p , size_t n , double d) : Quote(s,p) , quantity(n),discount(d) {}
		Bulk_Quote* clone() const &{return new Bulk_Quote(*this);}
		Bulk_Quote* clone() && {return new Bulk_Quote(std::move(*this));}
		double count_price(size_t) override;
	private:
		size_t quantity ;
		double discount ;
};

#endif
