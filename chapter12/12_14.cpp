#include<iostream>
#include<string>
#include<memory>

using namespace std;

string connect()
{
	cout << "connected " << endl;	
	return "go" ;
}


void disconnect(string *s)
{
	cout << "disconnect " << endl;
}

int main()
{
	string ret = connect();
	shared_ptr<string > p(&ret,disconnect);
	cout << ret << endl;
	return 0;
}
