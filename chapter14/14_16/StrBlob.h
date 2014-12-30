#include<iostream>
#include<initializer_list>
#include<memory>
#include<vector>
#include<string>

using namespace std;

class StrBlobPtr;

class StrBlob {
	friend class StrBlobPtr;
	friend bool operator==(const StrBlob &, const StrBlob &);
	friend bool operator!=(const StrBlob &, const StrBlob &);
	public:
		StrBlob():data(make_shared<vector<string>>()){}
		StrBlob(initializer_list<string> il) : data(make_shared<vector<string>>(il)){}
		StrBlob(const StrBlob& s);
		StrBlob & operator=(const StrBlob &s);
		string::size_type size() const {return data->size();} 
		bool empty() const {return data->empty();}
		string &front();
		string &back();
		void push_back(const string &t){data->push_back(t);cout << "using copying" << endl;}
		void push_back(string &&t){data->push_back(t);cout<< "using moving" <<endl; }
		void pop_back();
		StrBlobPtr begin() ;
		StrBlobPtr end() ;
	private:
		shared_ptr<vector<string>> data;
		void check(string::size_type i , const	string & msg) const;
};

bool operator==(const StrBlob& ,const StrBlob& );
bool operator!=(const StrBlob& ,const StrBlob& );
