#include<memory>
#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std ;

class String
{
	friend ostream & operator<<(ostream &os ,String &s);
	public:
		String();
		String(const char *);
		String &operator=(const String &);
		~String();
		void push_back(char);
		size_t size() const;
		size_t capacity() const;
		char * begin() const;
		char * end() const;
	
	private:
		static allocator<char> alloc ;
		pair<char * , char *> alloc_n_copy(const char * ,const char*);
		void free();
		void check_alloc();
		void reallocate();
	  	char *spos ;
		char *first_free ;
		char *epos ;	

};

ostream &operator<<(ostream &os ,String &s);
