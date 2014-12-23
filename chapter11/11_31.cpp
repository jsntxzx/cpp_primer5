#include<iostream>
#include<map>
#include<string>

using namespace std;

void search_and_print(multimap<string,string> &mm , string s) 
{
	auto pos = mm.equal_range(s);
	if(pos.first == pos.second)
		cout << "cann't find author " << s <<endl; 
	else
	{
		while(pos.first != pos.second)
		{
			cout << "author : " << pos.first -> first << "\t";
			cout << "production : " << pos.first -> second << endl;
			pos.first ++ ;
		}
	}

}


int main()
{
	multimap<string , string> mm;
	mm.insert({"xiang","1"});
	mm.insert({"xiang","2"});
	mm.insert({"xiang","3"});
	mm.insert({"li","1"});
	mm.insert({"li","2"});
	mm.insert({"li","3"});
	search_and_print(mm,"xiang");
	search_and_print(mm,"li");
	search_and_print(mm,"luo");
	return 0;
}
