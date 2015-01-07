#include <iostream>
#include<string>
#include "Quote.h"
#include "Bulk_Quote.h"
#include "Basket.h"

using namespace std;

int main()
{
	Basket b;
	for(int i = 0 ; i < 10 ; i++)
	{
		string bid = "xiang" + to_string(i);
		b.add_item(Quote(bid,10));
	}

	for(int i = 0 ; i< 6 ; i++)
	{
		string bid = "zx" + to_string(i);
		b.add_item(Bulk_Quote(bid,20,5,0.1));
	}	
	b.count_total(cout);
	return 0;

}
