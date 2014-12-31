#include<memory>
#include<string>
#include<vector>

using namespace std;

class StrBlob;
class StrBlobPtr{
	friend bool operator==(const StrBlobPtr & ,const StrBlobPtr &);
	friend bool operator!=(const StrBlobPtr & ,const StrBlobPtr &);
	friend bool operator<(const StrBlobPtr & ,const StrBlobPtr &);
	public:
		StrBlobPtr() : currpos(0){}
		StrBlobPtr(StrBlob &a , size_t ssz = 0) ;
		string & deref() const ;
		StrBlobPtr & incr() ;
		size_t pos(){return currpos;}
		string &operator[](size_t);
		const string &operator[](size_t) const ;
		StrBlobPtr &operator++();
		StrBlobPtr &operator--();
		StrBlobPtr operator++(int);
		StrBlobPtr operator--(int);
		StrBlobPtr &operator+(size_t);
		StrBlobPtr &operator-(size_t);
	private:
		shared_ptr<vector<string>> check(size_t , const string &) const;
		weak_ptr<vector<string>> wptr;
		size_t currpos ;
};


bool operator==(const StrBlobPtr & ,const StrBlobPtr &);
bool operator!=(const StrBlobPtr & ,const StrBlobPtr &);
bool operator<(const StrBlobPtr & ,const StrBlobPtr &);
