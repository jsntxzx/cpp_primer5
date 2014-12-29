#include <iostream>
#include "Message.h"
#include "Folder.h"


using namespace std;

int main()
{
	Message m1("hello world");	
	Folder f ;
	m1.save(f);
	Message m2 = m1 ;
	cout << f.NumofObjects() << endl; 
	m1.remove(f);
	cout << f.NumofObjects() << endl; 
	m2.remove(f);
	return 0;
}	
