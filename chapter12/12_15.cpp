#include<iostream>
#include<string>
#include<memory>

using namespace std;

string connect()
{
	cout << "connected " << endl;	
	return "go" ;
}


int main()
{
	string ret = connect();
	shared_ptr<string > p(&ret,[](string *s) {cout << "disconnect" << endl;});
	cout << ret << endl;
	return 0;
}
