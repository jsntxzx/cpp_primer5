#include<iostream>

int main()
{
	int sum = 0 ;
	int i = 50;
	while( i < 101)
	{
		sum += i;
		i++;	
	}
	std::cout << "the result is " << sum << std::endl;
	return 0;


}
