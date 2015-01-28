#include<iostream>
#include<string>
#include<unordered_set>
#include"Sales_data.h"

using namespace std;

namespace std {
template<> struct hash<Sales_data>
	{
		size_t operator()(const Sales_data &a) const ;	
	
	};

size_t hash<Sales_data>::operator()(const Sales_data &a) const
	{
		return hash<string>()(a.bookNo) ^
		       hash<float>()(a.revenue) ^
		       hash<size_t>()(a.units_sold) ;
	}
}

int main()
{

	Sales_data item1("112-1212-1" , 10 , 3.5);
	Sales_data item2("112-1212-2" , 10 , 3.5);
	Sales_data item3("112-1212-3" , 10 , 3.5);
	Sales_data item4("112-1212-4" , 10 , 3.5);
	Sales_data item5("112-1212-1" , 10 , 3.5);
	unordered_multiset<Sales_data> Sdset ;
	Sdset.insert(item1);
	Sdset.insert(item2);
	Sdset.insert(item3);
	Sdset.insert(item4);
	Sdset.insert(item5);

	for(auto keys : Sdset)
		cout << keys << endl;
	return 0;
}
