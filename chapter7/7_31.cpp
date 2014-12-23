#include<iostream>

using namespace std;
class X;
class Y;

class X {
	Y *y;
};

class Y {
	X x;
};



int main()
{
	X x;
	Y y;
	return 0;
}
