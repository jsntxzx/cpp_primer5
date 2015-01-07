#ifndef _QUERYRESULT_H
#define _QUERYRESULT_H

#include<iostream>
#include<memory>
#include<set>
#include<map>
#include<vector>
#include<string>


using namespace std;

class QueryResult
{
	public :
		QueryResult() = delete;
		QueryResult(string s ,shared_ptr<set<string::size_type>> p , shared_ptr<vector<string>> f) :
				word(s) , lines(p) , file(f) {}
		ostream &print(ostream &os);
		shared_ptr<vector<string>> getfile() const {return file ;}
		set<string::size_type>::iterator begin() {return lines->begin() ;}
		set<string::size_type>::iterator end() {return lines->end() ;}
	private:
		string word;
		shared_ptr<set<string::size_type>> lines ;
		shared_ptr<vector<string>> file;

};

#endif
