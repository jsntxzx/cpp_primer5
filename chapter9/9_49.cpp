#include<iostream>
#include<string>

using namespace std;

int main()
{
	string word;
	string nice = "acemnosuvwxz" ;
	while(cin >> word)
	{
		string::size_type pos = 0;
		string result = {};
		while((pos = word.find_first_of(nice,pos)) != string::npos )
		{
			result = result + word[pos];
			pos++;
		}
		cout << "before : " << word << endl;
		cout << "after : " << result << endl; 	
	
	}
	return 0;

}
