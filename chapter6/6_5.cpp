#include<iostream>
#include<cmath>

using namespace std;

int retint(int a)
{
	return abs(a);
}

float retfloat(float a)
{
	return fabs(a);
}


int main()
{
	cout << "the result of int " << retint(-2) <<endl;
	cout << "the result of float " << retfloat(-9.5) <<endl;
	return 0;

}
