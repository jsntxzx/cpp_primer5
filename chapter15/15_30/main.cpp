#include<iostream>
#include<vector>
#include<string>
#include<memory>
#include "Quote.h"
#include "Bulk_Quote.h"

using namespace std ;

int main()
{
	vector<Quote> v1 ;
	vector<shared_ptr<Quote>> v2;
	for(int i = 0 ; i< 10 ; i++ )
	{
		string bookID = "xiang-" + to_string(i);
		v1.push_back(Quote(bookID,40));
		v2.push_back(make_shared<Quote>(bookID,40));
	}
	for(int i = 0 ; i < 5 ; i++)
	{
		string bookID = "test" + to_string(i);
		v1.push_back(Bulk_Quote(bookID,40,10,0.1));
		v2.push_back(make_shared<Bulk_Quote>(bookID,40,10,0.1));
	}
	double total_revenue1 = 0 ,total_revenue2 = 0;
	for(auto i : v1)
		total_revenue1 += i.count_price(20);
	for(auto pi: v2)
		total_revenue2 += pi->count_price(20);

	cout << "when using vector<Quote> total price is " << total_revenue1 << endl;
	cout << "when using vector<shared_ptr<Quote>> total price is " << total_revenue2 << endl;
	return 0;
}	
