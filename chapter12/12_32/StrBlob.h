#ifndef STRBLOB_H
#define STRBLOB_H
#include<initializer_list>
#include<memory>
#include<vector>
#include<string>

using namespace std;

class StrBlobPtr;

class StrBlob {
	friend class StrBlobPtr;
	public:
		StrBlob():data(make_shared<vector<string>>()){}
		StrBlob(initializer_list<string> il) : data(make_shared<vector<string>>(il)){}
		StrBlob(const StrBlob &s) : data(s.data){}
		string::size_type size() const {return data->size();} 
		bool empty() const {return data->empty();}
		string &front();
		string &back();
		void push_back(const string &t){data->push_back(t);}
		void pop_back();
		StrBlobPtr begin() ;
		StrBlobPtr end() ;
	private:
		shared_ptr<vector<string>> data;
		void check(string::size_type i , const	string & msg) const;
};

#endif
