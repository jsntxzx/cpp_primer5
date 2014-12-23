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
	int spaceNum = 0;
	int tabNum = 0;
	int enterNum = 0;
	while(cin.get(c))
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
		case ' ':
			spaceNum ++;
			break;
		case '\t':
			tabNum ++ ;
			break;
		case '\n':
			enterNum ++ ;
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
	cout << "the Number of space is " << spaceNum << endl;
	cout << "the Number of table is " << tabNum << endl;
	cout << "the Number of enter is " << enterNum << endl;
	
	return 0;

}
