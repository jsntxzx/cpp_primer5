#include "String.h"
#include "StrVec.h"
#include "StrBlob.h"
#include "StrBlobPtr.h"

using namespace std;

int main()
{
       String s1("1234");
       StrVec s2 = {"hello" , "aaa" , "bbb"};
       StrBlob s3({"a","bb","ccc"});
       StrBlobPtr s4(s3);
       cout << s1[0] << endl;
       cout << s2[0] << endl;
       cout << s3[0] << endl;
       cout << s4[0] << endl;
       return 0;	
}
