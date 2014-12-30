#include<memory>
#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std ;

class String
{
	
	friend bool operator==(const String & , const String &);
	friend bool operator!=(const String & , const String &);
	public:
		String();
		String(const char *);
		String(const String &);
		String &operator=(const String &);
		String(String &&) noexcept ;
	        String &operator=(String &&) noexcept ; 
		~String();
		void print();
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


bool operator==(const String & , const String &);
bool operator!=(const String & , const String &);
