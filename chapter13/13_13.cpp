#include<iostream>

using namespace std;

class X
{
	public:
		X() {cout << "X()" << endl; x = 0;}
		X(int value) {cout << "X(int)" << endl ; x = value ;}
		X(const X &X1) {cout << "X(X)" << endl; x = X1.x;}
		~X() {cout <<"~X()" << endl;}
	private:
		int x;

};

int main()
{
	X X1 = X();
	X X2(3);
	X X3(X2);
	return 0;

}
