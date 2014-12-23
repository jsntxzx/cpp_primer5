#include<iostream>
#include<string>

using namespace std;

int main(int argc ,char* argv[])
{
	string now,next;
	cin >> now;
	while(!cin.eof())
	{
		cin >> next;
		if (now != next)
			now = next;
		else
		{
			cout << "find! " << now <<endl;
			break;
		}	
	}
	return 0;
}
