#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

class IsEqual
{
	public:
		IsEqual(int i = 0):target(i){}
		bool operator()(int &a)
		{
			return a==target;
		}
	private:
		int target ;


};


int main()
{
	vector<int> v = {1,2,3,4,5,4,3,2,1};
	replace_if(v.begin(),v.end(),IsEqual(1),10);
	for_each(v.begin(),v.end(),[](int a){cout << a << " ";});
	cout << endl;
	return 0;
}	

