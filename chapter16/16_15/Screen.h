#ifndef _SCREEN_H
#define _SCREEN_H
#include<iostream>
#include<string>
using namespace std ;

template <unsigned H , unsigned W> class Screen
{
	public:
		typedef size_t pos ;
		Screen() = default ;
		Screen(char c) : contents(H*W ,c) {cursor = 0;}
		char get() const {return contents[cursor] ;}
		Screen &move(pos r , pos c) {
			cursor = width*r + c ;
			return *this ;
		}
		Screen &set(pos c)
		{
			cursor = c ;
			return *this ;
		}
		Screen &operator>>(char &c)
		{
			c = contents[cursor] ;
			return *this ;
		}

		Screen &operator<<(const char &c)
		{
			contents[cursor] = c;
			return *this ;
		}

		ostream &print(ostream &os)
		{
			os << contents << endl;
			return os ;
		}
	private:
		pos cursor ;
		pos height = H ;
		pos width = W ;
		string contents ;
};


#endif
