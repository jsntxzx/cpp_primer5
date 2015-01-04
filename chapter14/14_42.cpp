#include<iostream>
#include<functional>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;
using namespace std::placeholders;
int main()
{
	vector<int> vi = {2,3,4,51,333,44223, 12,3,45,2,32333,11};
	auto num = count_if(vi.begin(),vi.end(),bind(greater<int>(),_1,1024));
	cout << "there are " << num << " numbers in vi bigger than 1024 " << endl;
	vector<string> vs = {"11","1212","pooh"};
	auto pos = find_if(vs.begin(),vs.end(),bind(not_equal_to<string>() , _1 ,"pooh"));
	cout << "the first string not equal to pooh is " << *pos << endl;
	transform(vi.begin(),vi.end(),vi.begin(),bind(multiplies<int>(),_1,2));
	for_each(vi.begin(),vi.end(),[](int a){cout << a << " " ;});
	cout << endl;
	return 0;
}

