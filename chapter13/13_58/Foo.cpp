#include"Foo.h"


Foo Foo::sorted() &&
{
	sort(v.begin(),v.end());
	cout << "using sorted() && " << endl;
	return *this;
}

Foo Foo::sorted() const &
{
	cout << "using sorted() const &" << endl;
	/* wrong verson
	Foo ret(*this) ;
	return ret.sorted() ;
	*/
	return Foo(*this).sorted();
}
