#include "Basket.h"

void Basket::add_item(const Quote & sales)
{
	items.insert(shared_ptr<Quote>(sales.clone()));
}

void Basket::add_item(Quote &&sales)
{
	items.insert(shared_ptr<Quote>(std::move(sales).clone()));
}

void Basket::add_item(shared_ptr<Quote> &sales)
{
	items.insert(sales);
}

void Basket::count_total(ostream &os)
{
	double sum = 0.0;
	for(auto iter = items.begin() ; iter != items.end() ; iter = items.upper_bound(*iter))
		sum += (*iter)->count_price(items.count(*iter));
	os << "Total Sales is : " << sum << endl; 
}

bool Basket::compare(const shared_ptr<Quote> &lhs , const shared_ptr<Quote> &rhs)
{
	return lhs->isbn() < rhs->isbn() ;
}



