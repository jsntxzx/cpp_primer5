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
	private:
		shared_ptr<vector<string>> check(size_t , const string &) const;
		weak_ptr<vector<string>> wptr;
		size_t currpos ;
};


bool operator==(const StrBlobPtr & ,const StrBlobPtr &);
bool operator!=(const StrBlobPtr & ,const StrBlobPtr &);
bool operator<(const StrBlobPtr & ,const StrBlobPtr &);
