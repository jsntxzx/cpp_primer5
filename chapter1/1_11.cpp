#include<iostream>

int main()
{
	std::cout << "input two numbers" << std::endl;
	int i,j,k;
	std::cin >> i >> j;
	if (i < j)
	{
		k = i;
		while(k<=j)
		{	
			std::cout << k << " " << std::endl;
			k++;
		}
	}
	else
	{
		k = j;
		while(k<=i)
		{
			std::cout << k << " " << std::endl;
			k++;
		}
		
	}
	
	return 0;
}

