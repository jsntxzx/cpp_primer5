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

bool HasPtr::operator<(const HasPtr &hp1) const
{
	return value < hp1.value ;
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

void HasPtr::assign(int v)
{
	value = v;
}

int HasPtr::getvalue()
{
	return value ;
}
