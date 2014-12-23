#include<iostream>

using namespace std;

int main(int argc , char* argv[])
{
	char c;
	int aNum = 0;
	int eNum = 0;
        int iNum = 0;
	int oNum = 0;
	int uNum = 0;
	while(cin >> c)
	{
		switch(c)
		{
		case 'a' :
			aNum ++;
			break;
		case 'e' :
			eNum ++;
			break;
		case 'i':
			iNum ++;
			break;
		case 'o':
			oNum ++ ;
			break;
		case 'u':
			uNum ++ ;
			break;
		default:
			break;	
		
		}
	
	}

	cout << "the Number of a is " << aNum << endl;
	cout << "the Number of e is " << eNum << endl;
	cout << "the Number of i is " << iNum << endl;
	cout << "the Number of o is " << oNum << endl;
	cout << "the Number of u is " << uNum << endl;
	
	return 0;

}
