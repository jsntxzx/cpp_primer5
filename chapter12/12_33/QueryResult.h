#include<iostream>
#include<memory>
#include<set>
#include<map>
#include<vector>
#include<string>
#include "StrBlob.h"
#include "StrBlobPtr.h"

using namespace std;

class QueryResult
{
	public :
		QueryResult(string s ,shared_ptr<set<string::size_type>> p , const StrBlob &f);
		ostream &print(ostream &os);
		StrBlob &getfile();
		set<string::size_type>::iterator begin();
		set<string::size_type>::iterator end();

	private:
		string word;
		shared_ptr<set<string::size_type>> lines ;
		StrBlob file;

};
