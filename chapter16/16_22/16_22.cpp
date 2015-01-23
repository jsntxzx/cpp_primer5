#include "QueryResult.h"
#include "TextQuery.h"
#include <fstream>
#include <iostream>
using namespace std;


void runQueries(ifstream &infile)
{
	
	TextQuery tq(infile);
	while(true)
	{
		cout << "enter word to look for or q to quit" << endl;
		string s;
		if(!(cin >>s) || s == "q") break;
		QueryResult qr = tq.query(s);
		qr.print(cout);
	}
}


int main()
{
	ifstream file("Makefile",iostream::in);
	runQueries(file);	
	return 0;
}
