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
		auto result = tq.query(s);
		cout << get<0>(result) << " occurs " << get<1>(result)->size() << " times" << endl;
		for (auto num : *get<1>(result))
			cout << "\t(line " << num+1 << ") " << *(get<2>(result)->begin() + num) << endl;
	}
}


int main()
{
	ifstream file("Makefile",iostream::in);
	runQueries(file);	
	return 0;
}
