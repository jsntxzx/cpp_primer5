#include "String.h"
#include "StrVec.h"
#include "StrBlob.h"
#include "StrBlobPtr.h"

using namespace std;

int main()
{
	String s1("1111");
	String s2("1112");
	StrVec s3 , s4 ;
	StrBlob s5 ,s6;

	if(s1<s2)
		cout << "s1 < s2" << endl;
	else
		cout << "s1 >= s2" << endl;
	
	if(s3<s4)
		cout << "s3 < s4" << endl;
	else
		cout << "s3 >= s4" << endl;

	if(s5<s6)
		cout << "s5 < s6" << endl;
	else
		cout << " s5 >= s6" << endl;
       return 0;	
}
