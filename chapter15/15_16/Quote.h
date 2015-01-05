#ifndef _QUOTE_H
#define _QUOTE_H

#include<iostream>
#include<string>

using namespace std;

class Quote
{
	public:
		Quote() = default ;
		Quote(const string & , double);
		string isbn() ;
		virtual double count_price(size_t) ;
		virtual ~Quote() = default ;
	private:
		string bookNo ;
	protected:
		double price ;
};
#endif
