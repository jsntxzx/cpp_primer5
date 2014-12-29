#include<iostream>
#include<memory>
#include<set>
#include<map>
#include<vector>
#include<string>


using namespace std;

class StrVec;

class QueryResult
{
	public :
		QueryResult(string s ,shared_ptr<set<string::size_type>> p , shared_ptr<StrVec> f) :
				word(s) , lines(p) , file(f) {}
		ostream &print(ostream &os);
	private:
		string word;
		shared_ptr<set<string::size_type>> lines ;
		shared_ptr<StrVec> file;

};
