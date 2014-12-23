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
		case 'a' : case 'A':
			aNum ++;
			break;
		case 'e' : case 'E':
			eNum ++;
			break;
		case 'i': case 'I':
			iNum ++;
			break;
		case 'o': case 'O':
			oNum ++ ;
			break;
		case 'u': case 'U':
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
