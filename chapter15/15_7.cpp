#include <iostream>
#include <string>

using namespace std;

class Quote
{
	public:
		Quote() = default;
		Quote(const string &book , double mprice): bookNo(book) , price(mprice){}
		string isbn() {return bookNo;}
		virtual double count_price(size_t n) {return price*n ;}
		virtual ~Quote() = default;
	private:
		string bookNo;
	protected:
		double price;

};


class Bulk_Quote : public Quote
{
	public:
		Bulk_Quote() = default ;
		Bulk_Quote(const string &s , double p , size_t qty , double d) : Quote(s,p) , max_qty(qty) , discount(d){} 
		double count_price(size_t qty)  override 
		{
			if(qty < max_qty)
				return qty*(1-discount)*price ;
			else
				return qty*price ;
		}
	private:
		size_t max_qty = 0;
		double discount = 0.0 ;
};


void print_total(ostream &os , Quote & item ,size_t n)
{
	double ret = item.count_price(n);
 	os << "ISBN:" << item.isbn() 
	    << " # sold : " << n << " total price : " << ret << endl;
}



int main()
{
	Quote q1("test1",20);
	Bulk_Quote q2("test2",20,10,0.1);
	print_total(cout, q1 , 10);
	print_total(cout, q2 , 5);
	print_total(cout, q2 , 20);
	return 0;
}
