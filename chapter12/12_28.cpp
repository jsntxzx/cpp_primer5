#include<iostream>
#include<fstream>
#include<sstream>
#include<string>
#include<vector>
#include<map>
#include<set>

using namespace std;

void genDatabase(fstream &f ,vector<string> &v , map<string,set<int> >&m)
{
       string s ;
       int linenum = 1;
       while(getline(f,s))
       {
            v.push_back(s);
            istringstream is(s);
            string word;
            while(is >> word)
                m[word].insert(linenum);
            linenum ++;
        }          
	cout << "finishing database " << endl;
}

void queryDataAndPrint(vector<string> &v , map<string,set<int>> &m ,string word)
{
	cout << "printing query result of " << word << endl;	
	auto p = m.find(word);
	if( p == m.end())
		cout << "cannot find such a word" << endl;
	else
	{
		cout << p->first << " occurs " << p->second.size() << " times"<< endl;
		for(auto num : p->second)
			cout << num << " " ;
		cout << "\n" << endl;
	}
}



int main()
{
	fstream file("Makefile" , iostream::in);
	vector<string> v;
	map<string,set<int> > m;
	genDatabase(file,v,m);
	string s;
	while(cin >> s)
	{
		queryDataAndPrint(v,m,s);
	}
	return 0;
}
