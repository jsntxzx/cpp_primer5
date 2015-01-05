#ifndef _DISC_QUOTE_H
#define _DISC_QUOTE_H

#include "Quote.h"

class Disc_Quote : public Quote
{
	public :
		Disc_Quote() = default;
		Disc_Quote(const string & ,double ,size_t ,double);
		double count_price(size_t) = 0 ;
	protected:
		size_t quantity = 0;
		double discount = 0.0 ;
};
#endif
