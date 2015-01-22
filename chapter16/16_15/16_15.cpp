#include "Screen.h"

int main()
{
	Screen<4,5> s('s');
	char mc ;
	s >> mc ;
	s << 'c' ;
	s.print(cout);
	cout << mc << endl;
	return 0;

}
