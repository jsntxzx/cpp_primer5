#include<iostream>
#include "NotQuery.h"
#include "AndQuery.h"
#include "OrQuery.h"
#include "Query.h"

using namespace std ;

int main()
{
	Query q = Query("fiery") & Query("bird") | Query("wind") ;	
	cout << q << endl ;
	return 0;
}
