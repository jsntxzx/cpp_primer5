#ifndef _BASKET_H
#define _BASKET_H

#include<iostream>
#include<memory>
#include<set>
#include "Quote.h"
#include "Bulk_Quote.h"

class Basket 
{
	public:
		void add_item(const Quote &);
		void add_item(Quote &&);
		void add_item(shared_ptr<Quote> &);
		void count_total(ostream &);
	private:
		static bool compare(const shared_ptr<Quote> &, const shared_ptr<Quote> &);	
		multiset< shared_ptr<Quote>,decltype(compare) *> items{compare};
};

#endif
