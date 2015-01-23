#ifndef _QUERYRESULT_H
#define _QUERTRESULT_H

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
		QueryResult(string s ,shared_ptr<set<string::size_type>> p , vector<string>* f) :
				word(s) , lines(p) , file(f) {}
		ostream &print(ostream &os);
	private:
		string word;
		shared_ptr<set<string::size_type>> lines ;
		vector<string>* file;

};

#endif
