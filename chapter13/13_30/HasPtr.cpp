#include"HasPtr.h"

HasPtr::HasPtr(const HasPtr &hp)
{
	usage = hp.usage;
	value = hp.value;
	ps = hp.ps;
	*usage = *usage + 1;
}

HasPtr & HasPtr::operator=(const HasPtr &hp)
{
	*hp.usage = *hp.usage + 1;
	*usage = *usage - 1 ;
	if(*usage == 0 )
	{
		delete ps;
		delete usage;
	}
	ps = hp.ps ;
	value = hp.value ;
	usage = hp.usage ;
	return *this;

}

HasPtr::~HasPtr()
{
	*usage = *usage -1 ;
	if(*usage == 0)
	{
		delete ps ;
		delete usage ;
	}

}

void HasPtr::print()
{
	cout << "current usage is " << *usage << endl;
	cout << "current value is " << value << endl;
}

void HasPtr::assign(int v)
{
	value = v;
}
