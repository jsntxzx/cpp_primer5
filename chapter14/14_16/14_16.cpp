#include "String.h"
#include "StrVec.h"
#include "StrBlob.h"
#include "StrBlobPtr.h"

using namespace std;

int main()
{
	String s1("xiang");
	String s2("111");
	StrVec s3 , s4 ;
	StrBlob s5 ,s6;

	if(s1==s2)
		cout << "equal!" << endl;
	else
		cout << "not equal!" << endl;
	
	if(s3==s4)
		cout << "equal!" << endl;
	else
		cout << "not equal!" << endl;

	if(s5==s6)
		cout << "equal!" << endl;
	else
		cout << "not equal!" << endl;
       return 0;	
}
