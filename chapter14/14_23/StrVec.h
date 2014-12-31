#include<memory>
#include<string>
#include<algorithm>
#include<utility>
#include<initializer_list>

using namespace std;
class StrVec
{
	friend bool operator== (const StrVec & ,const StrVec &);
	friend bool operator!= (const StrVec & ,const StrVec &);
	friend bool operator< (const StrVec & ,const StrVec &);
	public:
		StrVec();
		StrVec(initializer_list<string> );
		StrVec & operator=(initializer_list<string>);
		StrVec(const StrVec&);
		StrVec &operator=(const StrVec&);
		~StrVec();
		void push_back(const string &);
		size_t size() const ;
		size_t capacity() const ;
		string *begin() const ;
		string *end() const ;
	private:
		static allocator<string> alloc ;
		void check_n_alloc() ;
		pair<string* ,string *> alloc_n_copy(const string * ,const string *);
		void free();
		void reallocate();
		string *elements ; //first item pointer
		string *first_free; // first free pointer
		string *cap ;  // end pointer
};


bool operator==(const StrVec & ,const StrVec &);
bool operator!=(const StrVec & ,const StrVec &);
bool operator< (const StrVec & ,const StrVec &);
