#include"common.h"

int main()
{
	Screen s1 ;
	Screen s2 = Screen(10,9,8);
	s1.print(cout);
	cout << s1.get() << endl;	
	s1.move(2,3).set(4).print(cout);
	s2.print(cout);
	cout << s2.get() << endl;
	return 0;
}
