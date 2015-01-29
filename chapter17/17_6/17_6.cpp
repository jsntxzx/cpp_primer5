#include<iostream>
#include<string>
#include<algorithm>
#include"Sales_data.h"

using namespace std;

class matches
{ 
	public:
		matches(vector<Sales_data>::size_type t , vector<Sales_data>::const_iterator b , vector<Sales_data>::const_iterator e):type(t),bi(b),ei(e){}	
		vector<Sales_data>::size_type 	type ;
		vector<Sales_data>::const_iterator bi; 
		vector<Sales_data>::const_iterator ei;
};

bool compareIsbn(const Sales_data &lhs , const Sales_data &rhs)
{
	return lhs.isbn() < rhs.isbn() ;
}

vector<matches> findBook(const vector<vector<Sales_data>> &v ,const string &s)
{
	vector<matches> ret ;
	for(auto p = v.cbegin() ; p != v.cend() ; p++)
	{
		auto result = equal_range(p->cbegin() , p->cend() , s , compareIsbn);
		if(result.first != result.second)
			ret.push_back(matches(p-v.cbegin() , result.first , result.second));
	}
	return ret ;
}

void ReportResults(istream &in , ostream &out , const vector<vector<Sales_data>> &v)
{
	string s ;
	out << "input a string and press q to quit" << endl;
	while(in >> s)
	{
		if(s == "q")
			break;
		auto ret = findBook(v,s);
		if(ret.empty())
		{
			out << "can not find such a book" << endl;
			continue ;
		}
		else{
			out << "number of store that contains this book is " << ret.size() << endl;
			for(auto item : ret)
				out << "store id : " << item.type << endl;
		}
	}
}

int main()
{
	vector<vector<Sales_data>> v ;
	vector<Sales_data> v1 , v2 , v3 , v4 ,v5 ;
	for(int i = 0 ; i< 10 ; i++)
	{
		Sales_data item("112-1212-1" , 10 , 3.5);
		v1.push_back(item);
	}
	for(int i = 0 ; i< 10 ; i++)
	{
		Sales_data item("112-1212-2" , 10 , 3.5);
		v2.push_back(item);
	}
	for(int i = 0 ; i< 10 ; i++)
	{
		Sales_data item("112-1212-3" , 10 , 3.5);
		v3.push_back(item);
	}
	for(int i = 0 ; i< 10 ; i++)
	{
		Sales_data item("112-1212-4" , 10 , 3.5);
		v4.push_back(item);
	}
	for(int i = 0 ; i< 10 ; i++)
	{
		Sales_data item("112-1212-5" , 10 , 3.5);
		v5.push_back(item);
	}
	v.push_back(v1);
	v.push_back(v2);
	v.push_back(v3);
	v.push_back(v4);
	v.push_back(v5);

	ReportResults(cin , cout ,v);
	return 0;
}
