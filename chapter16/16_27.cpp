#include<iostream>
#include<string>
using namespace std ;

template<typename T> class Stack {
	public:
		Stack() {
			CountUsage ++ ;
			cout << "a stack initializtion happens!" << endl;
		}
		static int CountUsage ;
};

template<typename T> int Stack<T>::CountUsage = 0;

void f1(Stack<char> ) ;

class Exercise{
	Stack<double> &rsd ;
	Stack<int> si ;
};

void f1(Stack<char> s)
{}

int main()
{
	Stack<char> *sc ;
	f1(*sc);
	int iObj = sizeof(Stack<string>);
	cout << iObj << endl ;
	cout << Stack<char>::CountUsage << endl;
	cout << Stack<int>::CountUsage << endl;
	cout << Stack<double>::CountUsage << endl;
	cout << Stack<string>::CountUsage << endl;
	return 0 ;
}
