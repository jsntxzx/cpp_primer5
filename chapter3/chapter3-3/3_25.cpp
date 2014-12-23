#include<iostream>
#include<vector>

using namespace std;

int main(int argc , char* argv[])
{
	int score;
	vector<int> v1;
	cout << "input student scores " <<endl;
	while(cin >> score)
		v1.push_back(score);
	vector<unsigned> scores(11,0);
	for(auto it = v1.begin() ; it < v1.end() ; it ++)
		scores[*it/10] ++ ;
	for(auto it = scores.begin() ; it < scores.end() ; it ++)
		cout << *it << " ";
	cout << endl;
	return 0;
}
