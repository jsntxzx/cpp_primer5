#include<iostream>
#include<string>
#include<memory>
#include<vector>
#include<initializer_list>

using namespace  std;
typedef string::size_type st;
class StrBlob {
	public:
	StrBlob():data(make_shared<vector<string>>()){}
	StrBlob(initializer_list<string> il) : data(make_shared<vector<string>>(il)){}
	st size() const {return data->size();} 
	bool empty() const {return data->empty();}
	string &front();
	string &back();
	void push_back(const string &t){data->push_back(t);}
	void pop_back();
	private:
	shared_ptr<vector<string>> data;
	void check(st i , const	string & msg) const;
};


void StrBlob::check(st i ,const string &msg) const
{
	if(i >= data->size())
		throw out_of_range(msg);
}


void StrBlob::pop_back()
{
	check(0,"out of range error");
	data -> pop_back();
}


string & StrBlob::front()
{
	check(0,"out of range error");
	return data->front();
}

string & StrBlob::back()
{
	check(0 , "out of range error");
	return data->back();
}


int main()
{
	StrBlob b1 ;
	{
		StrBlob b2 = {"a"};
		b1 = b2 ;
		b2.push_back("about");
	}
	cout << b1.front() << " " <<  b1.back() << endl;
	return 0;
}
