#include "DebugDelete.h"


int main()
{
	double *pd = new double;
	string *ps = new string;
	DebugDelete d;
	d(pd);
	d(ps);
	return 0 ;
}
