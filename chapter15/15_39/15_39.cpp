#include<iostream>
#include "AndQuery.h"
#include "OrQuery.h"
#include "NotQuery.h"
#include "Query.h"

using namespace std ;

int main()
{
	ifstream file("Makefile",iostream::in); 
	TextQuery t(file) ;
	Query q = Query("fiery") & Query("bird") | Query("wind") ;	
	q.eval(t).print(cout);
	Query q1 = ~Query("$(CC)");
	q1.eval(t).print(cout);
	return 0;
}
