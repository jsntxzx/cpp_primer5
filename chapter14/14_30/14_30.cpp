#include<iostream>
#include"StrBlob.h"
#include"StrBlobPtr.h"

using namespace std;

int main()
{
	StrBlob s({"aa","bb","cc","ee","ff","gg"});
	StrBlobPtr sp(s);
	cout << (sp++)->size() << endl;
	cout << *(++sp) << endl;
	cout << (sp--).deref() << endl;
	cout << (sp+2).deref() << endl;
	cout << (sp-3).deref() << endl;
	return 0;
}
